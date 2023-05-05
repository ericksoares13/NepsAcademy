#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    int aux = n[n.size()-1] - '0';

    if(aux%2==0)
        cout << "S" << "\n";
    else
        cout << "N" << "\n";
    
    long long int soma = 0;
    long long int tamanho = n.size();
    for(long long int i = 0; i < tamanho; i++)
        soma+= n[i] - '0';
    if(soma%3==0)
        cout << "S" << "\n";
    else
        cout << "N" << "\n";

    if(aux==5 || aux==0)
        cout << "S" << "\n";
    else
        cout << "N" << "\n";

    return 0;
}