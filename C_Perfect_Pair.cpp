#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll x,y,m;
    cin>>x>>y>>m;

    if(m>0)
    {
        if(x>0 || y>0)
        {
            int c=0;
            if(x<0)
            while (x<0)
            {
                c++;
                x+=y;
                
            }
            else
            while (y<0)
            {
                c++;
                y+=x;
                
            }

            int d = ceil(float(m)/(x+y));

            cout<<c+d<<"\n";
            
        }
        else
        cout<<-1<<"\n";
    }
    else
    {
        if(x>=0 || y>=0)
        cout<<0<<"\n";

        else
        {
            if(x>=m || y>=m)
            cout<<0<<"\n";

            else
            {
                cout<<-1<<"\n";
            }
        }

    }

    return 0;
}