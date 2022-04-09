#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
void rem(stack<int>&s,int d)
{
    if(d==1)
    {
        s.pop();
        return;
    }
    int y = s.top();
    s.pop();
    rem(s,d-1);
    s.push(y);
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<int>s;
    stack<int>r;
    int n;cin>>n;
    for(int i =0;i<n;++i)
    {
        int f;cin>>f;
        r.push(f);
        s.push(f);
    }
    int d = s.size()/2 +1;
    rem(s,d);

    while(!r.empty())
    {
        cout<<r.top()<<" ";
        r.pop();
    }
    cout<<"\n\n";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}