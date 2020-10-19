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
    int tt = 1;
    cin >> tt;
    while(tt--) {
        int64_t X, Y; cin >> X >> Y;
		array<int64_t, 6> C; for (auto& c : C) cin >> c;
		// Y * C1 + X * C5
		int64_t ans =
			(Y >= 0 ? C[1] * Y : C[4] * -Y)
			+ (X >= 0 ? C[5] * X : C[2] * -X);
		// (X-Y) * C5 + Y * C0
		ans = min(ans,
			((X-Y) >= 0 ? C[5] * (X-Y) : C[2] * -(X-Y))
			+ (Y >= 0 ? C[0] * Y : C[3] * -Y)
		);
		// X * C0 + (X-Y) * C4
		ans = min(ans,
			((X-Y) >= 0 ? C[4] * (X-Y) : C[1] * -(X-Y))
			+ (X >= 0 ? C[0] * X : C[3] * -X)
		);
		cout << ans << '\n';
    }
    return 0;
}
