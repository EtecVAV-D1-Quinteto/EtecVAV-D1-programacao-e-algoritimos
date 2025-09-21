#include <iostream>
#include <vector>
#include <string>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void aparecerletra(char chute, std::string &palavra_escolhida, std::string &palavra_oculta, int &t) {
    bool acertou = false;

    for (int i = 0; i < palavra_escolhida.size(); i++) {
        if (palavra_escolhida[i] == chute) {
            palavra_oculta[i] = chute;
            acertou = true;
        }
    }

    if (!acertou) {
        t = t - 1;
    }
    std::cout << "\nVoce tem " << t << " tentativas restantes\n";
}


int main(int argc, char** argv) {
    int indice;
    char chute, n = 's';
    int tentativas;
    int t,i;
    bool ganhar, acertou;

srand(time(0));

    while (n == 's') {

        std::vector<std::string> palavra = {"basquete", "futebol", "volei", "handball", "tenis", "natacao", "boxe", "futsal"};
        indice = rand() % palavra.size();

        std::string palavra_escolhida = palavra[indice];
        std::string palavra_oculta(palavra_escolhida.size(), '_');

        t = 6;
        while (t > 0 || !ganhar) {
            ganhar = (palavra_escolhida == palavra_oculta);
            std::cout << "\n------Forca (esportes)------\n\n\n" << "     " << palavra_oculta;
            if (ganhar) {
                std::cout << "\nParabens voce ganhou!!\nA palavra era " << palavra_oculta;
                break;
            }
            if (t == 0) {
                std::cout << "Voce perdeu, suas tentativas acabaram\nA palavra era " << palavra_escolhida;
                break;
            }
			
            std::cout << "\nDigite uma letra: ";
			
            std::cin >> chute;
			
        aparecerletra(chute, palavra_escolhida, palavra_oculta, t);

          
        }

        std::cout << "\n\nJogar novamente(s/n)?";
        std::cin >> n;
    }

    return 0;
}

