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
        vector<string>v;
        do
        {
            v.push_back(s);
            if(v.size()==2)
            break;
        } while (next_permutation(begin(s),end(s)));
        if(v.size()==1)
        cout<<"no answer\n";
        else
        cout<<v[1]<<"\n";

    }
    



    return 0;
}