#include <iostream>
using namespace std;

int main ( )
{
	int b, c, soma;
	
	cin >> b >> c;
	
	soma = b + c;
		
	if (soma%2 == 0)
		cout << "Bino" << endl;
	else
		cout << "Cino" << endl;
		
	return 0;
}