#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int Q;
    cin >> Q;
    int B, C;
    vector<int> ansVec;
    sort(A.begin(), A.end());
    rep(i, Q) {
        cin >> B >> C;
        int left = 0;
        int right = A.size()-1;
        while(left<=right) {
            int mid = (left+right)/2;
            if(A[mid]==B) {
                A[mid] = C;
                rep(j, A.size()-mid) {
                    if(A[mid+j]==B) {
                        A[mid+j] = C;
                        continue;
                    }
                    break;
                }
                cout << "----" <<endl;
                for(int a: A) {
                    cout << "R" << a << endl;
                }
                rep(j, A.size()-mid) {
                    if(A[mid-j]==B) {
                        A[mid-j] = C;
                        continue;
                    }
                    break;
                }
            }
            else if (A[mid]<B) {
                left = mid+1;
            }
            else {
                right = mid-1;
            }
        }
        int ans  = 0;
        for(int a: A) {
            ans += a;
        }
        ansVec.push_back(ans);
    }

    for(int an: ansVec) cout << an << endl;

    return 0;
}