#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    int e, f, g, h;

    cin >> a >> b >> c >> d;
    cin >> e >> f >> g >> h;

    if (c < e || g < a || d < f || h < b || a > g || e > c || b > h || f > d)
        cout << 0 << endl;
    else
        cout << 1 << endl;

    return 0;
}