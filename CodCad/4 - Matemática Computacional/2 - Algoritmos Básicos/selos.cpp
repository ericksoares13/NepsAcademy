#include <bits/stdc++.h>
using namespace std;

bool eh_primo(long long int n){
    if(n == 1) return true;
    for(long long int i = 2; i*i <= n; i++)
        if(n%i == 0)
            return false;
    return true;
}

int main(){
    long long int n;

    cin >> n;

    if(eh_primo(n))
        cout << "N" << endl;
    else
        cout << "S" << endl;

    return 0;
}