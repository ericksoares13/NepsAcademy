#include <iostream>
using namespace std;

unsigned long long hanoi(int n){
	if(n == 1)
		return 1;
	return 1 + (2 * hanoi(n - 1));
}

int main(){
	int n;
	cin >> n;
	int teste = 1;
	while(n != 0){
		cout << "Teste " << teste << endl;
		teste++;
		cout << hanoi(n) << endl << endl;
		cin >> n;
	}
	return 0;
}