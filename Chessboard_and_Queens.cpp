// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<string>v;
    set<string>se;
    void re(string t,string s,int i)
    {
        if(i>=s.size())
        {
            v.push_back(t);
            return;
        }
        string r = "";
        for(int j =i;j<s.size();++j)
        {
            r+=s[j];
            if(se.find(r)!=se.end())
            {
              
                if(t.size()==0)
                re(r,s,j+1);
                else
                re(t+" "+r,s,j+1);
            }
        }
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        se={dict.begin(),dict.end()};
        re("",s,0);
        // for(auto c :v)
        // cout<<c<<"\n";
        return v;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends