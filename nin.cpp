#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main() {

	// Write your code here
    int n;cin>>n;
    vector<int>v;

    multiset<ll>s;
    map<int,int>m;

    int c =0;
    for(int i =0;i<n;++i)
    {
        int f;cin>>f;
        if(m.find(f)!=m.end())
        {
            m[f-1]++;
            m[f]--;
            if(m[f]==0)
            m.erase(f);
        }
        else
        {   m[f-1]++;
            c++;
        }
    }
    cout<<c<<"\n";    

    return 0;
}