#include <bits/stdc++.h>
using namespace std;

bool divide_4(string n){
    int ultimo = n[n.size() - 1] - '0';
	int penultimo;
	if(n.size() == 1)
		penultimo = 0;
	else
		penultimo = n[n.size() - 2] - '0';
	return (((penultimo*10) + ultimo)% 4 == 0);
}
bool divide_9(string n){
    long long int soma = 0;
    for(long long int i = 0; i < n.size(); i++)
        soma+= n[i] - '0';
    return soma%9 == 0;
}
bool divide_25(string n){
    if(n.size()==1)
        return (n[n.size()-1] - '0')%25 == 0;;
    string aux = n.substr(n.size()-2,2);
    return stoi(aux)%25 == 0;
}

int main(){
    string n;
    cin >> n;

    if(divide_4(n))
        cout << "S" << "\n";
    else
        cout << "N" << "\n";
    if(divide_9(n))
        cout << "S" << "\n";
    else
        cout << "N" << "\n";
    if(divide_25(n))
        cout << "S" << "\n";
    else
        cout << "N" << "\n";

    return 0;
}