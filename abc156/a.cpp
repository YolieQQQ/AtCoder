#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;



int main() {
    int N, R;
    cin >> N >> R;
    if(N<10) {
        cout << R+(100*(10-N)) << endl;
    }
    else {
        cout << R << endl;
    }


    return 0;
}