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
const int INF = 100100100;

vector<vector<int>> A(3);

bool bingo(vector<int> B) {
    int cnt1 = 0;
    for(int b: B) {
        rep(y, 3) {
            rep(x, 3) {
                if(A[y][x]==b) {
                    ++cnt1;
                }
            }
        }
    }
    if(cnt1==3) return true;
    int cnt2 = 0;
    for(int b: B) {
        rep(y, 3) {
            rep(x, 3) {
                if(A[x][y]==b) {
                    ++cnt2;
                }
            }
        }
    }
    if(cnt2==3) return true;
    int cnt3 = 0;
    for(int b: B) {
        rep(i, 3) {
            if(b==A[i][i]) ++cnt3;
        }
    }
    if(cnt3==3) {
        return true;
    }

    int cnt4 = 0;
    for(int b: B) {
        rep(i, 3) {
            if(b==A[2-i][i]) ++cnt4;
        }
    }
    if(cnt4==3) {
        return true;
    }
    return false; 
}

int main() {
    vector<int> row(3);
    rep(i, 3) {
        rep(j, 3) {
            cin >> row[j];
        }
        A[i] = row;
    }
    int N;
    cin >> N;
    vector<int> B(N);
    rep(i, N) {
        cin >> B[i];
    }

    bool flag = bingo(B);

    if(flag) {
        print("Yes");
    }
    else {
        print("No");
    }



    return 0;
}