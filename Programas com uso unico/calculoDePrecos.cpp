#include <iomanip>
#include <conio.h>
#include <iostream>

using namespace std;

int main(){
    long double preco;
    cout << "me diga o preco";
    cin >> get_money(preco);

    if( cin.fail() ){
        cerr << "Falha ao ler o preco do produto tente novamente";
        return 1;
    }else{
        cout << "o valor do produto eh: " << put_money(preco) << endl;
    }
    getch();
}