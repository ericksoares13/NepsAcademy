#include <iostream>
using namespace std;

int main () 
{
	int n, inte, a=0, b=0;
	
	cin >> n;
	
	for (int i=0; i<n; i++) {
		cin >> inte;
		if (inte == 1) {
			if (a==0) {
			a=1;
			b=b; }
			else if (a==1) {
			a=0;
			b=b; }
		}
		if (inte == 2) {
			if (a==0)
			a=1;
			else if (a==1)
			a=0;
		}
		if (inte == 2) {
			if (b==0)
			b=1;
			else if (b==1)
			b=0;
		}		
	}

	cout << a << endl << b << endl;

	return 0;
}