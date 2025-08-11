#include <iostream>
#include <string>

int main() {
    std::string palavra;
    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;

    int inicio = 0;
    int fim = palavra.length() - 1;
    int eh = 1;

    while (inicio < fim) {
        if (palavra[inicio] != palavra[fim]) {
            eh = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (eh == 1) {
        std::cout << palavra << " � um pal�ndromo!";
    } else {
        std::cout << palavra << " n�o � um pal�ndromo.";
    }

    return 0;
}
