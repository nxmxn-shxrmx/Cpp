#include<bits/stdc++.h>
using namespace std;


int main() {
    
    vector<int>v;
    int n;cin>>n;
    
    for(int i=0;i<n;i++){
        int d;cin>>d;
        v.push_back(d);
    } 
    int t;cin>>t;
    while(t--){
    int x;cin>>x;
    
     vector<int>::iterator z =  lower_bound(v.begin(),v.end(),x);
    if(x!=v[z-v.begin()]){
        cout<<"No "<<z -v.begin()+1<<endl;
    }
    else{
        cout<<"Yes "<<z-v.begin()+1<<endl;
    }
    }
    
    return 0;
}
