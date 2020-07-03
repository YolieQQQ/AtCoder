#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)

vector<int> SV;
int cnt = 0;

int ctoi(const char c) {
    switch (c) {
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        default:
            return -1;
    }
}


void s(int start, int end) {
    int num = 0;
    if(start>=SV.size()) {
        return;
    }
    if(end>=SV.size()) {
        end = start;
        s(start+1, end+5);
        return;
    }
    if(end-start>=3) {
        int j=end-start;
        xrep(i, start, end+1) {
            num += SV[i] * pow(10,j);
            --j;
        }
        if(num%2019==0) {
            ++cnt;
            s(start+4, end+4);
            return;
        }
    }
    s(start, end+1);
    return;
}


int main() {
    string S;
    cin >> S;
    int ss;
    for(auto s :S) {
        ss = ctoi(s);
        SV.push_back(ss);
    }

    s(0, 4);
    cout << cnt << endl;
    return 0;
}