#include <iostream>
using namespace std;

int main ()
{
	int n, p1, p2;
    char p;

    cin >> n >> p1 >> p >> p2;

    if(p=='+'){
        if(p1+p2 <= n)
        cout << "OK" << endl;
        else
        cout << "OVERFLOW" << endl;
    }
    else
        if(p1*p2 <= n)
        cout << "OK" << endl;
        else
        cout << "OVERFLOW" << endl;

	return 0;
}