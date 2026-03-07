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
    string str;
    cin >> str;
    int l = 0;
    map<char, int> counting;
    int ans = 0;
    int ans1 = -1, ans2 = -1;
    bool band = false;
    for (int r = 0; r < sz(str); r++) {
        counting[str[r]]++;
        while (counting['a']) {
            counting[str[l]]--;
            l++;
        }
        if (!counting['a'] && ans < r - l + 1) {
            if (band && l != ans1) {
                break;
            }
            if (!band) {
                band = true;
            }
            ans = r - l + 1;
            ans1 = l;
            ans2 = r;
        }
    }
    if (ans2 == -1) {
        str[sz(str) - 1] = 'z';
        cout << str << edl;
        return;
    }
    char letra = *min_element(str.begin() + ans1, str.begin() + ans2 + 1);
    for (int i = ans1; i <= ans2; i++) {
        str[i]--;
    }
    cout << str << edl;
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