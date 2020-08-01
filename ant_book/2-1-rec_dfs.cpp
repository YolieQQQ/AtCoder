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

int D, target;
vector<int> ProblemsNum;
vector<int> CompleteBonus;
vector<int> Problems;

int minv = INF;

void dfs(int p, int nowScore, int solveProblems, vector<int> eachSolveNum) {
    // print(eachSolveNum);
    // print(nowScore, solveProblems);
    if(eachSolveNum[p]==ProblemsNum[p]) {
        nowScore += CompleteBonus[p];
    }
    if(solveProblems>=minv) {
        return;
    }
    if(nowScore>=target) {
        minv = min(minv, solveProblems);
        return;
    }
    
    
    eachSolveNum[p]++;
    for(auto prb: Problems) {
        dfs(prb, nowScore+100*(p+1), solveProblems+1, eachSolveNum);
    }
}


int main() {
    cin >> D >> target;
    vector<int> eachSolveNum;
    rep(i, D) {
        int p, c;
        cin >> p >> c;
        ProblemsNum.push_back(p);
        CompleteBonus.push_back(c);
        eachSolveNum.push_back(0);
        Problems.push_back(i);
    }
    dfs(0, 0, 0, eachSolveNum);
    print(minv);
    return 0;
}