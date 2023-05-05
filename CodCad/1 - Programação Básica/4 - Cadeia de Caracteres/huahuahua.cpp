#include <iostream>
using namespace std;

int main ()
{
	string risada;
    int ca = 0, co;
    
    cin >> risada;

    for(int i = 0; i < risada.size(); i++){
        if(risada[i]=='a' || risada[i]=='e' || risada[i]=='i' || risada[i]=='o' || risada[i]=='u'){
            ca++;
        }
    }

    co = ca-1;
    char ris[ca], ros[ca], resp;
    ca=0;

    for(int i = 0; i < risada.size(); i++){
        if(risada[i]=='a' || risada[i]=='e' || risada[i]=='i' || risada[i]=='o' || risada[i]=='u'){
            ris[ca] = risada[i];
            ros[co] = risada[i];
            ca++;
            co--;
        }
    }

    for (int i =0; i<ca; i++){
        if(ris[i]==ros[i])
            resp = 'S';
        else{
            resp = 'N';
            break;
        }
    }

    cout << resp << endl;

	return 0;
}