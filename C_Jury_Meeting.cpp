#include<bits/stdc++.h>
using namespace std; 
long long int p=998244353;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; 
        int a[n]; 
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        sort(a,a+n);
        if(a[n-1]==a[n-2]){
            long long int res=1;
            for(int i=1;i<=n;i++){
                res=(res*i)%p;
            }
            cout<<res<<"\n";
            
        } else if(a[n-1]-a[n-2]==1){
            int x=m[a[n-2]]; 
            long long int res=1; long long int temp=1;
            for(int i=1;i<=n;i++){
                res=(res*i)%p;
                if(i!=x+1){
                   temp=(temp*i)%p;
                }
               
            } 
         
           cout<<(res-temp + p)%p<<"\n";
           
        } else cout<<"0"<<"\n";
        
    }
}