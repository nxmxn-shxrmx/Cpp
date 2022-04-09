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

      int n,x;
     cin>>n>>x;
     unordered_map<int,int> ma;
     unordered_map<int,bool> p;
     for(int i=0;i<n;i++){
         int f;cin>>f;
         ma[f]++;
         p[f]=true;
     }
     if(n==1){
         cout<< 1 << " " << 0 << "\n";
         continue;
     }
     int dd=0;
     int c = 0;
     for(auto it: ma){
         if(it.second==n){
             dd=n;
             break;
         }
         if(it.second>dd){
             dd=it.second;
         }
     }
     if(x==0){
         cout<< dd << " " <<c<<"\n";
         continue;
     }
     for(auto it:ma){
         int ss = it.first^x;
         if(p[ss]){
             if(it.second + ma[ss]>dd){
                 dd= it.second + ma[ss];
                 c = min(it.second,ma[ss]);
             }
             else if(it.second + ma[ss]==dd){
                 if(min(it.second,ma[ss]) < c){
                     c = min(it.second, ma[(it.first)^x]);
                 }
             }
         }
     }
     
     cout<< dd << " " << c<<"\n";
     
     }


    return 0;
}