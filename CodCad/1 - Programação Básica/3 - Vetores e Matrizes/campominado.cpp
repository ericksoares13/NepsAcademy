#include <iostream>
using namespace std;

int main ()
{
	int n;
	
	cin >> n;
	
	int v[n], a[n] = {0};
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	
	for(int i = 0; i < n; i++){
		if (n==1)
            a[i] = v[i];
        else if(i==0)
			a[i] = v[i]+v[i+1];
		else if(i>0 && i<n-1)
			a[i] = v[i-1]+v[i]+v[i+1];
		else if(n>1)
			a[i] = v[i-1]+v[i];
	}

	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
	
	return 0;
}