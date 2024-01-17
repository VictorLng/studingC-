#include "header/libs.hpp"
#include "contador.cpp"

using namespace std;

int contar() {
    clock_t start{clock()};
    int num;
    cout << "Me de um valor para imprimir: ";
    cin >> num;

    contador(num);

    cout << "Pressione algo para fechar o programa meu fio";
    clock_t end{clock()};
    double time_taken{double(end - start) / double(CLOCKS_PER_SEC)};
    cout << "o tempo de execucao do programa foi de : " << fixed 
         << time_taken << setprecision(5);
    cout << " seg " << '\n'; //haru

    getch();
}

int main() {
    int seletor;

    do {
        cout << "Escolha a sua funcao do programa \n"
             << "1: Contador\n"
             << "0: Sair\n";
        cin >> seletor;

        switch (seletor) {
            case 1:
                contar();
                break;

            case 0:
                cout << "Saindo do programa. Ate mais!\n";
                break;

            default:
                cout << "Opção invalida. Tente novamente.\n";
                break;
        }
    } while (seletor != 0);

    return 0;
}