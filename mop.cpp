#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)
const int N = 1e6 + 100;

int countSubstrings(string s)
{
    map<char,int>m;
    m['a']=1;
    m['b']=1;
    int u=2;
    for(int i=0;i<24;i+=3)
    {
        m['c'+i]=u;
        m['d'+i]=u;
        m['e'+i]=u;
        ++u;
    }
    long long k=s.size();
    u =2;
   
    while(u<=s.size())

    {
        long long sum=0;
        int i =0;
        while(i<u)
        sum+=m[s[i++]];
        if(sum%u==0)
        k++;
        for(int i =u;i<s.size();++i)
        {
            sum+=m[s[i]]-m[s[i-u]];
           if(sum%u==0)
        k++;
        }
        ++u;
    }
    return k;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;cin>>s;
    cout<<countSubstrings(s);
    return 0;
}