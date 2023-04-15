#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

void tower(ll N, int A, int B, int C, vector<pair<int,int>>& vec) {
    if (N == 0) {
        return;
    }
    tower(N-1, A, C, B, vec);
    vec.push_back(make_pair(A, C));
    tower(N-1, B, A, C, vec);
}

int main() {
    ll N;
    cin >> N;
    vector<pair<int,int>> vec; 
    tower(N, 1, 2, 3, vec);
    cout << vec.size() << "\n";
    for (ll i = 0; i < vec.size(); i++) {
        cout << vec[i].first << " " << vec[i].second << "\n";
    }
    return 0;
}

