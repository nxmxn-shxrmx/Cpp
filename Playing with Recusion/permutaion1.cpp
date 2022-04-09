#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
void per(string s,int l,int r)
{
    if(l==r)
    {
        cout<<s<<"\n";
        return;
    }
    for(int i = l;i<=r;++i)
    {
        swap(s[i],s[r]);
        per(s,l+1,r);
        swap(s[i],s[r]);

    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;cin>>s;
    per(s,0,s.size()-1);
    return 0;
}
//abc
//acb
