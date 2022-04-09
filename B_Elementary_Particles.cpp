#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        map<int,vector<int>>m;
        map<int,int>ma;
        int c = INT_MAX;
        set<int>s;
        for(int i =0;i<n;++i)
        {
            int f;cin>>f;
            m[f].push_back(i);
            ma[f]++;
            s.insert(f);
            if(ma[f]>1)
            {   
               c = min(m[f][m[f].size()-1] - m[f][m[f].size()-2],c); 
            }

        }
        if(s.size()==n)
        cout<<-1<<"\n";

        else
        cout<<n - c<<"\n";

    }



    return 0;
}