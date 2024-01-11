#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string vendedor;
    double salario,vendas;
    cin >> vendedor;
    cout << fixed << setprecision(2);
    cin >> salario >> vendas;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << salario+vendas*0.15 << endl;

    return 0;
}