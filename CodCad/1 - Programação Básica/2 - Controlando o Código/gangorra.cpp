#include <iostream>
using namespace std;

int main ( )
{
	int p1, c1, p2, c2, x1, x2;
	
	cin >> p1 >> c1 >> p2 >> c2;
	
	x1 = p1*c1;
	x2 = p2*c2;
	
	if (x1 == x2)
		cout << "0" << endl;
	else if (x1 > x2)
		cout << "-1" << endl;
		else 
			cout << "1" << endl;

	return 0;
}