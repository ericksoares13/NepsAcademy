#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, cont = 0;
	
	cin >> n;
	
	int v[n], aux[n];
	
	for(int i = 0; i < n; i++){
        cin >> v[i];
        aux[i] = v[i];
    }

	sort(aux,aux+n);

    for(int i = 0; i < n; i++)
		if(v[i] != aux[i])
			cont++;

    cout << cont << endl;

    int re[cont], j = 0;

    for(int i = 0; i < n; i++)
		if(v[i] != aux[i]){
            re[j] = v[i];
            j++;
        }

    sort(re,re+cont);

    for(int i = 0; i < cont; i++){
        if(i == cont-1)
            cout << re[i] << endl;
        else
            cout << re[i] << " ";
    }

	return 0;
}