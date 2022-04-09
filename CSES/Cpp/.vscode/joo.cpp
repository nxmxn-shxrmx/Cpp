#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    long long n;

    cin >> t;

    while(t--){
    
    cin >> n;

    long long d = n/3;
    long long c = ceil(double(n)/3);

    if (d + 2*c==n){

        cout << d << " " << c << endl;
    }
    else{

        cout << c << " " << d << endl;
    }

    }
return 0;

}
/*334 333
10 10
1 0
10 11
333333334 333333333
1 2*/