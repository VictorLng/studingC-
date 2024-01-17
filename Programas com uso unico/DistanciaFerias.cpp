#include <conio.h>
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

 class ferias{
 public:
   int fDia;
   int fMes;

   ferias(int dia, int mes){ 
    fDia = dia, fMes = mes;
    }
};
string getMes(int mes){

string mesDoAno;

    switch (mes)
{
case 1:
 mesDoAno = "janeiro";
    break;
case 2:
 mesDoAno = "fevereiro";
    break;
case 3:
 mesDoAno = "marco";
    break;
case 4:
 mesDoAno = "abril";
    break;
case 5:
 mesDoAno = "maio";
    break;
case 6:
 mesDoAno = "junho";
    break;
case 7:
 mesDoAno = "julho";
    break;
case 8:
 mesDoAno = "agosto";
    break;
case 9:
 mesDoAno = "setembro";
    break;
case 10:
 mesDoAno = "outubro";
    break;
case 11:
 mesDoAno = "novembro";
    break;
case 12:
 mesDoAno = "dezembro";
    break;


default:
    break;
}
return mesDoAno;
}
int main(){

time_t timer;
struct std::tm *data_e_hora;

time(&timer);
data_e_hora = localtime(&timer);

int diaFerias,mesFerias
,horas = data_e_hora->tm_hour
,minutos =data_e_hora->tm_min
,dia =data_e_hora->tm_mday
,mes =data_e_hora->tm_mon + 1
,ano =data_e_hora->tm_year + 1900;



cout << "agora sao " << horas << ":" << minutos << " do dia " << dia << " de " << getMes(mes) << " de " << ano << endl;

cout << "digite nesta sequencia dia e mes das suas ferias \n";
cin >> diaFerias;

cin >> mesFerias;
if(diaFerias > 31 || mesFerias > 12 ){
   cerr << "erro data invalida";
   getch();
}else{
ferias data_ferias( diaFerias , mesFerias);
int distanciaDeDias = data_ferias.fDia - dia
,distanciaDeMes = data_ferias.fMes - mes;
if(distanciaDeDias < 0){

    distanciaDeMes = distanciaDeMes - 1;
    distanciaDeDias = 31 - dia;
    
}

cout << "faltam em media o total de " << distanciaDeDias << " dias e " << distanciaDeMes << " meses para suas ferias" << endl;
 
getch();
}
}
