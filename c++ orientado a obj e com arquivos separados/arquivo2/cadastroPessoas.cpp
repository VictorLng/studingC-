#include <iostream>
#include <string>

class Pessoa {
 private:
    std::string pNome;
    int pIdade;
    float pAltura;
 public:
    Pessoa(std::string nome, int idade, float altura) {
        pNome = nome;
        pIdade = idade;
        pAltura = altura;
    }

    void showDados() {
        std::cout << "Nome: " << pNome << ", Idade: " << pIdade << ", Altura: " << pAltura << '\n';
    }
};

int main() {
    Pessoa carlos("carlos", 19, 1.94);
    carlos.showDados();
    return 0;
}