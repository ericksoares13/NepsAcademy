#include <iostream>
using namespace std;

int main ( )
{
	int N, A, acessos = 0, dias = 1;
	
	cin >> N;
	
	while (N != 0) {
		cin >> A;
        N -= 1;
		acessos += A;
		if (acessos != 1000000 && acessos <= 1000000){
			dias += 1;}
	}
	
	cout << dias << endl;
	
	return 0;
}