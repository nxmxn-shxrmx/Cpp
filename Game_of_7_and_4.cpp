#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

ll bin(int n)
    {  ll x=0;ll i=1,modu;
    while(n>0)
        {  if((n%2)==1) 
               modu=7; 
              else modu=4;
        x+= (mod)*(i); 
        i=i*10;
        n=n/2;
    }
     return x;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    vector<ll>ve;
    for(int i =1;i<10000;++i){
        ve.push_back(bin(i));
    }

    while(t--){
        int n;cin>>n;
        int i  =0;
        while(true){
            if(ve[i]%n==0){
                cout<<ve[i]<<"\n";
                break;
            }
            i++;
        }
    }

    return 0;
}