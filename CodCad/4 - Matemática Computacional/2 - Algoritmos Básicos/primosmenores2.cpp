#include <bits/stdc++.h>
using namespace std;

bool e_composto[10000010];

void crivo(int n){
    e_composto[1] = true; // 1 não é composto, mas o vetor na verdade guarda os números que não são primos
    for(int i = 2; i <= n; i++)
        if(!e_composto[i])
            for(int j = 2; j*i <= n; j++)
                e_composto[i*j] = true;
}

int main(){
    long long int n;
    cin >> n;
    crivo(n); // Complexidade O(n*log(log(n)))

    for(int i = 2; i <= n; i++)
        if(!e_composto[i])
            cout << i << " ";
    cout << endl;

	return 0;
}