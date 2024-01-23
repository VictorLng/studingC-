#include "iostream"

class banco{
    private:
    std::string uNome;
    float saldo;
    float* pSaldo = &saldo;
    public:
    banco(std::string nome, float saldo ){
        
        *pSaldo = saldo;
         uNome = nome;
        
    }
    int depositar(float x){
        *pSaldo += x;

    }
    int sacar(float x){
        *pSaldo -= x;
        
    }
    int ShowSaldo(){
       return *pSaldo;
    }
   
};

int main(){
banco bank("Nuno", 0);
int option;
float valor;

do{
std::cout << "Menu" << '\n'
<< "1: Saca" << '\n'
<< "2: Saldo" << '\n'
<< "3: Depositar" << '\n'
<< "0: Sair" << '\n';
std::cin >> option;
switch (option)
{
case 1: std::cout << "QUANTO VAI SACAR" << '\n';
        std::cin >> valor;
        if(valor > bank.ShowSaldo()){
            std::cout << "SALDO INSUFICENTE EM CONTA" << '\n';
        }else{
        bank.sacar(valor);
        std::cout << "FORAM SACADOS DA SUA CONTA O TOTAL DE: " << valor << '\n';
        valor = 0;}
        break;

case 2: std::cout << "SEU SALDO E: " <<  bank.ShowSaldo() << '\n';    break;

case 3: std::cout << "QUANTO VAI SER DEPOSITADO ?" << '\n';
        std::cin >> valor;
        bank.depositar(valor);
        std::cout << "DEPOSITADO O TOTAL DE: " << valor << '\n';    break;

case 0: std::cout << "FINALIZANDO"; break;

default:
 std::cout << "[ERRO] OPTION SELECTED NOT EXISTS";
    break;
}

}while(option != 0);

}