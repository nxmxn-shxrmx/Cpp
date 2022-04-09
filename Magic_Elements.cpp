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

        int n,k;
        cin>>n>>k;

        ll sum= 0,c=0;

        vector<int>v;

        for(int i =0;i<n;i++){

            int l;cin>>l;
            v.push_back(l);
            sum+=l;

        }

        for(int i=0;i<n;i++){

            if(v[i]+k>(sum-v[i])){
                c++;
            }
        }
        cout<<c<<"\n";

    }

    return 0;
}