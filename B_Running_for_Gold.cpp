#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
bool su(vector<int>v1,vector<int>v2)
{
    int c= 0;
    for(int i =0;i<5;++i)
    {
        if(v1[i]<v2[i])
        c++;
    }
    return c>=3;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;
        vector<vector<int>>v;
        for(int i = 0;i<n;++i)
        {
            vector<int>p;
            for(int j = 0;j<5;++j)
            {
                int f;cin>>f;
                p.push_back(f);
            }
            v.push_back(p);
        }

        if(n==1)
        {
            cout<<1<<"\n";
            continue;
        }
        int g = 0;
        for(int i = 0;i<n;++i)
        {   
            if(g==i)
            continue;
            if(su(v[i],v[g]))
            g = i;
        }
        bool k = 1;
        for(int i = 0;i<n;++i)
        {
            if(su(v[i],v[g]))
            {
                k =0;
                cout<<-1<<"\n";
                break;
            }
        }
        if(k)
        cout<<g+1<<"\n";

    }

    return 0;
}