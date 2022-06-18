#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s1,s2;
    cin>>s1>>s2;

    if(s2.size()<s1.size())
    swap(s1,s2);

    bool l = true;
    if(s1==s2)
    l =false;

    

    int c = 0;
    string u = "";
    for(int i =0;i<s1.size();++i)
    {
        u+=s1[i];
        if(s1.size()%u.size()!=0)
        continue;

        bool o = false;
        if(l)
        for(int j = i+1;j<s1.size();j+=u.size())
        {
               string r = s1.substr(j,u.size());
                if(r!=u)
                {
                    o = true;
                    break;
                }
        }
        if(o)
        continue;

        if(s2.size()%u.size()==0)
        {
            bool k = true;

            for(int j = 0;j<s2.size();j+=u.size())
            {
                string r = s2.substr(j,u.size());
               // cout<<r<<" ";
                if(r!=u)
                {
                    k= false;
                    break;
                }
                
            }
//            cout<<"\n";

            if(k)
            c++;
        }
    }

cout<<c<<"\n";
    return 0;
}