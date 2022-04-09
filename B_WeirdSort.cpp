#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v;
        vector<int>p(n);
        for(int i =0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
        }
        for(int i=0;i<m;++i)
        {
            int f;cin>>f;
            p[f-1]=1;
        }

        bool d = false;
        int i =0;
/*
        while (true)
        {
            if(is_sorted(begin(v),end(v)))
            {
                i = 0;
                break;
            }
            d =false;
            for(auto c:p)
            {
                if(v[c-1]>v[c])
                {
                    swap(v[c-1],v[c]);
                    d = true;
                }
            }
            if(d==false && is_sorted(begin(v),end(v))==false)
            {
                i =1;
                break;
            }
    
//3 2 1
//1
//3 2
//2 3 1
//2 
//3 1
//2 1 3
//
        }
        */
       
       for(int i =0;i<n;++i)
       {
           if(p[i]==0)
           continue;

           int j =i;
           while(p[j] && j<n)
           j++;

           sort(v.begin()+i,v.begin()+j+1);

           
    
           i =j;
       }
        if(is_sorted(begin(v),end(v)))
        cout<<"YES\n";

        else
        cout<<"NO\n";
        

    }



    return 0;
}
