#include <iostream>
using namespace std;

int main ( )
{
	int N, L, C, quebrados = 0;
	
	cin >> N;
	
	while (N != 0) {
		cin >> L >> C;
		N = N - 1;
		if (L > C)
			quebrados += C;
	}
	
	cout << quebrados << endl;

	return 0;
}