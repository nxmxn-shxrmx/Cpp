#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 + 7)

const int N = 1e5 + 10;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

        int n, k;
        cin >> n >> k;
        vector<int> v(n);
          int y = INT_MAX;
        map<int, set<int>> m;
        for (int i = 0; i < n; ++i)
            cin >> v[i],y =min(v[i],y);



        for (int i = 0; i< k; ++i)
        {
            int x,y;cin>>x>>y;
            if(v[x-1]==v[y-1])
            continue;
            m[v[x-1]].insert(v[y-1]);
            m[v[y-1]].insert(v[x-1]);
        }
        int s = 0;
        for(auto x:m)
        {
            if(x.second.size()>s)
            {
                y = x.first;
                s = x.second.size();
            }
        }

        cout<<y<<"\n";


    return 0;
}