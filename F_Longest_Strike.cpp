#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int>v;
        for(int i = 0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
        }
        sort(v.begin(),v.end());
        int l = -1,r=-1;
        int l1 =-1,r1=-1;
        int c = 0;
        int h = 0;
        int i = 0;

        for(int i = 0;i<n;++i)
        {
            if(i>0 && v[i]!=v[i-1]+1)
            h = 0;
            int  o = 1;
            while(i<n-1 && v[i]==v[i+1])
            ++o,++i;

            if(o<k)
            {
                h =0;
                continue;
            }

            if(h==0)
            l1 = v[i],r1 = v[i];
            else
            r1++;


            h++;
            if(c<h)
            {
                c = h;
                l = l1;
                r = r1;
            }

        }
        if(c!=0)
        cout<<l<<" "<<r<<"\n";
        else
        cout<<-1<<"\n";
      
    }

    return 0;
}