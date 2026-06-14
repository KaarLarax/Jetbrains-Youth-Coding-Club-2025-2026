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
    int n, m;
    cin >> n >> m;
    vi planes(m);
    for (int i = 0; i < m; i++) {
        cin >> planes[i];
    }
    vi planes2 = planes;
    sort(planes.begin(), planes.end());
    sort(planes2.rbegin(), planes2.rend());
    int mini = 0, maxi = 0, minn = n, maxn = n;
    for (int i = 0; i < m; i++) {
        while (planes[i] > 0 && minn > 0) {
            mini += planes[i]--;
            minn--;
        }
    }

    while (maxn) {
        auto maxelement = max_element(planes2.begin(), planes2.end());
        maxi += planes2[maxelement - planes2.begin()]--;
        maxn--;
    }
    cout << maxi << ' ' << mini << edl;
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