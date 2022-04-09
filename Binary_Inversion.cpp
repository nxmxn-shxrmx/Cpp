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
        
        int n,m;
        cin>>n>>m;
        multiset<pair<int,int>>mi;
        vector<string>v;
        for(int i= 0;i<n;++i){
            string d;cin>>d;
            v.push_back(d);
            int cd = count(begin(d),end(d),'1');
            mi.insert(make_pair(cd,i));
        }
        string r="";
        for(auto x:mi){
            r+=v[x.second];
        }
        
        ll gh = 0, c =0;
        for(int i =0;i<r.size();++i){
            if(r[i]=='1')
            {   
                gh++;
            }
            else
            c+=gh;

        }
        cout<<c<<"\n";
        

        //0101 1011 1101 =>


    }


    return 0;
}