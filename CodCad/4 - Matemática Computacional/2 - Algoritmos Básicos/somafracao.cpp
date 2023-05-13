#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a, b, c, d;

    cin >> a >> b >> c >> d;

    long long int denominador = b*d;

    long long int numerador = (denominador/b*a) + (denominador/d*c);

    long long int gcd = __gcd(numerador, denominador);

    numerador /= gcd;
    denominador /= gcd;

    cout << numerador << " " << denominador << endl;

    return 0;
}