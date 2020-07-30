#include <bits/stdc++.h>
using namespace std;
void print() {
    cout << endl;
}
template <class Head, class... Tail>
void print(Head &&head, Tail &&... tail) {
    cout << head;
    if (sizeof...(tail) != 0)
        cout << " ";
    print(forward<Tail>(tail)...);
}
template <class T>
void print(vector<T> &vec) {
    for (auto &a : vec) {
        cout << a;
        if (&a != &vec.back())
            cout << " ";
    }
    cout << endl;
}
template <class T>
void print(vector<vector<T>> &df) {
    for (auto &vec : df) {
        print(vec);
    }
}
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
using ll = long long;
const int INF = 1001001001;

bool checkGCD(int A, int B) {
    int cnt = 0;
    int minv = min(A, B);
    xrep(p, 2, minv+1) {
        if(A%p==0 and A%p==0 and (int)pow(A, p-1)%1==(int)pow(B, p-1)%1){
            print(p);
        } 
    }
    return cnt;
}




int main() {
    int A, B;
    cin >> A >> B;
    int ans = checkGCD(A, B);
    print(ans);


    return 0;
}