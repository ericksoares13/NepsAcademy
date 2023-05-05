#include <iostream>
using namespace std;

int main ()
{
	int n, soma1 = 0, soma2 = 0, resp = 0;
	
	cin >> n;
	
	int quad[n][n];                         //matriz NxN

    for (int i = 0; i < n; i++)             
        for (int j = 0; j < n; j++)
            cin >> quad[i][j];              //ler valor da matriz

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            soma1 += quad[i][j];            //soma a linha 0
            }
        if(i >= 1 && soma1 != soma2){       //a partir da linha 1 faz o if
                resp = -1;                  //se os valores forem diferentes
                break;                      //resp = -1 e break
        }
        soma2 = soma1;                      //usado na comparação
        soma1 = 0;                          //zera o valor pois todas as linhas precisam ser comparadas
        }

    if(resp!=-1){                           
        for(int i = 0; i < n; i++){
            soma1 += quad[i][i];            //analisa a diagonal principal
        }
        if(soma1 != soma2)                  //mesma condição da anterior
            resp = -1;
        soma2 = soma1;
        soma1 = 0;
    }

    if(resp!=-1){
        for(int i = n-1; i >= 0; i--){
            soma1 += quad[i][n-i-1];        //analisa a diagonal secundária
        }
        if(soma1 != soma2)                  //mesma condição da anterior
            resp = -1;
        soma2 = soma1;
        soma1 = 0;                          //resposta = soma
    }

    if(resp!=-1){
        for(int i = n-1; i >= 0; i--){
            soma1 += quad[i][0];            //analisa a coluna 1
        }
        if(soma1 != soma2)                  //mesma condição da anterior
            resp = -1;
        else
            resp = soma1;                   //resposta = soma
    }

    cout << resp << endl;

	return 0;
}