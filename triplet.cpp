#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        vector<int>a,b;
        for(int i = 0;i<n;++i)
        {
            int f;cin>>f;
            a.push_back(f);
        }
    
        for(int j =0;j<m;++j)
        {
            int f;cin>>f;
            b.push_back(f);
        }
    

        ll sum1 =0;
        ll sum2= 0;
        ll ans = 0;

        int i=0;
        int j=0;
        while(i<a.size() && j<b.size())
        {
            if(b[j]>a[i])
            {
                sum1+=a[i];
                ++i;
            }
            else if(a[i]>b[j])
            {
                sum2+=b[j];
                ++j;
            }
            else{
                ans  += max(sum1,sum2)+a[i];
                ++i;
                ++j;
                sum1=0;
                sum2=0;
                
            }
        }
        while(i<a.size())
        sum1+=a[i++];
         while(j<b.size())
        sum2+=b[j++];
        
        ans+=max(sum1,sum2);
        cout<<ans<<"\n";


    }


    return 0;
}