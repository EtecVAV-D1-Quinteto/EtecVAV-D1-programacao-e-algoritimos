#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        int N, M;
        cin >> N >> M;
        if (N == 0 && M == 0) break;

        map<string, vector<string>> adj; // lista de dependentes
        map<string, int> in_degree;      // número de pré-requisitos pendentes
        map<string, int> priority;       // prioridade da disciplina
        set<string> all_disciplines;     // conjunto de todas as disciplinas

        int prio = 1;

        vector<string> advanced_order; // para manter a ordem de leitura das avançadas

        for (int i = 0; i < N; i++) {
            string course;
            int K;
            cin >> course >> K;
            if (priority.find(course) == priority.end()) {
                priority[course] = prio++;
            }
            advanced_order.push_back(course);
            all_disciplines.insert(course);

            for (int j = 0; j < K; j++) {
                string pre;
                cin >> pre;
                if (priority.find(pre) == priority.end()) {
                    priority[pre] = prio++;
                }
                adj[pre].push_back(course); // pre é pré-requisito de course
                in_degree[course]++;
                all_disciplines.insert(pre);
            }
        }

        // Adicionar disciplinas básicas que não têm entrada
        for (const string &disc : all_disciplines) {
            if (in_degree.find(disc) == in_degree.end()) in_degree[disc] = 0;
        }

        set<string> completed;
        vector<vector<string>> semesters;

        while (completed.size() < all_disciplines.size()) {
            vector<string> available;
            for (const string &disc : all_disciplines) {
                if (completed.count(disc) == 0 && in_degree[disc] == 0) {
                    available.push_back(disc);
                }
            }

            if (available.empty()) break; // só por segurança

            // Ordenar por prioridade (maior prioridade primeiro)
            sort(available.begin(), available.end(), [&](const string &a, const string &b) {
                return priority[a] < priority[b];
            });

            // Limitar a M disciplinas por semestre
            vector<string> this_semester;
            for (int i = 0; i < min(M, (int)available.size()); i++) {
                this_semester.push_back(available[i]);
                completed.insert(available[i]);
            }

            // Atualizar os pré-requisitos das disciplinas dependentes
            for (const string &disc : this_semester) {
                for (const string &next_disc : adj[disc]) {
                    in_degree[next_disc]--;
                }
            }

            // Ordenar alfabeticamente para saída
            sort(this_semester.begin(), this_semester.end());
            semesters.push_back(this_semester);
        }

        cout << "Formatura em " << semesters.size() << " semestres\n";
        for (int i = 0; i < semesters.size(); i++) {
            cout << "Semestre " << i+1 << " :";
            for (const string &disc : semesters[i]) {
                cout << " " << disc;
            }
            cout << "\n";
        }
    }

    return 0;
}
