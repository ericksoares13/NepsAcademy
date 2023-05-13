#include <bits/stdc++.h>
using namespace std;

bool e_composto[10000010];
vector<int> primos;

void crivo(int n){
    e_composto[1] = true; // 1 não é composto, mas o vetor na verdade guarda os números que não são primos
    for(int i = 2; i <= n; i++)
        if(!e_composto[i]){
            for(int j = 2; j*i <= n; j++)
                e_composto[i*j] = true;
            primos.push_back(int(i));
        }
}

int buscaBin(int beg, int end, int chave){
    if(beg > end) return -1;
    int meio = (beg + end) / 2;
    if(primos[meio] == chave) return meio;
    if(primos[meio] > chave) return buscaBin(beg, meio - 1, chave);
    return buscaBin(meio + 1, end, chave);
}

int main(){
    crivo(10000000); // Complexidade O(n*log(log(n)))

    int q;
    cin >> q;

    while(q--){
        int p;
        cin >> p;
        cout << buscaBin(0, primos.size()-1, p)+1 << endl;
    }

	return 0;
}