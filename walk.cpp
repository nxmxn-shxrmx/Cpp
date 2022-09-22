#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<char>v;
    for(int i =0;i<n;++i)
    {
        char c;cin>>c;


        v.push_back(c);
    }   
    
    string s="";
    for(int i =0;i<n-1;++i)
    {
        if(v[i+1]=='*')
        {
            s+="J";
            while(i+1<n && v[i+1]=='*')
            ++i;
        }
        else
        s+="W";

    }
    cout<<s<<"\n";


    return 0;
}