#include <iostream>
using namespace std;

int main ()
{
	int n, cont = 0;
	
	cin >> n;
	
	int v[n], a[n], b[n];
	
	for(int i = 0; i < n; i++)
		cin >> v[i];

	for(int i = 0; i < n; i++){
        if(v[i]==0)
            a[i]=0;
        if(v[i]!=0){
            for(int j = i; true; j++){
                if(v[j]==-1)
                    cont++;
                else
                    break;
            }
            if(cont>=9)
                a[i]=9;
            else
                a[i]=cont;
            cont=0;
        }
    }

    for(int i = n-1; i >= 0; i--){
        if(v[i]==0)
            b[i]=0;
        if(v[i]!=0){
            for(int j = i; true; j--){
                if(v[j]==-1)
                    cont++;
                else
                    break;
            }
            if(cont>=9)
                b[i]=9;
            else
                b[i]=cont;
            cont=0;
        }
    }

    for(int i = n-1; i >= 0; i--){
        if(a[i]!=0)
        a[i]=0;
        else
        break;
    }

    for(int i = 0; i < n; i++){
        if(b[i]!=0)
        b[i]=0;
        else
        break;
    }

    for(int i = 0; i < n; i++){
        if(a[i]==0)
            cout << b[i] << " ";
        else if(b[i]==0)
            cout << a[i] << " ";
        else if(a[i]<b[i])
            cout << a[i] << " ";
        else
            cout << b[i] << " ";
    }

    cout << endl;

	return 0;
}