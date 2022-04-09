#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
 vector<int>v;
void merge(int l,int mid,int r)
{
    vector<int>le;
    vector<int>ri;
    
    for(int i =l;i<=mid;++i)
        le.push_back(v[i]);

    le.push_back(INT_MAX);

    for(int i = mid+1;i<=r;++i)
        ri.push_back(v[i]);

    ri.push_back(INT_MAX);
    int k = 0;
    int q =0;

    for(int i =l;i<=r;++i)
    {
        if(le[k]>ri[q])
        {
            v[i] =ri[q];
            q++;
        }
        else
        {
            v[i]=le[k];
            k++;
        }
    }
return;

}
 void breaki(int l,int r)
 {
     if(l==r)
     return;
     
         int mid = (l+r)/2;
         breaki(l,mid);
         breaki(mid+1,r);
         merge(l,mid,r);
 }

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    
    for(int i =0;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
    }
    breaki(0,v.size()-1);
    for(auto c:v)
    cout<<c<<" ";

    return 0;
}