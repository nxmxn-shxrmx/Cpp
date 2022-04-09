#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    int t; cin >> t;

    vector<int>a;
    while (t--)
    {
        int n; cin >> n;
        int j = 0, ch = 0, ou = 0;;
        for (int i = 0; i <n; i++)
        {
            int f;cin>>f;
            a.push_back(f);
            if (a[i+1] % 2 == 0)
                ou++;
            else
                j++;
        }
        sort(a.begin(),a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] - a[i +1] == 1)
            {
                ch++; i++;
            }
        }
            if (j % 2 == 0 && ou % 2 == 0)
                cout << "YES" << endl;
            else
            {
                if (ch != 0) cout << "YES" << endl;
                else cout << "NO" << endl;

            }
       
    }



    return 0;
}