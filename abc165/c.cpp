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

int N, M, Q;
vector<vector<int>> abcd;
int max_point = -1;

void dfs(int index, int point, vector<int> array) {
    if(index==N) {
        max_point = max(max_point, point);
        return;
    }
    print(array);

    rep(i, Q) {
        try {
            if(array[abcd[i][1]]-array[abcd[i][0]]==abcd[i][2]) {
                point += abcd[i][3];
            }
        }
        catch(char *str) {
            continue;
        }
    }
    
    rep(m, M) {
        if(array[index]>0) {
            array[index] -= 1;
            dfs(index+1, point, array);
            array[index+1] -= 1;
            dfs(index+1, point, array);
        }
    }
}

int main() {
    cin >> N >> M >> Q;
    rep(i, Q) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        abcd.push_back({a, b, c, d});
    }

    vector<int> array(N, M);
    array.push_back(INF);

    dfs(0, 0, array);

    print(max_point);


    return 0;
}