#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    
    while(t--){
        
        ll n;cin>>n;

        ll mi = INT_MIN;
        bool d = true;
        vector<int>v;
        for(int i=0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
            if(v[0]==n)
            d= false;
        }
        if(v[n-1]==n)
        d= false;

        if(d)
        cout<<-1<<"\n";

        else{
            for(int i=n/2 -1;i>-1;--i){
                cout<<v[i]<<" ";
            }
            for(int i =n-1;i>=n/2;--i)
            cout<<v[i]<<" ";

            cout<<"\n";
        }

    }



    return 0;
}