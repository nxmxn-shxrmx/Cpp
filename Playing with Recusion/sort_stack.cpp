#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

void ins(int g,stack<int>&s)
{
    if(s.empty())
    s.push(g);

    else
    {
        if(s.top()<=g)
        s.push(g);

        else
        {
            int h =s.top();
            s.pop();
            ins(g,s);
            ins(h,s);
        }
    }

}
void sert(stack<int>&s)
{
    if(s.empty())
    return;
    int g = s.top();
    s.pop();
    sert(s);
    ins(g,s);
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
    sert(s);
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