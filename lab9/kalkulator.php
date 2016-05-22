<!DOCTYPE HTML>

<html lang="pl">

<head>
	<title>Kalkulator</title>
</head>

<body>
	<form action="calc.php" method="post">
	<table bgcolor="blue" border=2>
		<tr>
		<td>
			<b><center>Pierwsza zmienna</center></b>
			<input type="number" name="arg1"/>
		</td>
		<td>
			<b>+</b><input type="radio" name="dzialanie" value="+">
			<b>-</b><input type="radio" name="dzialanie" value="-">
			<b>*</b><input type="radio" name="dzialanie" value="*">
			<b>/</b><input type="radio" name="dzialanie" value="/">
		</td>
		<td>
			<b><center>Druga zmienna</center></b>
			<input type="number" name="ar2"/>
		</td>
		<td>
			<input type="submit" value="==">
		</td>
		</tr>
	</table>
</body>

</html>
