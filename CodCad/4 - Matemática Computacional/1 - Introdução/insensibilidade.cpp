#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    int resp = 0;

    for(int i = 0; i < n; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int dist1, dist2;
        dist1 = a - c;
        dist2 = b - d;
        dist1 = dist1 * dist1;
        dist2 = dist2 * dist2;
        resp += dist1 + dist2;
    }

    cout << resp << endl;

    return 0;
}