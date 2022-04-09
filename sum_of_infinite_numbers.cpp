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
        vector<int>sumof;
        int s =0;
        for(int i=0;i<n;++i){
            int f;cin>>f;
            v.push_back(f);
            s +=f;
            sumof.push_back(s);
        }

        int q;cin>>q;

        while(q--){

            int l,r;
            cin>>l>>r;

            int li = l%n;

            if(li==1){
                int ww = r/n;
                int e = (r-1)%n;
                if(r==n)
                cout<<s<<" ";

                else
                cout<<ww*s+sumof[e]<<" ";
            }
            else{

                int w = r-l+1;
                if(w==n)
                cout<<s<<" ";

                else
                {
                    int q = w/n;
                    int roo= 0;
                    int aa = w%n;
                    for(int j = li-1;j<li-1+aa;++j)
                    roo+=v[j];

                    cout<<q*s+roo<<" ";
                }


            }


        }
          cout<<"\n";
    }



    return 0;
}