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
    char c;
    cin >> a >> c >> b;
    auto pal = [](const string &ans) {
        string temp = ans;
        reverse(temp.begin(), temp.end());
        return temp == ans;
    };
    int cont = 0;
    for (int i = a; i <= 24; i++) {
        for (int j = (i - a == 0 ? b : 0); j < 60; j++, cont++) {
            string ans = (i % 24 <= 9 ? "0" : "") + to_string(i % 24) + c + (j % 60 <= 9 ? "0" : "") + to_string(j % 60);
            if (pal(ans)) {
                cout << cont << edl;
                return;
            }
        }
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