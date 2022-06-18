#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    priority_queue<pair<ll,ll>>s1,s2,s3,s4;
    vector<string>v;

    for(int i = 0;i<n;++i)
    {
        ll x,y;
        cin>>x>>y;
        if(x<0 && y<0)
        s3.push({x,y});

        else if(x>=0 && y>=0)
        s1.push({-x,-y});

        else if(x>=0 && y<0)
        s4.push({-x,y});

        else if(x<0 && y>=0)
        s2.push({x,-y});
    }
    while(!s1.empty())
    {
        auto it = s1.top();
        s1.pop();
        if(it.first!=0)
        {
            int h = abs(0-it.first);
            v.push_back("1 "+to_string(h)+" R");
        }
        if(it.second!=0)
        {
            int h = abs(it.second);
            v.push_back("1 "+to_string(h)+" U");
        }
        v.push_back("2");
        if(it.first!=0)
            v.push_back("1 "+to_string(abs(it.first))+" L");
        if(it.second!=0)
        v.push_back("1 "+to_string(abs(it.second))+" D");
        v.push_back("3");
    }
     while(!s2.empty())
    {
        auto it = s2.top();
        s2.pop();


        v.push_back("1 "+to_string(abs(it.first))+" L");

        if(it.second!=0)
            v.push_back("1 "+to_string(abs(it.second))+" U");

        v.push_back("2");

        v.push_back("1 "+to_string(abs(it.first))+" R");
        if(it.second!=0)
        v.push_back("1 "+to_string(abs(it.second))+" D");
        
        v.push_back("3");
    }

    while(!s4.empty())
    {
        auto it = s4.top();
        s4.pop();

        if(it.first!=0)
        v.push_back("1 "+to_string(abs(it.first))+" R");

        v.push_back("1 "+to_string(abs(it.second))+" D");

        v.push_back("2");

        if(it.first!=0)
        v.push_back("1 "+to_string(abs(it.first))+" L");

        v.push_back("1 "+to_string(abs(it.second))+" U");
        
        v.push_back("3");
    }
     while(!s3.empty())
    {
        auto it = s3.top();
        s3.pop();


        v.push_back("1 "+to_string(abs(it.first))+" L");

    
        v.push_back("1 "+to_string(abs(it.second))+" D");

        v.push_back("2");

        v.push_back("1 "+to_string(abs(it.first))+" R");
        v.push_back("1 "+to_string(abs(it.second))+" U");
        
        v.push_back("3");
    }

    cout<<v.size()<<"\n";
    for(auto c:v)
    cout<<c<<"\n";


    return 0;
}