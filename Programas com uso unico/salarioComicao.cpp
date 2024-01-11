#include <iostream>

using namespace std;
 
int main() {
 double salario, vendas, total;
    
    cin >> salario;
    cin >> vendas;
    
    total = salario + (vendas * 15/100);
    
    cout << "TOTAL = R$ "<<total;
 
    return 0;
}