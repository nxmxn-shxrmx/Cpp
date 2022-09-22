#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define mod (ll)(1e9 +7)
const int N = 1e6 + 100;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<string,int>m;
    string s;cin>>s;
    int  n= s.size();
   
    int i =0;
    while(i<n)
    {
        if(s[i]=='(')
        {
            
            vector<string>v;
            while(i<n && s[i]!=')')
            {
                string u ="";
                u+=s[i++];
                if(s[i]>='a' && s[i]<='z')
                u+=s[i++];

               v.push_back(u);
            }
            i+=1;
        }
    }

    return 0;
}