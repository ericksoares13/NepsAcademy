#include <iostream>
#include <algorithm>
using namespace std;

struct medalhas{
    int ouro, prata, bronze;
    int time;
};

bool ordena (medalhas a, medalhas b){
    if(a.ouro != b.ouro)
        return a.ouro > b.ouro;
    if(a.prata != b.prata)
        return a.prata > b.prata;
    if(a.bronze != b.bronze)
        return a.bronze > b.bronze;
    return a.time < b.time;
}

int main()
{
	int n, m;
    int a, b, c;

    cin >> n >> m;

    medalhas times[n] = {0};

    for(int i = 0; i < n; i++)
        times[i].time = i+1;

    for(int i = 0; i < m; i++){
        cin >> a >> b >> c;
        times[a-1].ouro++;
        times[b-1].prata++;
        times[c-1].bronze++;
    }

    sort(times, times+n, ordena);

    for(int i = 0; i < n; i++)
        cout << times[i].time << " ";

	return 0;
}