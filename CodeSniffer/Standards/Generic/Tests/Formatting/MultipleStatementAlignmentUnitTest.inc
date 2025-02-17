<?php

// Valid
$var1    = 'var1';
$var10   = 'var1';
$var100  = 'var1';
$var1000 = 'var1';

// Invalid
$var1    = 'var1';
$var10 = 'var1';
$var100 = 'var1';
$var1000 = 'var1';

// Valid
$var1  = 'var1';
$var10 = 'var1';

$var100  = 'var1';
$var1000 = 'var1';

// Invalid
$var1     = 'var1';
$var10    = 'var1';

$var100   = 'var1';
$var1000  = 'var1';

// Valid
$var1    .= 'var1';
$var10   .= 'var1';
$var100  .= 'var1';
$var1000 .= 'var1';

// Invalid
$var1    .= 'var1';
$var10.= 'var1';
$var100 .= 'var1';
$var1000 .= 'var1';

// Valid
$var1     = 'var1';
$var10   .= 'var1';
$var100   = 'var1';
$var1000 .= 'var1';

// Invalid
$var1    = 'var1';
$var10   .= 'var1';
$var100  = 'var1';
$var1000.= 'var1';

// Valid
$var1  .= 'var1';
$var10 .= 'var1';

$var100  .= 'var1';
$var1000 .= 'var1';

// Invalid
$var1     .= 'var1';
$var10    .= 'var1';

$var100   .= 'var1';
$var1000  .= 'var1';

// Valid
$var = 100;

// InValid
$var  = 100;

$commentStart = $phpcsFile->findPrevious();
$commentEnd   = $this->_phpcsFile;
$expected    .= '...';

// Invalid
$this->okButton    = new Button();
$content = new MyClass();


$GLOBALS['_PEAR_ERRORSTACK_SINGLETON'] = array();

class MyClass
{
    const MODE_DEBUG = 'debug';
    const MODE_DEBUG2 = 'debug';

    $array[$test] = 'anything';
    $var          = 'anything';

    const MODE_DEBUG2  = 'debug';
    $array[$test]    = 'anything';
    $var             = 'anything';
    $array[($test + 1)] = 'anything';
    $array[($blah + (10 - $test))] = 'anything';
}

function myFunction($var=true)
{
    if ($strict === true) {
        $length          = strlen($string);
        $lastCharWasCaps = ($classFormat === false) ? false : true;

        for ($i = 1; $i < $length; $i++) {
            $isCaps = (strtoupper($string[$i]) === $string[$i]) ? true : false;
            if ($isCaps === true && $lastCharWasCaps === true) {
                return false;
            }

            $lastCharWasCaps = $isCaps;
        }
    }
}

// Valid
for ($i = 0; $i < 10; $i += 2) {
    $i = ($i - 1);
}

// Invalid
foreach ($files as $file) {
    $saves[$file] = array();
    $contents = stripslashes(file_get_contents($file));
    list($assetid, $time, $content) = explode("\n", $contents);
    $saves[$file]['assetid'] = $assetid;
}

$i = ($i - 10);
$ip = ($i - 10);
for ($i = 0; $i < 10; $i += 2) {
    $i = ($i - 10);
}

// Valid
$variable = 12;
$var      = a_very(long_line('that', 'contains'),
                   a_bunch('of long', 'parameters'),
                   'that_need to be aligned with the equal sign');
$var2     = 12;

// Valid
$variable = 12;
$var      = 'a very long line of text that contains '
            .$someVar
            .' and some other stuff that is too long to fit on one line';
$var2     = 12;

// Invalid
$variable = 12;
$var      = a_very(long_line('that', 'contains'),
                   a_bunch('of long', 'parameters'),
                   'that_need to be aligned with the equal sign');
$var2 = 12;

// Invalid
$variable = 12;
$var      = 'a very long line of text that contains '
            .$someVar
            .' and some other stuff that is too long to fit on one line';
$var2 = 12;

// Valid
$variable = 12;
$var     .= 'a very long line of text that contains '
            .$someVar
            .' and some other stuff that is too long to fit on one line';
$var2     = 12;

// Valid
$variable += 12;
$var      .= 'a very long line of text that contains '
            .$someVar
            .' and some other stuff that is too long to fit on one line';
$var2      = 12;

// Invalid
$variable  = 12;
$var      .= 'a very long line of text that contains '
            .$someVar
            .' and some other stuff that is too long to fit on one line';
$var2      = 12;

// Valid
$error = false;
while (list($h, $f) = each($handle)) {
    $error = true;
}

// Valid
$value = false;
function blah ($value = true) {
    $value = false;
    if ($value === true) {
        $value = false;
    }
}

if (TRUE) {
    $args = array('foo' => 'foo');
    $res  = 'bar';
}

// @codingStandardsChangeSetting Generic.Formatting.MultipleStatementAlignment maxPadding 8

$one                = 'one';
$varonetwo          = 'two';
$varonetwothree     = 'three';
$varonetwothreefour = 'four';

$one        = 'one';
$varonetwo .= 'two';
$varonetwo  = 'two';
$varonetwo .= 'two';
$varonetwothree     = 'three';
$varonetwothreefour = 'four';

// @codingStandardsChangeSetting Generic.Formatting.MultipleStatementAlignment maxPadding 1000

$filterQuery = SquizRoadmap::getSearchQueryFilter($searchParams);
Channels::addToBasket('itemid', $filterQuery);
$query   = DAL::getDALQuery('SquizRoadmapItem', 'getItemIds');
$results = DAL::getAssoc($query, 0);

$path  = BaseSystem::getDataDir('SquizRoadmap').'/items/';
$path .= FileSystem::getHashDir($itemid).'/'.$itemid;

$contents  .= 'if (';
$conditions = array();

$bar = 'hi';
$foo = $moo = $test;
$boo = 'boo';
$foo = $moooo = 'foo';
