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
        int x, y;
        cin >> x >> y;
        vector<int> c(6);
        for(int i=0; i<6; i++) {
            cin >> c[i];
        }
        int dist = abs(x) + abs(y);
    }
    return 0;
}
