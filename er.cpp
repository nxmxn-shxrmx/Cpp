#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    map<int,int>m;
    int s = 0;
    int w = 0;

    while(n--)
    {
        int c;cin>>c;
    
        for(int i = 0;i<c;++i)
        {
            int f;cin>>f;
            m[f]++;
            if(m[f]>s)
            {
                s = m[f];
                w = f;
            }
        }

    }
    cout<<w<<"\n";


    return 0;
}
