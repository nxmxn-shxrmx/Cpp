#include<bits/stdc++.h>

using namespace std;

#define ll long long;
vector<int> findDataLocations(vector<int>l,vector<int>mf,vector<int>mt)
{
    set<int>s(l.begin(),l.end());

    for(int i = 0;i<mf.size();++i)
    {
        s.erase(mf[i]);
        s.insert(mt[i]);
    }
    vector<int>ans(s.begin(),s.end());
    return ans;
}
int main()
{

    int n;cin>>n;
    vector<int>m;
    for(int i =0;i<n;++i)
    {
        int f;cin>>f;
        m.push_back(f);
    }
    int s;cin>>s;
    vector<int>mf,mt;
    for(int i =0;i<s;++i)
    {
        int f;cin>>f;
        mf.push_back(f);
    }
      for(int i =0;i<s;++i)
    {
        int f;cin>>f;
        mt.push_back(f);
    }

    vector<int>ans = findDataLocations(m,mf,mt);
    for(auto c:ans)
    {
        cout<<c<<"\n";
    }
    return 0;
}