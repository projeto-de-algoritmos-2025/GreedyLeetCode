#include <vector>
#include <algorithm>
using namespace std;

class Solution {
 public:
  int minPartitions(string n) {
    vector<int> digitos;
    for (char c : n) {
      digitos.push_back(c - '0');
    }

    sort(digitos.begin(), digitos.end());

    int maiorDigito = digitos.back();

    return maiorDigito;
  }
};
