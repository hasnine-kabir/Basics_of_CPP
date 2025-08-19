#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x,found=0;
    cin >> n;

    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (r[i] == x) {
            found = 1;
            break;
        }
    }
    if (found==1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
