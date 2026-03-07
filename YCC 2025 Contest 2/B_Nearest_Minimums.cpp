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
    int n;
    cin >> n;
    vii arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].fi;
        arr[i].se = i;
    }
    sort(arr.begin(), arr.end(), [](const ii& a, const ii& b) {
        if (a.fi == b.fi) {
            return a.se < b.se;
        }
        return a.fi < b.fi;
    });
    int temp = arr[0].fi;
    ii aux = arr[0];
    int i = 1;
    int ans = INF;
    while (temp == arr[i].fi && i < n) {
        ans = min(ans, arr[i].se - aux.se);
        aux = arr[i];
        i++;
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