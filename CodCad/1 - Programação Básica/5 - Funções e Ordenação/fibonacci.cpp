#include <iostream>
using namespace std;

int fib (int n){
    int fib1 = 1;

    if(n>=2){
        fib1 = fib(n-1) + fib(n-2);
    }

    return fib1;
}

int main ()
{
	int n;
	
	cin >> n;
	
	if(n==0 || n==1)
		cout << 1 << endl;
	else
		cout << fib(n) << endl;

	return 0;
}