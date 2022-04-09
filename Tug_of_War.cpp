#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<int>k1,k2;
vector<int>v1,v2;

int p = INT_MAX;

void sub(vector<int>&v,int l,int r,int i)
{
    if((v.size()%2==0 && (v1.size()>v.size()/2 || v2.size()>v.size()/2)))
    return;

    if((v.size()%2==1 && (v1.size()>(v.size()+1)/2 || v2.size()>(v.size()+1)/2)))
    return;

    if(i==v.size())
    {
        int o = abs(l-r);
        if(p>o)
        {
            k1.clear();
            k2.clear();
            k1={v1.begin(),v1.end()};
            k2 = {v2.begin(),v2.end()};
            p = o;
        }
        return;
    }
        v1.push_back(v[i]);
        sub(v,l+v[i],r,i+1);
        v1.pop_back();
        v2.push_back(v[i]);
        sub(v,l,r+v[i],i+1);
        v2.pop_back();

}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    vector<int>v;
    for(int i =0;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
    }
    sub(v,0,0,0);

    for(auto c:k1)
    cout<<c<<" ";
    cout<<"\n";
    for(auto c:k2)
    cout<<c<<" ";
    cout<<"\n";
    return 0;

    // 45 -34 12 98 -1
    // 23 0 -99 4 189 4
}