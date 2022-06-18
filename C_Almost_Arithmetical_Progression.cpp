#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<int>v;
    map<int,vector<int>>m;
    for(int i = 0;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
        m[f].push_back(i);
    }
    ll l = 0;
    for(auto c:m)
    {
        for(auto x:m)
        {
            ll k = 0;
            int i = 0;
            int j = 0;
            int m = -1;
    
            while(i<c.second.size() || j<x.second.size())
            {
                if(k%2==0)
                {
                    if(i==c.second.size())
                    break;
                    if(c.second[i]>m)
                    {
                        m = c.second[i];
                         cout<<m<<" ";
                        k++;
                    }
                    ++i;
                }
                else
                {
                    if(j==x.second.size())
                    break;

                    if(x.second[j]>m)
                    {
                        m = x.second[j];
                      cout<<m<<" ";
                        k++;

                    }
                    j++;
                }
            }
            cout<<"\n";
        

            l = max(l,k);

        }
    
    }
    cout<<l<<"\n";

    return 0;
}