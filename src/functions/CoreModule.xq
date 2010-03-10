module namespace core = "http://xqilla.sourceforge.net/core";

declare function core:to($a as xs:integer?, $b as xs:integer?) as xs:decimal*
{
  if(empty($a) or empty($b)) then ()
  else core:to_helper($a treat as xs:decimal, $b treat as xs:decimal)
};

declare function core:to_helper($a as xs:decimal, $b as xs:decimal) as xs:decimal*
{
  if($a gt $b) then () else ($a, core:to_helper($a + 1, $b))
};

