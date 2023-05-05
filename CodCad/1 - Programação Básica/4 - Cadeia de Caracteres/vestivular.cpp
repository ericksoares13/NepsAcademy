#include <iostream>
using namespace std;

int main ()
{
	int n, count = 0;
    string a, b;

    cin >> n >> a >> b;

    for(int i = 0; i < n; i++){
        if(a[i]==b[i])
        count++;
    }

    cout << count << endl;

	return 0;
}