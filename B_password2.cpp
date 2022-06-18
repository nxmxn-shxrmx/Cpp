#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)
const int N = 1e6 + 100;

long long fact[N];
void initfact() {
    fact[0] = 1;
    for(int i = 1; i < N; i++) {
        fact[i] = (fact[i-1] * i);
        fact[i] %= mod;
    }
}
ll bioexpo(ll a,ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
            res = (res*a)%mod;

        a = (a*a)%mod;
            b>>=1;
    }
    return res;
}
bool check(string m,string s)
{
    for(int i = 1;i<s.size()-m.size();++i)
    {
        string r = s.substr(i,m.size());
        if(r==m)
        return 1;
    }
    return false;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;cin>>s;
    string r1="",r2="";
    vector<string>v;
    for(int i = 0;i<s.size()-1;++i)
    {
        r1+=s[i];
        r2 = s[s.size()-i-1]+r2;
        if(r1==r2)
        v.push_back(r1);
    }
    int l = 0;
    int r = v.size()-1;
    string u = "Just a legend";
    while(l<=r)
    {
        int m = (l+r)/2;
        if(check(v[m],s))
        {
            l = m+1;
            u = v[m];
        }
        else
        r = m-1;
    }
    cout<<u<<"\n";

    return 0;
}