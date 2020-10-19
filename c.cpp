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
    string s;
    cin >> s;
    int n = s.length();

    cout << 3 << "\n";

    cout << 'L' << " " << 2 << "\n";
    cout << 'R' << " " << 2 << "\n";
    cout << 'R' << " " << 2*n - 1 << "\n";

    return 0;
}
