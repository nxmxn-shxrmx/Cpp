#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<int>v;
void in(string s2,int r,int i)
{
    if(i==s2.size())
    {
        v.push_back(r);
        return;
    }
    if(s2[i]=='?')
    {
        in(s2,r-1,i+1);
        in(s2,r+1,i+1);
        return;
    }
    if(s2[i]=='+')
    in(s2,r+1,i+1);

    else
    in(s2,r-1,i+1);
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    

    string s1,s2;cin>>s1>>s2;
    int e = 0;
    for(auto c:s1)
    {
        if(c=='+')
        e++;
        else
        e--;
    }
    in(s2,0,0);
    double s = 0;
    for(auto c:v)
    {
        if(c==e)
        ++s;
    }
    double n = v.size();
    cout<<setprecision(20)<<"\n";
    cout<<s/n<<"\n";

    

    return 0;
}