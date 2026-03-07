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
constexpr int MxN = 1e6 + 5;
constexpr int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bucket[MxN];
int counting[MxN];

void solve() {
    int n;
    cin >> n;
    map<int, vector<int>> ans;
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        ans[aux].pb(i);
        maxi = max(maxi, sz(ans[aux]));
    }

    int result = INF, ansl = -1, ansr = -1;
    for (auto& i : ans) {
        if (sz(i.se) < maxi) {
            continue;
        }
        int len = i.se[sz(i.se) - 1] - i.se[0] + 1;
        if (len < result) {
            ansr = i.se[sz(i.se) - 1];
            ansl = i.se[0];
            result = len;
        }
    }
    cout << ansl + 1 << ' ' << ansr + 1<< edl;
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