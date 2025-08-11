#include <iostream>
#include <limits> 
bool ehVogal(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return true;
    } else {
        return false;
    }
}

bool ehConsoante(char c) {
    if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) && !ehVogal(c)) {
        return true;
    } else {
        return false;
    }
}

int contarVogais(char texto[]) {
    int count = 0;
    for (int i = 0; texto[i] != '\0'; i++) {
        if (ehVogal(texto[i])) {
            count++;
        }
    }
    return count;
}

int contarConsoantes(char texto[]) {
    int count = 0;
    for (int i = 0; texto[i] != '\0'; i++) {
        if (ehConsoante(texto[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char nome[100], n = 's';

    while (n == 's' || n == 'S') {
        std::cout << "Digite o nome completo: ";
        std::cin.getline(nome, 100);

        int vogais = contarVogais(nome);
        int consoantes = contarConsoantes(nome);

        std::cout << "Quantidade de vogais: " << vogais << std::endl;
        std::cout << "Quantidade de consoantes: " << consoantes << std::endl;

        std::cout << "\nUsar Novamente? (s/n): ";
        std::cin >> n;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // limpa o buffer
    }

    return 0;
}
