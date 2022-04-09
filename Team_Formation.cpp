#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while(t--)
    {

        int n;cin>>n;
        int pk= 0,ek=0,b=0,no=0;
        int m = n/2;

        string p,e;

        cin>>p>>e;

        for (int  i = 0; i <n; i++)
        {
            if(p[i]==e[i] && p[i]=='1')
            b++;

            else if(p[i]==e[i]  && p[i]=='0')
            no++;

            else{
            if(p[i]=='1')
            pk++;

            if(e[i]=='1')
            ek++;

            }

        }
        if(b==0 && (pk==0 || ek ==0))
        cout<<0<<"\n";

        
        
    }

    return 0;
}