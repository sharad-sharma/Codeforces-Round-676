#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) begin(a), end(a)
#define deb(x) cout << #x << " = " << x << endl
#define debu(x, y) cout << "( " << #x << ", " << #y << " ) = ( " << x << ", " << y << " )" << endl
#define int long long

typedef long long ll;
ll mod=1000000007;

template <typename T> vector<T> readVector(int n) { vector<T> res(n); for (int i = 0 ; i < n ; i++) cin >> res[i]; return res; }

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    /// need to find factors of n

    vector<int> ans;

    for(int i=1; i*i <= n; i++) {
        if(n%i == 0) {
            ans.pb(i);
            if(i != n/i)
                ans.pb(n/i);
        }
    }
    sort(all(ans));

    for(auto u: ans) {
        cout << u << "\n";
    }

    return 0;
}
