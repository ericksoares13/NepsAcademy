#include <bits/stdc++.h>
using namespace std;

bool divide_11(string n){
    long long int somaimpar = 0;
    long long int somapar = 0;
    for(long long int i = 0; i < n.size(); i++)
        if(i%2 == 0)
            somaimpar+= n[i]-'0';
        else
            somapar += n[i]-'0';
    return (somaimpar == somapar) || (somapar - somaimpar)%11==0;
}

int main(){
    string n;
    cin >> n;

    if(divide_11(n))
        cout << "S" << "\n";
    else
        cout << "N" << "\n";

    return 0;
}