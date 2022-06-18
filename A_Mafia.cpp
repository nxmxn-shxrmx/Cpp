#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll c=0;
    ll ma = INT_MIN;
    int n;cin>>n;
    vector<int>v;
    for(int i = 0;i<n;++i)
    {
        ll f;cin>>f;
        v.push_back(f);
        c+=f;
        ma= max(f,ma);
    }
    ll l = ma,r =c;

    while(l<r)
    {
        ll m =(l+r)/2;
        if(m<=(n*m-c))
        r=  m;
        else
        l = m+1;
    }
    cout<<r<<"\n";

    return 0;
}

// Let's say you're going to play x games. If someone wanted to play more than x games, he wouldn't be able to do so, so he would be unhappy. Therefore, if everyone is happy, x ≥ ai must hold for each i, so

// x ≥ max(a1, a2, ..., an)
// Let $b_i$ be number of games, where i-th player is supervisor and let ci be number of games, where he plays. In each game i-th player is playing, XOR supervising, so ci + bi = x. Also, he wants to play at least ai games, so ai ≤ ci, thus bi ≤ ci + bi - ai, so bi ≤ x - ai.

// Each game is supervised by one player, so x = b1 + b2 + ... + bn. Giving it all together:

// x = b1 + b2 + ... + bn ≤ (x - a1) + (x - a2) + ... + (x - an)


// Now we have two lower bounds for $x$ . Smallest x satisfying both of them is


// This number of games is enough, because if first $x - a_1$ games are supervised by first player, next x - a2 games are supervised by second player etc., until the x-th game, then everyone plays enough games and each game is supervised by someone.