    #include<bits/stdc++.h>
    using namespace std;
    map<int,int>m;
    set<string>t;
    vector<int>v;
    int c=0;
    void f(int i,string s,int n)
    {
        if(i==n)
        {
            
            if(t.find(s)==t.end())
            {
                cout<<s.substr(1,s.size())<<" END , ";
                t.insert(s);
                c++;
            }
            return;
        }
        if(i>n)
        return;
   
        if(m[i]!=0)
        {
            f(m[i],s+" "+to_string(i),n);
        }
        for(int j=1;j<=6;++j)
             f(i+j,s+" "+to_string(i),n); 
    }
    int main() {
        int n;cin>>n;
        vector<int>v;
        for(int i =2;i<n;++i)
        {
            int k = 0;
            int p  = (i+1)/2;
            for(int j=2;j<=p;++j)
            {
                if(i%j==0)
                {
                
                    k=1;
                    break;
                }
            }
            if(!k)
            v.push_back(i);
        }
        for(int i = 0;i<v.size()/2;++i)
            m[v[i]]=v[v.size()-1-i];

        f(0,"",n);
        cout<<"\n"<<c;
        return 0;
    }



    /*
    
    0 1 2 3 4 5 6 
        \    /                
         \ /
    */