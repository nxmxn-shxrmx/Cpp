#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
stack<int>s;

void push_at_bottom(int c)
{
    if(s.empty())
    {
        s.push(c);
        return;
    }

    int k = s.top();
    s.pop();
    push_at_bottom(c);
    s.push(k);
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    for(int i = 0;i<5;++i)
    {
        int f;cin>>f;
        s.push(f);
    }
    int c;cin>>c;
    push_at_bottom(c);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}