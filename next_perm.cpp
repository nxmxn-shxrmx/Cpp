#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i =0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
        }
        int i = n-2;
        while(i>=0 && v[i]>v[i+1])
            --i;
        cout<<i<<"\n";

    }

    return 0;
}