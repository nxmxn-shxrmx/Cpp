#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

void combinationUtil(vector<ll>&arr, int n, int r,
int index, int data[], int i,vector<pair<int,int>>&p);
  
void printCombination(vector<ll>&arr, int n, int r,vector<pair<int,int>>&p)
{
    int data[r];
  
  
    combinationUtil(arr, n, r, 0, data, 0,p);
}
  
void combinationUtil(vector<ll> &arr, int n, int r, int index,
                     int data[], int i,vector<pair<int,int>>&p)
{
    if (index == r) {
        p.push_back({data[0],data[1]});
        return;
    }
    if (i >= n)
        return;
  
    data[index] = arr[i];
    combinationUtil(arr, n, r, index + 1, data, i + 1,p);
  
    combinationUtil(arr, n, r, index, data, i + 1,p);
}
  

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;

        vector<ll>v;
        for(int i =0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
        }
        
     vector<pair<int,int>>p;

      printCombination(v, n, 2,p);

    ll w =0;
      for(auto c:p)
      {
          ll e = c.first & c.second;
            w =w | e;

      }
      cout<<w;

      cout<<"\n";

    }
    return 0;
}