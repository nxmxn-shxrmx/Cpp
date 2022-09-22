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
        for(int i=0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
        }
        sort(begin(v),end(v));

        int tar;cin>>tar;
        int l =0;
        int r=n-1;
        int c = 0;
        int q = 0;
        int  p = INT_MAX;
        while(l<r)
        {
            if(v[l]+v[r]==tar)
            {
                if(abs(v[l]-v[r])<=p)
                {
                p=abs(v[l]-v[r]);
                c=v[l];
                q=v[r];
                }
                --r;
            }
            else if(v[l]+v[r]>tar)
            --r;
            else
            ++l;
        }
        cout<<"Deepak should buy roses whose prices are "<<c<<" and "<<q<<"."<<"\n";


    }


    return 0;
}