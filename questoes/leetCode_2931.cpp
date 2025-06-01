#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxSpending(vector<vector<int>>& matriz) {
        int numLojas = matriz.size();
        int itensPorLoja = matriz[0].size();
        int totalElementos = numLojas * itensPorLoja;

        vector<int> listaUnificada;
        listaUnificada.reserve(totalElementos);

        for (auto& loja : matriz) {
            for (int valor : loja) {
                listaUnificada.push_back(valor);
            }
        }
        sort(listaUnificada.begin(), listaUnificada.end());

        long long resultado = 0;
        for (int i = 0; i < totalElementos; ++i) {
            resultado += static_cast<long long>(i + 1) * listaUnificada[i];
        }
        return resultado;
    }
};
