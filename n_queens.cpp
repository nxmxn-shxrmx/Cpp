// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<int>>v;
    vector<int>f;
    set<int>p;
    set<int>ne;
    set<int>c;
    void re(int r,int n)
    {
        if(r==n)
        {
           
            v.push_back(f);
            
            return;
        }
        
        for(int i = 0;i<n;i++)
        {
            if(c.find(i)!=c.end() || p.find(r-i)!=p.end() || ne.find(r+i)!=ne.end())
            continue;
            
            p.insert(r-i);
            ne.insert(r+i);
            c.insert(i);
            
            f.push_back(i+1);
            re(r+1,n);
            
            p.erase(r-i);
            ne.erase(r+i);
            c.erase(i);
            f.pop_back();
        }
    }
    vector<vector<int>> nQueen(int n) {
        re(0,n); 
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends