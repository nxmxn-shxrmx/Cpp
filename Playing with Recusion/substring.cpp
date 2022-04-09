#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
set<string>se;
vector<string>v;

void sy(string s,string t,int i)
{
    if(s.size()==i)
    {
        if(se.find(t)==se.end())
        {   
            v.push_back(t);
            se.insert(t);
        }
        return;
    }
    sy(s,t,i+1);
    sy(s,t+s[i],i+1);

}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

     string s;cin>>s;
     sy(s,"",0);
     for(auto c:v)
     cout<<c<<" ";


    return 0;
}