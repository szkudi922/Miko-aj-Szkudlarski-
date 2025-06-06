let user=prompt("Podaj login","");
let passwd=prompt("Podaj haslo","");
if(user=="Jakub" && passwd=="Debian")
{
document.write("<h1>Tajna strona</h1>");
}
else
{
alert("Zly login lub haslo");
}