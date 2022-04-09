#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;
    int b,n;
    cin>>a>>b>>n;
    bool f=false;
    
    for(int i=0;i<10;i++){
        string s = to_string(i);
        string dd = a+s;
        int jor= stoi(dd);
        if(jor%b==0){   
            f = true;
            a = dd;
            break;
        }
    }
    if(f){
         string t(n-1,'0');

         cout<<a+t;
    }
    else{
        cout<<-1;
    }


    return 0;
}