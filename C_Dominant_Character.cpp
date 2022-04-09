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
        string s;cin>>s;
        string a = "aa",b ="aba",c= "aca";
        string p = "abca",q = "acba",r = "abbacca",e="accabba";
        int g =8;
        
        bool tr = true;
        for(int i =0;i<n;++i){
            string a1 =  s.substr(i,2);
            string b1 = s.substr(i,3);
            string c1 = s.substr(i,4);
            string d1 = s.substr(i,7);

            if(a1==a)
            {
                cout<<2<<"\n";
                g=2;
                tr = false;
                break;
            }
            if(b1==b || b1==c)
            {
                g = min(3,g);
            }
            if(c1==p || c1==q)
            {
                g = min(4,g);
            }
            if(d1==r || d1==e)
            {
                g = min(7,g);
            }
        }
        if(g==8)
        cout<<-1<<"\n";

        else{
            if(tr)
            cout<<g<<"\n";
        }

    }

    


    return 0;
}