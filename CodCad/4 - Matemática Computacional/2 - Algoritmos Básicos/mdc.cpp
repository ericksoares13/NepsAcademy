#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    int vetor[n];

    for(int i = 0; i < n; i++)
        cin >> vetor[i];

    for(int i = 1; i < n; i++)
        vetor[i] = __gcd(vetor[i-1], vetor[i]);

    cout << vetor[n-1] << endl;

    return 0;
}