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

        for(int i= 0;i<n;++i){
            int f;cin>>f;
            v.push_back(f);
        }
        int an = 0;
        
        while(!is_sorted(begin(v),end(v)))
        {
            for(int i =an%2;i<n-1;i+=2)
            {
                if(v[i]>v[i+1]){
                    swap(v[i],v[i+1]);
                
                    
                }
            }
            an++;
            
        }
        cout<<an<<"\n";
    }


    return 0;
}

//17 16 7 2 14 8 3 6 11 13 12 10 1 15 5 4 9
//16 17 2 7 8 14 3 6 11 13 10 12 1 15 4 5 9 =>1
//16 2 17 7 8 3 14 6 11 10 13 1 12 4 15 5 9 =>2
//2 16 7 17 3 8 6 14 10 11 1 13 4 12 5 15 9 =>3
//2 7 16 3 17 6 8 10 14 1 11 4 13 5 12 9 15