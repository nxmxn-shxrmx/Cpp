#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;cin>>s;
    string v;cin>>v;
    set<string>st;
    
    int k;cin>>k;
    for(int i = 0;i<s.size();++i)
    {
        int l = k;
        string e = "";
        for(int j = i;j<s.size();++j)
        {
            if(v[s[j]-'a']=='1')
            {
                e+=s[j];
                st.insert(e);
            }
            else
            {
                l--;
                if(l<0)
                break;

                e+=s[j];
                st.insert(e);
            }
        }
    }
    
    cout<<st.size()<<"\n";

    return 0;
}