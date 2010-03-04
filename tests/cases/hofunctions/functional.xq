module namespace func = "http://snelson.org.uk/functions/functional";

declare function func:head($l)
{
  subsequence($l, 1, 1)
};

declare function func:tail($l)
{
  subsequence($l, 2)
};

declare function func:id($a)
{
  $a
};

declare function func:incr($a)
{
  $a + 1
};

declare function func:flip($f)
{
  function($a, $b) { $f($b, $a) }
};

declare function func:foldl($f, $z, $l)
{
  if(empty($l)) then $z
  else func:foldl($f, $f($z, $l[1]), func:tail($l))
};

declare function func:foldl1($f, $l)
{
  func:foldl($f, $l[1], func:tail($l))
};

declare function func:foldr($f, $z, $l)
{
  if(empty($l)) then $z
  else $f($l[1], func:foldr($f, $z, func:tail($l)))
};

declare function func:foldr1($f, $l)
{
  let $tail := func:tail($l)
  return
    if(empty($tail)) then $l[1]
    else $f($l[1], func:foldr1($f, $tail))
};

declare function func:iterate($f, $a)
{
  $a, func:iterate($f, $f($a))
};

declare function func:map($f, $l)
{
  for $a in $l return $f($a)
};

declare function func:repeat($a)
{
  $a, func:repeat($a)
};

declare function func:take($n, $l)
{
  subsequence($l, 1, $n)
};

declare function func:until($p, $f, $a)
{
  if($p($a)) then $a
  else func:until($p, $f, $f($a))
};

declare function func:zipWith($f, $a, $b)
{
  if(empty($a) or empty($b)) then () else
  ($f($a[1], $b[1]), func:zipWith($f, func:tail($a), func:tail($b)))
};

declare function func:curry($f as function(*)) as function(item()*) as item()*
{
  if(function-arity($f) eq 0) then error(xs:QName("func:FNDY0001"), "Can't curry a 0 arity function item")
  else if(function-arity($f) eq 1) then $f
  else function($a) { func:curry(partial-apply($f, $a)) }
};
