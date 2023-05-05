#include <iostream>
using namespace std;

int main ()
{
	int n, respo = 0, maior = 0;

    cin >> n;

    int matriz[n][n];
    int resp[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> matriz[i][j];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            respo += matriz[i][j];
        }
        for(int k = 0; k < n; k++){
        resp[i][k] = respo - matriz[i][k];
    }
    respo = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            respo += matriz[j][i];
        }
        for(int k = 0; k < n; k++){
        resp[k][i] += respo - matriz[k][i];
    }
    respo = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(resp[i][j]>maior)
                maior = resp[i][j];
        }
    }

    cout << maior << endl;

	return 0;
}