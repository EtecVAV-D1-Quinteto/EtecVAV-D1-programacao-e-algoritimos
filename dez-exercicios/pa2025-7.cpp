#include <iostream>

int main() {
    int nums[5],i;
    bool crescente = true, decrescente = true;
    char n='s';
    while(n=='s'){
    std::cout << "Digite 5 numeros:\n";

    for (i = 0; i < 5; i++) {
        std::cin >> nums[i];
    }

    for (i = 0; i < 4; i++) {
        if (nums[i] < nums[i + 1]) {
            decrescente = false;
        }
        if (nums[i] > nums[i + 1]) {
            crescente = false;
        }
    }

    if (crescente) {
        std::cout << "Ordem crescente\n";
    } else if (decrescente) {
        std::cout << "Ordem decrescente\n";
    } else {
        std::cout << "Nao ordenada\n";
    }
    std::cout << "Usar novamente?(s/n) ";
    std::cin >> n;
}
    return 0;
}
