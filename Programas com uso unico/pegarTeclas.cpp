#include <iostream>
#include <conio.h>
#include <string>

int main() {

    char op[10] = {0};

    for (int i=0; i<10; i++){
        op[i] = getch();
    }
    std::cout << "aqui estão os ultimos 10 digitos: "<< op ;

}