#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<int>v;
void insert(int d)
{
    if(v.size()==0)
    {
        v.push_back(d);
        return;
    }
    if(v[v.size()-1]<=d)
    {
        v.push_back(d);
        return;
    }
    int w =v[v.size()-1];
    //1 3  4    2
    v.pop_back(); 
    insert(d);
    insert(w);

}
void shoty()
{
    if(v.size()==0)
    return;
    //1 4 2 6 7 8
    int t = v[v.size()-1];
    v.pop_back();
    shoty();
    insert(t);
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
    shoty();
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    



    return 0;
}