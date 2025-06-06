var znak1=prompt("Podaj liczbe","");
var znak2=prompt("Podaj druga liczbe","");
var liczba1=parseInt(znak1);
var liczba2=parseInt(znak2);
if(liczba1==liczba2)
{
	alert("Liczby sa rowne");
}
else if(liczba1>liczba2)
{
	alert("liczba "+liczba1+" jest wieksza");
}
else
{
	alert("liczba "+liczba2+" jest wieksza");
}