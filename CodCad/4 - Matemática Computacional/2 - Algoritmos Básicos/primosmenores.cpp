#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;

    cin >> n;

    bool primo;
    vector<long long int> primos;

    for(long long int i = 2; i <= n; i++){
        primo = true;
        for(long long int j = 2; j*j <= i; j++)
            if(i%j == 0){
                primo = false;
                break;
            }
        if(primo)
            primos.push_back(i);
    }

    for(int i = 0; i < primos.size(); i++)
        if(i == primos.size()-1)
            cout << primos[i] << endl;
        else
            cout << primos[i] << " ";

    return 0;
}