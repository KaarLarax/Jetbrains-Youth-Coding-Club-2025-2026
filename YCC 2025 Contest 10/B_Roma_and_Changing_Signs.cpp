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
    vi arr(n);
    int negativos = 0, maxsum = 0, menor1 = INF;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 0) {
            negativos++;
        }
        maxsum += abs(arr[i]);
        menor1 = min(abs(arr[i]), menor1);
    }
    if (negativos == m) {
        cout << maxsum << edl;
    } else if (negativos < m) {
        cout << maxsum + ((m - negativos) & 1 ?  2 * -menor1 : 0) << edl;
    } else {
        maxsum = 0;
        int temp = 0;
        for (int i = 0; i < n; i++, temp++) {
            if (temp < m) {
                maxsum += abs(arr[i]);
            } else {
                maxsum += arr[i];
            }
        }
        cout << maxsum << edl;
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