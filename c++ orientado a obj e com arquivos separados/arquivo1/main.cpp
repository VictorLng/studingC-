#include "header/libs.hpp"
#include "contador.cpp"

using namespace std;

int main(){
     int num;
    cout << "me de um valor para imprimir" << endl;
    cin >> num;
   
    contador(num);
   
    cout << "precione algo para fechar o pograma meu fio";
    getch();
}