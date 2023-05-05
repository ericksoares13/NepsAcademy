#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	char tipo;
	double v1, v2;
	
	cin >> tipo;
	cin >> v1 >> v2;
	
	if(tipo=='M')
		cout << fixed << setprecision(2) << v1*v2 << endl;
	else
		cout << fixed << setprecision(2) << v1/v2 << endl;

	return 0;
}