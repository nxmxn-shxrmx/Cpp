#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
int sp(int c)
{
    if(c<10)
    return c;

    int k = sp(c/10)+c%10;
    if(k>10)
    k = sp(k);

    return k;
    
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout<<sp(123456);


    return 0;
}