#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        string s1 = to_string(k);
        string s2 = to_string(n);

        int l1 = s1.size();
        int l2 = s2.size();

        int w1 = l1;
        int w2 = l2;

        string ans = "";

        bool g = false;

        if(k<19 && k-n<=10)
        {
            cout<<k-n<<"\n";
    
        }

        else
        {

            for(int i =l1-1,j = l2-1;i>=0;)
            {
            
                if(j>-1)
                {

                    int x = s1[i] - '0';
                    int y = s2[j] - '0';

                    if(x>=y)
                    {
                        int z = x - y;
                        cout<<z<<"=z  ";
                        ans = to_string(z) + ans;
                        i-=1;
                        j-=1;
                

                    }
                    else
                    {
                        if(i>0)
                        {
                        int rr = s1[i-1] -'0';
                        int h = 10*rr + x;
                        cout<<h<<" ";
                        }
                        int h  =0;

                        if(h>=10 && h<19)
                        {
                            ans = to_string(h-y)+ans;
                        }
                        else
                        {
                            g = true;
                            break;
                        }
                        i-=2;
                        j-=1;
                        if(j>i)
                        {
                            g = true;
                            break;
                        }
                    
                    }
                    
                }
                else
                ans = "0"+ans;

            }
            if(g)
            cout<<-1<<"\n";

            else
            cout<<ans<<"\n";

        }
    }


    return 0;
}

/*

    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s1 = to_string(n);
        string s2 = to_string(k);

        bool g = false;
        int h = s2.size();
        int f = s1.size();
        string jk ="";
        for(int i =h-1,j=f-1;i>-1,j>-1;)
        {
            int e = s2[i] -'0';
            int y = s1[j] -'0';

            if(e>y)
            {
                int yy = e-y;
                jk = to_string(yy) + jk;
                i--;
                j--;
                h =i;
                f =j;
            }
            else
            {
                if(s1[i--]!=1 || f>h)
                {
                    g = true;
                    break;
                }
                else
                {
                    int yy  = stoi("1"+s2[i])-y;
                    jk = to_string(yy) + jk;
                    i = i-2;
                    j--;
                    h = i;
                    f = j;
                }
                
            }
            
        }
        if(g)
        {
            cout<<-1<<"\n";
        }
        else
        {
            int uu = jk.size();
            for(int i=0;i<uu-s1.size();++i)
            cout<<0;

            cout<<jk<<"\n";
        }
    }
*/