#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

vector<ll>w;
ll n;
void gen(ll d,ll f,ll se)
{
    if(d>1e10)
    return;

    if(f==se)
    {
        w.push_back(d);
    }
    gen(d*10ll +4,f+1,se);
    gen(d*10+7ll ,f,se+1);
}


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;cin>>n;

    string s = to_string(n);
    int o = (s.size()+1)/2;
    string v ="";
    string v1="",v2 ="";
    for(int i =0;i<o;++i)
    {
        v1+="4";
        v2+="7";
    }
    if(s.size()&1)
    cout<<v1+v2;

    else
    {
        gen(0,0,0);
        sort(begin(w),end(w));
        ll l = 0;
        ll r = w.size()-1;

        
        while (r-l>1) {
            ll mid = (l+ r) / 2; 

            if(w[mid]>=n)
            r = mid;
            else
            l = mid;
        }
        cout<<w[r];
    }
    return 0;
}