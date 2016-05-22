<!DOCTYPE HTML>
<html lang="pl">
<head>
	<title>Obliczenie</title>
</head>

<body>
<?php
	$arg1 = $_POST["arg1"];
	$arg2 = $_POST["arg2"];
	$dzialanie = $_POST["dzialanie"];

	if(isset($arg1) AND isset($dzialanie) AND isset($arg2)){

		if ($operator == "+"){
			$wynik = $arg1 + $arg2;
			echo "Wynik dodawania to  $wynik";
		}

		if ($operator == "-"){
			$wynik = $arg1 - $arg2;
			echo "Wynik odejmowania to  $wynik";
		}

		if ($operator == "*"){
			$wynik = $arg1 * $arg2;
			echo "Wynik mnozenia to  $wynik";
		}

		if ($operator == "/"){
			$wynik = $arg1 / $arg2;
			echo "Wynik dzielenia to $wynik";
		}

	}

	else
		echo "Blad"
?>
</body>

</html>
