#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    int caso = 1;
    char r='s';
    
    while(r=='s'){

    while (true) {
        cout << "Digite N (quantidade de temperaturas) e M (tamanho do intervalo), ou 0 0 para sair: ";
        cin >> N >> M;

        if (N == 0 && M == 0) {
        	cout << "Usar novamente(s/n)?";
        	cin >> "\n" r;
		}

        vector<int> temp(N);

        cout << "Agora digite " << N << " temperaturas (uma por linha ou separadas por espaço):\n";
        for (int i = 0; i < N; i++) {
            cin >> temp[i];
        }

        int menor, maior;
        int soma = 0;
        for (int i = 0; i < M; i++) soma += temp[i];
        int media = soma / M;
        menor = maior = media;

        for (int i = 1; i <= N - M; i++) {
            soma = 0;
            for (int j = 0; j < M; j++) {
                soma += temp[i + j];
            }
            media = soma / M;
            menor = min(menor, media);
            maior = max(maior, media);
        }

        cout << "\n--- Resultado ---\n";
        cout << "Teste " << caso << "\n";
        cout << "Menor media = " << menor << "\n";
        cout << "Maior media = " << maior << "\n\n";
        caso++;
    }

    cout << "Programa encerrado!\n";
}
	return 0;
}
