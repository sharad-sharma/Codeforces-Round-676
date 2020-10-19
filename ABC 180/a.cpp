#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) begin(a), end(a)
#define deb(x) cout << #x << " = " << x << endl
#define debu(x, y) cout << "( " << #x << ", " << #y << " ) = ( " << x << ", " << y << " )" << endl
#define int long long
#define double long double

typedef long long ll;
ll mod=1000000007;

template <typename T> vector<T> readVector(int n) { vector<T> res(n); for (int i = 0 ; i < n ; i++) cin >> res[i]; return res; }

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    int man = 0, eud = 0, che = -1e9;
    for(int i=0; i<n; i++) {
        man += abs(a[i]);
        che = max(che, a[i]);
        eud += (a[i]*a[i]);
    }

    double ans = (double)eud;
    ans = (double) sqrt(ans);

    cout << man << endl;
    cout << fixed << setprecision(20) << ans << endl << che << endl;

    return 0;
}
