#include <iostream>
using namespace std;

int main ( )
{
    int a, b, nf;
	
	cin >> a >> b;
	
	nf = (a+b)/2;
		
	if (nf>=7)
		cout << "Aprovado" << endl;
	else if (nf<7 and nf>=4)
		cout << "Recuperacao" << endl;
		else 
			cout << "Reprovado" << endl;
    
	return 0;
}