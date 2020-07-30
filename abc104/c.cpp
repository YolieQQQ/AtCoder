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
int D, G;
vector<int> Complete;
vector<int> ProblemsNum;


int main() {
    cin >> D >> G;
    rep(i, D) {
        int p, c;
        cin >> p >> c;
        ProblemsNum.push_back(p);
        Complete.push_back(c);
    }
    auto ProblemsDefaultNum = ProblemsNum;
    int minNum = INF;
    rep(bit, 1<<D) {
        int score = 0;
        int k = 1;
        ProblemsNum = ProblemsDefaultNum;
        rep(i, D) {
            if(bit>>i&1) {
                ProblemsNum[i]--;
                if(ProblemsNum[i] == 0) {
                    score = k*100*i+Complete[k-1];
                    k++;
                }
                else if(ProblemsNum[i] > 0) {
                    score = k*100*i;
                    k++;
                }
                else {
                    break;
                }
            }
        }
        if(score>=G) {
            minNum = min(k, minNum);
        }
    }

    print(minNum);



    return 0;
}