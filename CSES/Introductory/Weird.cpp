#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned long long N;
    cin >> N;
    vector<unsigned long long> v; // this is to store the final answer
    v.push_back(N);
    while (N > 1) {
        if (N % 2 == 0) {
            N = N / 2;
            v.push_back(N);
        }
        else {
            N = N * 3 + 1;
            v.push_back(N);
        }
    }
    for (unsigned long long i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}
