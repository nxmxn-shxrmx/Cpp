#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
void hanoi(int n,int a,int b,int c)
{
    if(n==1)
    {
        cout<<1<<" "<<b<<"\n";
        return;
    }

    hanoi(n-1,a,c,b);
    cout<<n<<" "<<b<<"\n";

    hanoi(n-1,c,b,a);
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    hanoi(n,1,3,2);

    return 0;
}