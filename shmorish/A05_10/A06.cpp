#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N + 1), L(Q), R(Q);
    vector<int> S(N + 1); // 累積和
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 0; i < Q; i++) cin >> L[i] >> R[i];
    S[0] = 0;
    for (int i = 1; i <= N; i++) S[i] = S[i - 1] + A[i];

    for (int i = 0; i < Q; i++) {
        cout << S[R[i]] - S[L[i] - 1] << endl;
    }
    return 0;
}
