#include<bits/stdc++.h>


using namespace std;
#define ll long long

const int N =1e5+10;
const int mod = 32768;

int main()
{
    
    cin.tie(0);
    cout.tie(0);

    queue<int>q;
    vector<int>v[mod+8];
    vector<int>a(mod+8,-1);
    
    for(int i = 0; i < mod; i++)
    {
        v[(i+1)%mod].push_back(i);
        v[(i*2)%mod].push_back(i);
    }
    a[0] = 0;
    q.push(0);
    while(!q.empty())
    {
       ll k = q.front();
        q.pop();
        for(auto c: v[k])
            if(a[c] == -1)
            {
                a[c] = a[k]+1;
                q.push(c);
            }
    }
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cout<<a[n]<<" ";
    }
    return 0;
}