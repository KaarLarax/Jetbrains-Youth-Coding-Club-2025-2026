// #pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using ii = pair<int, int>;
using vii = vector<ii>;

#define sz(x) int(x.size())
#define fi first
#define se second
#define pb emplace_back
#define edl '\n'
#define vsCode flush(), system("Pause")

constexpr long long LLINF = 2e18;
constexpr int INF = 2e9;
constexpr int MOD = 1e9 + 7;
constexpr int MxN = 1e6 + 5;
constexpr int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void solve() {
    int n, y, x;
    cin >> n;
    vi arr(n), prefix(n + 1, 0), sufix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        prefix[i + 1] = arr[i] + prefix[i];
    }
    for (int i = n; i >= 1; i--) {
        sufix[i] = arr[i - 1] + (i == n ? 0 : sufix[i + 1]);
    }
    cin >> x >> y;
    for (int i = 1; i <= n; i++) {
        if (prefix[i - 1] >= x && prefix[i - 1] <= y && sufix[i] >= x && sufix[i] <= y) {
            cout << i << edl;
            return;
        }
    }
    cout << 0 << edl;
}

int main() {
    // freopen("text.in", "r", stdin);
    // freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(false), cin.tie(nullptr); // Fast I/O Setup
    int q = 1;
    // cin >> q;
    while (q--) {
        solve();
    }
    // vsCode;
    return 0;
}
// By KaarLarax