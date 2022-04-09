/*
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)


bool check(int m,int h,vector<int>v)
{
    ll k =0;
    //2 26 40 42 4
    for(int i=0;i<v.size();++i)
    {
         
        if(m<v[i])
        {
            k=  k +(v[i]-m);
        }
    }
    
    return k>=h;
}
int main(){

    ios_base::sync_with_stdio(0);

    cin.tie(0);
    cout.tie(0);

    ll n,x;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;++i)
    {
        ll f;cin>>f;
        v.push_back(f);
    }
    sort(begin(v),end(v));
    ll l =0,r = v[n-1];
    while(r-l>1)
    {
        ll mid = (l+r)/2;
        //F F F F F T T T T T T
        //T T T T T T F F F F F
        if(check(mid,x,v))
        {
            l = mid;
        }
        else
        {
            r = mid -1;
        }
    }
    if(check(r,x,v))
    {
        cout<<r<<"\n";
    }
    else
    cout<<l<<"\n";



    return 0;
}

*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

bool check(vector<int>&v,int m,int n,int h)
{
    int k =0;
    for(int i=0;i<n;++i)
    {
        if(v[i]>m)
        {
            k = k + (v[i])-m;
        }
    }
    return k>=h;

}


int main(){

    ios_base::sync_with_stdio(0);

    cin.tie(0);
    cout.tie(0);

    int n,h;
    cin>>n>>h;
    vector<int>v;

    for(int i =0;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
    }
    sort(begin(v),end(v));
    int l = 0;
    int r = v[n-1];

    while(r-l>1)
    {
        int mid = (l+r)/2;

        if(check(v,mid,n,h))
        l = mid;

        else
        r  = mid-1;

    }
    if(check(v,r,n,h))
    cout<<r<<"\n";

    else
    cout<<l<<"\n";


    return 0;
}