#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,x;cin>>n>>x;
    string s;cin>>s;
    ll m = (n+1)/2;
    if(x>m)
    x = abs(n-x+1);
    ll ans = 0;
    ll ans1 = 0;
    ll k = m/2;
    ll c = 0;
    ll p = 0;
    ll q =0;
    
            for(int i=x-1;i<m;++i)
            {
                if(s[i]!=s[n-1-i])
                {
                    int o = min(abs(s[i]-s[n-i-1]),abs(s[i]-'a')+1+abs(s[n-i-1]-'z'));
                    o = min(o,abs(s[i]-'z')+1+abs(s[n-i-1]-'a'));
                    p+=c;
                    ans+=o+c;
                    c =0;
                }
                c++;
            }
            c = 1;
            for(int i=x-2;~i;--i)
            {
                 if(s[i]!=s[n-1-i])
                {  int o = min(abs(s[i]-s[n-i-1]),abs(s[i]-'a')+1+abs(s[n-i-1]-'z'));
                    o = min(o,abs(s[i]-'z')+1+abs(s[n-i-1]-'a'));
                    ans+=o+c;
                    c = 0;
                }
                c++;
            }
    
            c =0;
            for(int i=x-1;~i;--i)
            {
                 if(s[i]!=s[n-1-i])
                {  int o = min(abs(s[i]-s[n-i-1]),abs(s[i]-'a')+1+abs(s[n-i-1]-'z'));
                    o = min(o,abs(s[i]-'z')+1+abs(s[n-i-1]-'a'));
                    q +=c;
                    ans1+=o+c;
                    c = 0;
                }
                c++;
            }
            c =1;
             for(int i=x;i<m;++i)
            {
                if(s[i]!=s[n-1-i])
                {
                     int o = min(abs(s[i]-s[n-i-1]),abs(s[i]-'a')+1+abs(s[n-i-1]-'z'));
                    o = min(o,abs(s[i]-'z')+1+abs(s[n-i-1]-'a'));

                    ans1+=o+c;
                    c=0;
                }
                c++;
            }
        
        cout<<min(ans+p,ans+q)<<"\n";
    
    return 0;
}