#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    int z=0,f=0;

    for(int i=0;i<n;++i){
        
        int o;cin>>o;
        if(o==0)
        z++;

        else
        f++;

    }
    if(z==0)
    cout<<-1;


    else if(f<9)
    cout<<0;


    else{
        int s=(f/9)*9;

        while(s--)
        cout<<5;

        while(z--)
        cout<<0;
    }

    return 0;
}