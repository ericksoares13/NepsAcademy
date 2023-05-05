#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main () 
{
	int N;
	double raiz;
	
	cin >> N;
	
	for (int i=0; i<N; i++) {
		cin >> raiz;
		cout << fixed << setprecision(4) << sqrt (raiz) << endl;
	}
	

	return 0;
}