#include <iostream>
using namespace std;

int main ()
{
	int n, a0=0, a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0, a8=0, a9=0;
    string num;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        for(int j = 0; j < num.size(); j++){
            if(num[j]=='0')
            a0++;
            else if(num[j]=='1')
            a1++;
            else if(num[j]=='2')
            a2++;
            else if(num[j]=='3')
            a3++;
            else if(num[j]=='4')
            a4++;
            else if(num[j]=='5')
            a5++;
            else if(num[j]=='6')
            a6++;
            else if(num[j]=='7')
            a7++;
            else if(num[j]=='8')
            a8++;
            else if(num[j]=='9')
            a9++;
        }
    }

    cout << "0 - " << a0 << endl;
    cout << "1 - " << a1 << endl;
    cout << "2 - " << a2 << endl;
    cout << "3 - " << a3 << endl;
    cout << "4 - " << a4 << endl;
    cout << "5 - " << a5 << endl;
    cout << "6 - " << a6 << endl;
    cout << "7 - " << a7 << endl;
    cout << "8 - " << a8 << endl;
    cout << "9 - " << a9 << endl;

	return 0;
}