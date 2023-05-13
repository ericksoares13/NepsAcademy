#include <bits/stdc++.h>
using namespace std;

int main(){
    int g, p;

    cin >> g >> p;

    while(g!=0 || p!=0){

        int result[g][p];

        for(int i = 0; i < g; i++)
            for(int j = 0; j < p; j++)
                cin >> result[i][j];

        int s;

        cin >> s;

        while(s--){
            int k;

            cin >> k;

            int sistemas[k];
            for(int i = 0; i < k; i++)
                cin >> sistemas[i];
            
            pair<int,int> pontuacao[p]{};
            for(int i = 0; i < p; i++)
                pontuacao[i].second = i+1;
            
            for(int i = 0; i < g; i++)
                for(int j = 0; j < p; j++)
                    if(result[i][j] <= k)
                        pontuacao[j].first += sistemas[result[i][j]-1];

            sort(pontuacao, pontuacao+p, greater<pair<int,int>>());

            vector<int> resp;
            resp.push_back(pontuacao[0].second);

            for(int i = 1; i < p; i++)
                if(pontuacao[i].first == pontuacao[i-1].first)
                    resp.push_back(pontuacao[i].second);
                else
                    break;

            sort(resp.begin(), resp.end());

            for(int i = 0; i < resp.size(); i++)
                if(i == resp.size()-1)
                    cout << resp[i] << endl;
                else 
                    cout << resp[i] << " ";  
        }

        cin >> g >> p;
    }

    return 0;
}