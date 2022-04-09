#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
void re(string s,string t,int i)
{
    if(s.size()==i)
    {
        cout<<t<<"\n";
        return;
    }
    string t1 =t+" "+s[i];
    string t2 =t+s[i];
    re(s,t1,i+1);
    re(s,t2,i+1);
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;cin>>s;
    string t="";
    t+=s[0];
    re(s,t,1);

    return 0;
}