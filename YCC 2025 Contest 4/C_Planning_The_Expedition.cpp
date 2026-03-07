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
#define vsCode cout << flush, system("Pause")

constexpr long long LLINF = 2e18;
constexpr int INF = 2e9;
constexpr int MOD = 1e9 + 7;
constexpr int MxN = 1e3 + 5;
constexpr int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void solve() {
    int n, p;
    cin >> p >> n;
    vi arr(n), cubeta(101);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cubeta[arr[i]]++;
    }
    auto good = [&](const int &m) {
        int posibles = 0;
        for (int i = 0; i <= 100; i++) {
            if (!cubeta[i]) {
                continue;
            }
            posibles += cubeta[i] / m;
        }
        return posibles >= p;
    };
    int ans = 0, l = 1, r = 100, m;
    while (l <= r) {
        m = l + (r - l) / 2;
        if (good(m)) {
            ans = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    cout << ans << edl;
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