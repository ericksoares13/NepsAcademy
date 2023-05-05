#include <iostream>
using namespace std;

int main ()
{
	int n, x, pont = 0, resul = 1, dif = 0;
	
	cin >> n;
	
	for (int i=0; i<n; i++) {
	cin >> x;
		if (pont == x) {
			resul++;}
			else {
			resul = 1;}
	pont = x;

	if (resul>dif)
	   dif = resul;
	   else
	   continue;

	}
	
	cout << dif << endl;

	return 0;
}