#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;cin>>s>>t;
    map<char,bool>m;
    map<char,int>st;
    map<char,int>e;
    map<char,vector<int>>se;

   
    for(auto c:t)
    {
        m[c]=1;
        e[c]++;
        st[c]++;
        se[c]=vector<int>(s.size()+1);
    }
    int i = 0;
    while(i<s.size() && !m[s[i]])
    ++i;

    int p = i;
    int r = 0;
    int y = t.size();
    queue<int>q;
    
    q.push(i);
    y--;
    se[s[i]][1]+=1;
    i+=1;   
    for(int k=i;k<s.size();++k)
    {
         if(m[s[k]])
        {
            q.push(k);
            se[s[k]][k+1]+=1;
        }

        for(auto c:se)
            se[c.first][k+1]+=se[c.first][k];
    }

    for(i;i<s.size();++i)
    {
        if(y==0)
        {
          r = i;
           break;
        }
        if(st[s[i]])
        {
            st[s[i]]--;
            y--;
        }
    }
    y = q.front();
    q.pop();
    while (!q.empty() && i<s.size())
    {
        int j = q.front();
        while(i<s.size() && e[s[y]]>(se[s[y]][i]-se[s[y]][j]))
            ++i;
        if(e[s[y]]>(se[s[y]][i]-se[s[y]][j]))
        break;
        if(r-p>=(j-i))
        {
            p = j;
            r = i;
        }
        y  = j;
        q.pop();
    }
    
    cout<<s.substr(p,r);
    return 0;
}

//A D O B E C O D E B A N C