#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main ()
{
	double x, y;
	
	cin >> x >> y;
	
	cout << fixed << setprecision(4) << pow(x,y) << endl;

	return 0;
}