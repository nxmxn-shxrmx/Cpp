#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    int k = 0;
    for(int i =0;i<n;++i){
        k=0;

        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;++j){
            if(j<i)
            cout<<k<<" ";

            else
            cout<<k;

            k+=1;
        }
        k-=2;
        cout<<" ";
        for(int j=0;j<i;++j){
            if(j<i-1)
            cout<<k<<" ";

            else
            cout<<k;
            k-=1;
        }
        cout<<"\n";
    }
    for(int i=0;i<n+1;++i)
    cout<<i<<" ";

    for(int i=n-1;i>-1;--i)
    {
    if(i!=0)
    cout<<i<<" ";

    else
    cout<<i;

    }
    cout<<"\n";

    for(int i =n-1;i>-1;--i){
        k=0;

        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;++j){
            if(j==i)
            cout<<k;

            else
            cout<<k<<" ";

            k+=1;
        }
        k-=2;
        cout<<" ";
        for(int j=0;j<i;++j){
            if(j<i-1)
            cout<<k<<" ";

            else
            cout<<k;
            k-=1;
        }
        cout<<"\n";
    }


     


    return 0;
}