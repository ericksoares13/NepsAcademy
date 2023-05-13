#include <bits/stdc++.h>
using namespace std;

bool eh_primo(long long int n){
    if(n == 1) return false;
    for(long long int i = 2; i*i <= n; i++)
        if(n%i == 0)
            return false;
    return true;
}

int main(){
    long long int n;

    cin >> n;

    if(eh_primo(n))
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}