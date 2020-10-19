#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) begin(a), end(a)
#define deb(x) cout << #x << " = " << x << endl
#define debu(x, y) cout << "( " << #x << ", " << #y << " ) = ( " << x << ", " << y << " )" << endl
#define int long long

typedef long long ll;
ll mod=1000000007;

int power(int a, int b) {
    int ans = 1;
    while(b>0) {
        if(b&1) {
            ans = (ans*a);
        }
        a = (a*a);
        if(ans > 1e18 || a > 1e18) {
            ans = 2e18 + 5;
            return ans;
        }
        b=b>>1;
    }
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    int ans = 0;

    for(int i=0; true; i++) {
        int A = power(a, i);
        if(i > 0 && y / a <= A ) break;
        if(A*x >= y) break;
        int m = (y - x*A)/(int)b;
        if(m*b + x*A == y) m--;
        ans = max(ans, i + m);

        debu(i, m);
    }

    cout << ans << endl;

    return 0;
}
