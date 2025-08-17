#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Disciplina {
    string nome;
    int prioridade;
    int preRestante;
    int dependentes[200];
    int qtdDependentes;
    bool feita;
};

int main() {
    char repetir = 's';
    while (repetir == 's') {
        int qtdAvancadas, maxPorSem;
        cout << "Quantas disciplinas avancadas e maximo por semestre? ";
        cin >> qtdAvancadas >> maxPorSem;
        if (qtdAvancadas == 0 && maxPorSem == 0) break;

        Disciplina curso[200];
        string nomes[200];
        int totalDisciplinas = 0;

        for (int i = 0; i < qtdAvancadas; i++) {
            string nomeDisc;
            int qtdPre;
            cout << "Nome da disciplina avancada e quantidade de pre-requisitos: ";
            cin >> nomeDisc >> qtdPre;

            int indice = -1;
            for (int j = 0; j < totalDisciplinas; j++)
                if (nomes[j] == nomeDisc) indice = j;

            if (indice == -1) {
                indice = totalDisciplinas;
                nomes[totalDisciplinas] = nomeDisc;
                curso[indice].nome = nomeDisc;
                curso[indice].prioridade = totalDisciplinas;
                curso[indice].preRestante = 0;
                curso[indice].qtdDependentes = 0;
                curso[indice].feita = false;
                totalDisciplinas++;
            }

            for (int j = 0; j < qtdPre; j++) {
                string pre;
                cout << "Digite pre-requisito " << j+1 << " de " << nomeDisc << ": ";
                cin >> pre;

                int idxPre = -1;
                for (int k = 0; k < totalDisciplinas; k++)
                    if (nomes[k] == pre) idxPre = k;

                if (idxPre == -1) {
                    idxPre = totalDisciplinas;
                    nomes[totalDisciplinas] = pre;
                    curso[idxPre].nome = pre;
                    curso[idxPre].prioridade = totalDisciplinas;
                    curso[idxPre].preRestante = 0;
                    curso[idxPre].qtdDependentes = 0;
                    curso[idxPre].feita = false;
                    totalDisciplinas++;
                }

                curso[indice].preRestante++;
                curso[idxPre].dependentes[curso[idxPre].qtdDependentes++] = indice;
            }
        }

        int semestre = 0;
        cout << "\n--- Planejamento dos semestres ---\n";
        while (true) {
            int disponiveis[200];
            int qtdDisponiveis = 0;

            for (int i = 0; i < totalDisciplinas; i++)
                if (!curso[i].feita && curso[i].preRestante == 0)
                    disponiveis[qtdDisponiveis++] = i;

            if (qtdDisponiveis == 0) break;

            for (int i = 0; i < qtdDisponiveis-1; i++)
                for (int j = i+1; j < qtdDisponiveis; j++)
                    if (curso[disponiveis[i]].prioridade > curso[disponiveis[j]].prioridade) {
                        int tmp = disponiveis[i];
                        disponiveis[i] = disponiveis[j];
                        disponiveis[j] = tmp;
                    }

            int limite = maxPorSem < qtdDisponiveis ? maxPorSem : qtdDisponiveis;
            string sem[200];
            int qtdSem = 0;

            cout << "\nDisciplinas possiveis para o semestre " << semestre+1 << ":\n";
            for (int i = 0; i < qtdDisponiveis; i++)
                cout << "  " << curso[disponiveis[i]].nome << "\n";
            cout << "Serao selecionadas " << limite << " disciplinas.\n";

            for (int i = 0; i < limite; i++) {
                int idx = disponiveis[i];
                curso[idx].feita = true;
                sem[qtdSem++] = curso[idx].nome;

                for (int j = 0; j < curso[idx].qtdDependentes; j++)
                    curso[curso[idx].dependentes[j]].preRestante--;
            }

            for (int i = 0; i < qtdSem-1; i++)
                for (int j = i+1; j < qtdSem; j++)
                    if (sem[i] > sem[j]) {
                        string tmp = sem[i];
                        sem[i] = sem[j];
                        sem[j] = tmp;
                    }

            cout << "Semestre " << semestre+1 << " :";
            for (int i = 0; i < qtdSem; i++) cout << " " << sem[i];
            cout << "\n";

            semestre++;
        }

        cout << "\nFormatura em " << semestre << " semestres\n";

        cout << "Usar novamente(s/n): ";
        cin >> repetir;
    }

    return 0;
}

