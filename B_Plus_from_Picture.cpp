#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
int ch[500][500];

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n>>m;

    vector<string>v;

    for(int i=0;i<n;++i)
    {
        string f;cin>>f;
        v.push_back(f);
    }
    bool h = false;
    for(int i =1;i<n-1;++i)
    {
        for(int j =1;j<m-1;++j)
        {
            if(v[i][j]=='*' && v[i-1][j]=='*' && v[i+1][j]=='*' && v[i][j+1]=='*' && v[i][j-1]=='*')
            {
                h = true;
                int u = i,d=i;
                int r = j,l = j;

                ch[i][j]=1;
                while(v[u--][j]=='*' && u>=0)
                {
                    ch[u][j]=1;
                }
                while(v[d++][j]=='*' && d<n)
                {
                    ch[d][j]=1;
                }
                while(v[i][r--]=='*' && r>=0)
                {
                    ch[i][r]=1;
                }while(v[i][l++]=='*' && l<m)
                {
                    ch[i][l]=1;
                }
                break;
            }

        }
        if(h)
        break;
    }
    if(h)
    {
        int e =0;

        for(int i =0;i<n;++i)
        {

            for(int j =0;j<m;++j)
            {
                if(v[i][j]=='*' && ch[i][j]==0)
                {
                    e =1;
                    cout<<"NO\n";
                    break;
                }
            }
            if(e==1)
            break;
        }
        if(e==0)
        cout<<"YES\n";

    }
    else
    cout<<"NO\n";

    /*
    5 6
. .... .

. .*.. .
. **** .
. .*.. .

. .*.. .

    */


    return 0;
}

 /* for(int i=0;i<n;++i)
        {
            for(int j =0;j<m;++j)
            {
                if(v[i][j]=='*')
                {
                    if(i!=h && j!=g)
                    {
                        cout<<"NO\n";
                        r = false;
                        break;
                    }
                }
            }
            if(r==false)
            break;
        }
        */