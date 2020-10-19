#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) begin(a), end(a)
#define deb(x) cout << #x << " = " << x << endl
#define debu(x, y) cout << "( " << #x << ", " << #y << " ) = ( " << x << ", " << y << " )" << endl

typedef long long ll;
ll mod=1000000007;

template <typename T> vector<T> readVector(int n) { vector<T> res(n); for (int i = 0 ; i < n ; i++) cin >> res[i]; return res; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt = 1;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        vector<string> s(n);
        for(int i=0; i<n; i++) {
            cin >> s[i];
        }

        vector<pair<int, int>> ans;

        if(s[0][1] == s[1][0]) {
            if(s[n-1][n-2] == s[0][1]) {
                ans.pb({n, n-1});
            }
            if(s[n-2][n-1] == s[0][1]) {
                ans.pb({n-1, n});
            }
        } else if(s[n-1][n-2] == s[n-2][n-1]) {
            if(s[n-1][n-2] == s[0][1]) {
                ans.pb({1, 2});
            }
            if(s[n-2][n-1] == s[1][0]) {
                ans.pb({2, 1});
            }
        } else {
            ans.pb({2, 1});
            if(s[n-1][n-2] == s[0][1]) {
                ans.pb({n, n-1});
            }
            if(s[n-2][n-1] == s[0][1]) {
                ans.pb({n-1, n});
            }
        }

        cout << ans.size() << "\n";
        for(int i=0; i<ans.size(); i++) {
            cout << ans[i].first << " " << ans[i].second << "\n";
        }

    }
    return 0;
}
