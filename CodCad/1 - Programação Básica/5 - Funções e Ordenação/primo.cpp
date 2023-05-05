#include <iostream>

using namespace std;

bool eh_primo(int x){
	int count = 0;
	for(int i = x; i >= 1; i--)
		if(x%i==0)
			count++;
	if (count == 2)
		return true;
    return false;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
