// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string>v;
    vector<vector<bool>>b;
   void  re(string s,int i,int j,vector<vector<int>> &m,int n)
    {
        if(i==n-1 && n==j+1)
        {
            v.push_back(s);
            return;
        }
        if(i<0 || j==n || i==n || j<0 || m[i][j]==0 || b[i][j]==1)
        return;

        if(m[i][j]==0)
        return;
        
        b[i][j]=1;
        re(s+"D",i+1,j,m,n);
        re(s+"L",i,j-1,m,n);
        re(s+"R",i,j+1,m,n);
        re(s+"U",i-1,j,m,n);
        b[i][j]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        b = vector<vector<bool>>(n,vector<bool>(n));
        re("",0,0,m,n);
        return v;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends