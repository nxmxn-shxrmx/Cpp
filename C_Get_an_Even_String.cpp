#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        map<char,int>m;
        ll c= 0;
        for(int i =0;i<s.size();++i)
        {
            m[s[i]]++;
            if(m[s[i]]==2)
            {
                c--;
                m.clear();
            }
            else
            c++;
        }
        cout<<c<<"\n";
    }

    return 0;
}