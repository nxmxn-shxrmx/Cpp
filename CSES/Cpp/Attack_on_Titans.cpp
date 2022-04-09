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

        ll on=0;

        for(int i=0;i<n;++i){

            if(i==0){
                if(s[i]=='0' && s[i+1]=='0'){
                    on++;
                    s[i]='1';
                    
                }
            }
            else if(i<n-1){

                if(s[i]=='0' && s[i+1]=='0' && s[i-1]=='0'){
                    on++;
                    s[i]='1';
            }
           
            }
             else{
                if(s[i]=='0' && s[i-1]=='0'){
                s[i]='1';
                on++;
                }
            }  
        }
    
        cout<<on<<'\n';
    }



    return 0;
}