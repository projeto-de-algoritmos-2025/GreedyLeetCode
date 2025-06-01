#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int candy(vector<int>& notas) {
        int tamNotas = notas.size();
        vector<int> docinhos(tamNotas, 1);

        for (int i = 1; i < tamNotas; ++i) {
            if (notas[i] > notas[i - 1]) {
                docinhos[i] = docinhos[i - 1] + 1;
            }
        }
        for (int i = tamNotas - 2; i >= 0; --i) {
            if (notas[i] > notas[i + 1] && docinhos[i] <= docinhos[i + 1]) {
                docinhos[i] = docinhos[i + 1] + 1;
            }
        }

        int total = 0;
        for (int q = 0; q < tamNotas; ++q) {
            total += docinhos[q];
        }
        return total;
    }
};
