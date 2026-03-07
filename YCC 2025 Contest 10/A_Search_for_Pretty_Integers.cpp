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
    int a, b;
    cin >> a >> b;
    vi arr(a), arr1(b);
    for (auto& i : arr) {
        cin >> i;
    }
    for (auto& i : arr1) {
        cin >> i;
    }
    sort(arr.begin(), arr.end());
    sort(arr1.begin(), arr1.end());
    int ans = 0;
    bool band = 0;
    for (auto& i : arr) {
        for (auto& j : arr1) {
            if (i == j) {
                ans = i;
                band = true;
                break;
            }
            if (band) {
                break;
            }
        }
    }
    if (ans) {
        cout << ans << edl;
    } else {
        cout << min(arr[0], arr1[0]) << max(arr[0], arr1[0]) << edl;
    }
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