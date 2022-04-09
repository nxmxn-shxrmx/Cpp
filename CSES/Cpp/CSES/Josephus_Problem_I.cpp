#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    int c=0;
    int v = 2;
        while(v<=n)
        {
            cout<<v<<' ';
            v+=2;
            c++;
        }
        
    int d =1;

        while(c<n)
        {
            int f=d;
            while(f<=n)
            {
                cout<<f<<" ";
                c++;
                f+=4;
            }
            
            d+=2;
        }



    return 0;
}