#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    int m =0;

    int n1 =0;
    for (int i = 0; i <n; i++)
    {
        int f,g;
        int h;
        cin>>f>>g;
        if(f>g)
        {
            h = f-g;
            if(h>m)
            {
                n1 =1;
                m = h;
            }
            
        }
        else
        {
            h = g-f;
            if(h>m)
            {
                n1 =2;
                m = h;
            }
            
        }
    }
    cout<<n1<<" "<<m;
    



    return 0;
}