#include <iostream>
using namespace std;

int main ( )
{
    int P, R;
	
	cin >> P >> R;
	
	if (P == 0)
		cout << "C" << endl;
	else if (P == 1 and R == 0)
			cout << "B" << endl;
		else
			cout << "A" << endl;
    
	return 0;
}