#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)

int gcd(int a, int b, int c) {
    int minV = min(a, b);
    minV = min(minV, c);
    int ans;
    for(int i=minV; i>0; i--) {
        if(a%i==0&&b%i==0&&c%i==0) {
            ans = i;
        }
    }
    cout << ans << endl;
    return ans;
}

    




int main() {
    int K;
    int ans = 0;
    cin >> K;
=======
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
typedef long long ll;

int gcd(int a, int b, int c) {
    int gcdNum;
    int minV = min(a, b);
    minV = min(minV, c);
    for(int i=minV; i>0; i--) {
        if(a%i==0&&b%i==0&&c%i==0) {
            gcdNum = i;
            break;
        }
    }
    return gcdNum;
}


ll K;

int main() {
    cin >> K;
    int ans = 0;
>>>>>>> 0a586bdafafe10c55930fa65bc846a3734752dc0
    xrep(a, 1, K+1) {
        xrep(b, 1, K+1) {
            xrep(c, 1, K+1) {
                ans += gcd(a, b, c);
            }
        }
    }

    cout << ans << endl;


<<<<<<< HEAD
=======

>>>>>>> 0a586bdafafe10c55930fa65bc846a3734752dc0
    return 0;
}