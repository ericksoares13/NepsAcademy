#include <bits/stdc++.h>
using namespace std;

bool e_composto[12000000];

void crivo(long long int n){
    e_composto[1] = true; // 1 não é composto, mas o vetor na verdade guarda os números que não são primos
    for(long long int i = 2; i <= n; i++)
        if(!e_composto[i]){
            for(long long int j = 2; j*i <= n; j++)
                e_composto[i*j] = true;
        }
}

int main(){
    crivo(12000000); // Complexidade O(n*log(log(n)))
    
    long long int n;
    cin >> n;

    for(int i = 2, k = 0; i <= 12000000; i++)
        if(!e_composto[i]){
            k++;
            if(k == n){
                cout << i << endl;
                break;
            }
        }

	return 0;
}