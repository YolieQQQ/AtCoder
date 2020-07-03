#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
typedef long long ll;

int ctoi(const char c){
  switch(c){
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    default : return -1;
  }
}

int targetNum = 7;
array<char,2> ops = {'+', '-'};
vector<int> nums;
int main() {
    string N;
    cin >> N;
    for(auto n: N) {
        nums.push_back(ctoi(n));
    }

    int one, two, three, four;
    int go_seven = 0;
    rep(i, ops.size()) {
        rep(j, ops.size()) {
            rep(k, ops.size()) {
                go_seven += nums[0];
                if(ops[i] == '+') {
                    go_seven += nums[1];
                }       
                else if(ops[i] == '-') {
                    go_seven -= nums[1];
                }
                if(ops[j] == '+') {
                    go_seven += nums[2];
                }       
                else if(ops[j] == '-') {
                    go_seven -= nums[2];
                }
                if(ops[k] == '+') {
                    go_seven += nums[3];
                }       
                else if(ops[k] == '-') {
                    go_seven -= nums[3];
                }

                if(go_seven == 7) {
                    cout << nums[0] << ops[i] << nums[1] << ops[j] << nums[2] << ops[k] << nums[3] << "=7" << endl;
                    return 0;
                }
                go_seven = 0;
            }
        
        } 
    }

    return 0;
}