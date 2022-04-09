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
        string s;
        string se;
        cin>>s>>se;
        map<char,vector<int>>m;
        if(s==se)
        {
            cout<<"YES\n";
            continue;
        }
        for(int i = 0;i<s.size();++i)
        {
            m[s[i]].push_back(i);
        }
        bool k =0;
        bool r = 0;
        string sr= "";
        int i = 0;
        int o;
        int p = 0;
        if(m.find(se[0])!=m.end())
        {
             o = m[se[0]][0];
        }
        else
        {
            cout<<"NO\n";
            continue;
        }
        while(true)
        {
            if(s[o]==se[i])
            {
                sr+=s[o];
                ++i;
            }
            if(i==se.size())
            {
                r=1;
                break;
            }
    
            if(o==s.size()-1)
            {
                k =1;
            }
            if(o-1>-1 && s[o-1]==se[i])
            {
                int uu = o -(se.size() - sr.size());
                if(uu>-1)
                {
                    string y = s.substr(uu,se.size() - sr.size());
                    reverse(begin(y),end(y));
                    if(sr+y==se)
                    {
                        r =1;
                        break;
                    }
                }
            }
            if(k)
            {
                if(o-1>-1 && s[o-1]==se[i])
                {
                    o--;
                }
                else
                {   if(p+1<m[se[0]].size())
                    {
                        ++p;
                        o = m[se[0]][p]; 
                        sr ="";
                        i =0; 
                        k =0; 
                    }
                    else
                    {
    
                        break;
                    }
                }
            }
            else
            {
                if(o+1<s.size() && s[o+1]==se[i])
                o++;
                else if(o-1>-1 && s[o-1]==se[i])
                {
                    k =1;
                    o--;
                }
                else
                {
                      if(p+1<m[se[0]].size())
                    {
                        ++p;
                        o = m[se[0]][p]; 
                        sr ="";
                        i =0;
                        k=0;  
                    }
                    else
                    {
        
                        break;
                    }

                }
            } 
             if(se==sr)
            {
                 r = 1;
                break;
            }  
        }
    
    
        if(r)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }


    return 0;
}