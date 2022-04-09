#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while(t--){

        int n;cin>>n;
        vector<int>v;

        for(int i =  0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
        }
        string s;cin>>s;
/*
        vector<pair<int,char>>m;

        for(int i = 0;i<n;++i){
            if(s[i]=='B'){
                m.push_back(make_pair(v[i],'B'));
            }
            else{
                m.push_back(make_pair(v[i],'R'));
            }
        }
    
        1 5 b 
        2 2 r

        sort(m.begin(),m.end());
        bool f= true;
        for(int i =0;i<n;++i){

            if(m[i].first!=i+1){
                if(m[i].first>i+1){
                    if(m[i].second=='R')
                    {
                        cout<<"NO\n";
                        f = false;
                        break;

                    }

                }
                else{
                    if(m[i].second=='B')
                    {
                        cout<<"NO\n";
                        f = false;
                        break;
                    }
                }
            }

        }
        if(f)
        cout<<"YES\n";

        */
       vector<int>m,r;

       for(int i = 0;i<n;++i){
           (s[i]=='B'?m:r).push_back(v[i]);
       }
        sort(m.begin(),m.end());
        sort(r.begin(), r.end(), greater<int>());
        bool g = true;
        for(int i =0;i<m.size();++i){
            if(m[i]<i+1){
            g =false;
            }
        }
        for(int i =0;i<r.size();++i){
            if(r[i]>n-i){
            g =false;

            }
        }
        if(g)
        cout<<"YES\n";

        else
        cout<<"NO\n";        
    }



    return 0;
}