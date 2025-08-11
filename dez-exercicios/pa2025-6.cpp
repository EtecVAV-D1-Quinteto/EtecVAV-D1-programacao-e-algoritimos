#include <iostream>
#include <string>
int main() {
    std::string dias[7] = {"Domingo", "Segunda-feira", "Terca-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sabado"};
    int num;

    std::cout << "Digite um numero de 1 a 7: ";
    std::cin >> num;

    if (num >= 1 && num <= 7) {
        std::cout << dias[num - 1];
    } else {
        std::cout << "Numero invalido! Digite entre 1 e 7." ;
    }

    return 0;
}
