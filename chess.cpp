#include<bits/stdc++.h>
using namespace std;

#define ll long long


vector<string>t;
map<string,bool>m;
long long u = 0;
void f(int i,int j,int n,string s)
{
    if(i==n-1 && j==n-1)
    {
        s+="{"+to_string(i)+"-"+to_string(j)+"}";
        if(!m[s])
    {
                            cout<<s<<" ";
        m[s]=1;
    }
        return;
    }
    if(i>=n || j>=n)
    return;

    f(i+2,j+1,n,s+"{"+to_string(i)+"-"+to_string(j)+"}K");
    f(i+1,j+2,n,s+"{"+to_string(i)+"-"+to_string(j)+"}K");

    if(i==0 || i==n-1)
    {
         
        for(int k = j+1;k<n;++k)
        {
           f(i,k,n,s+"{"+to_string(i)+"-"+to_string(j)+"}R");      
        }
         for(int k = i+1;k<n;++k)
        {
            f(k,j,n,s+"{"+to_string(i)+"-"+to_string(j)+"}R");    
        }
      
    }
    if(j==0 || j==n-1)
    {
       
         for(int k = j+1;k<n;++k)
        {
           f(i,k,n,s+"{"+to_string(i)+"-"+to_string(j)+"}R");      
        }
          for(int k = i+1;k<n;++k)
        {
           f(k,j,n,s+"{"+to_string(i)+"-"+to_string(j)+"}R");      
        }
    }

    if(i==j || i+j==n-1)
    {
        for(int k = 1;k<n;++k)
        {
            f(i+k,j+k,n,s+"{"+to_string(i)+"-"+to_string(j)+"}B");   
        }
    }

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    if(n==0)
    {
        cout<<0<<"\n";
        return 0;
    }
f(0,0,n,"");

cout<<"\n"<<m.size()<<"\n";
    return 0;
}