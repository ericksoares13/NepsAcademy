#include <iostream>
using namespace std;

int main ()
{
	int n, count = 0;
	
	cin >> n;
	
	int vet[n];
	
	for(int i = 0; i < n; i++){
		cin >> vet[i];
	}
	for(int i = 0; i < n-2; i++){
		if(vet[i]==1){
			if(vet[i+1]==0){
				if(vet[i+2]==0){
					count++;
					i += 2;
				}
			}
		}
	}
	
	cout << count << endl;
	
	return 0;
}