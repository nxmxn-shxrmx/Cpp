#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

/*bool ans;

void check(int x, vector<int>v)
{

    vector<int>nm;
    for(int i=0;i<v.size();++i){
        if(v[i]!=x)
        nm.push_back(v[i]);
    }
    for(int i=0;i<nm.size();++i){
        if(nm[i]!=nm[nm.size()-1-i])
        {
    
            return;
        }
    }
    ans = true;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while (t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i =0;i<n;++i){
            int f;cin>>f;
            v.push_back(f);
        }
            ans  = true;
        for(int i =0;i<n;++i)
        {
            if(v[i]!=v[n-i-1])
            {
               ans= false;
                check(v[i],v);
                check(v[n-i-1],v);
                break;
            }
        }
        if(ans)
        cout<<"YES\n";

        else
        cout<<"NO\n";
    
    }
    */
   int qq, n, m, a[10000000], b[10000000];
bool ans;
 
void check(int x){
	m = 0;
	for (int i = 1; i <= n; ++ i)
		if (a[i] != x)
			b[++ m] = a[i];
	for (int i = 1; i <= m; ++ i)
		if (b[i] != b[m + 1 - i])
			return;
	ans = true;
}
 
int main(){
 
	cin >> qq;
	while (qq --){
		cin >> n, ans = true;
		for (int i = 1; i <= n; ++ i)
			cin >> a[i];
		for (int i = 1; i <= n; ++ i){
			if (a[i] != a[n + 1 - i]){
				ans = false;
				check(a[i]);
				check(a[n + 1 - i]);
				break;
			}
		}
		if (ans)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}



    return 0;
}