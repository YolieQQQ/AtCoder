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
const int BIG = 1001001;

vector<int> SVec;


bool seen[100][100];
int memo[100][100];

int search(int start, int end, int sum) {
    print(start, end);
    if(end=SVec.size()) return sum; 
    if(seen[start][end]) return memo[start][end];
    seen[start][end] = true;
    int num = 0;
    for(int k=0; k<end-start; k++) {
        num += SVec[start+k]*pow(10, k);
    }
    sum += num;
    search(start+1, end+1, sum);
    search(start, end+1, sum);
    return memo[start][end] = num;

}




int main() {
    string S;
    cin >> S;
    int N = S.size();

    rep(i, S.size()) {
        SVec.push_back(S[i]-'0');
    }
    rep(i, N) {
        rep(j, N) {
            seen[i][j] = false;
        }
    }
    reverse(SVec.begin(), SVec.end());
    int ans = search(0, 1, 0);
    print(ans);


    return 0;
}

