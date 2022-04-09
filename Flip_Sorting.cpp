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
        int n;cin>>n;
        string s;cin>>s;
        if(is_sorted(s.begin(),s.end()))
        cout<<0<<"\n";
        else if(is_sorted(s.rbegin(),s.rend()))
        {
            cout<<1<<"\n";
            cout<<1<<" "<<n<<"\n"; 
        }
        else
        {
            int c =0;
            vector<pair<int,int>>p;
            for(int i = 0;i<n;++i)
            {
                if(is_sorted(s.begin()+i,s.end()))
                break;
                else if(is_sorted(s.rbegin(),s.rend()))
                {
                    p.push_back({i+1,n-i+1});
                    break;
                }
                else
                {
                    
                }

            }

        }
    }

    return 0;
}