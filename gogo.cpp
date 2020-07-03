#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;

void showSosu(int N) {
	xrep(i, 1, N) {
		if(N%i==0) {
			N = N/i;
			cout << N << endl;
		}
	}
}



int main() {
    showSosu(100);

    return 0;
}