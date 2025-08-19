#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;   // n people, k flips
    ll sum = 0;  

    cin >> n >> k;

    vector<long long> arr(n), brr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> brr[i];

    vector<ll> t,a;

    for (int i = 0; i < n; i++){
        if (brr[i]==1){
            sum += arr[i];
            a.push_back(arr[i]);
        }
        else {
            t.push_back(arr[i]);
        }
    }

    sort(t.rbegin(), t.rend());

    if(k <= t.size()){
        for (int i = 0; i < k; i++) {
            sum += t[i];
        }
        cout << sum << endl;
    }
    else {
        for (int i = 0; i < t.size(); i++) {
            sum += t[i];
        }

        ll remains = k - t.size();

        vector<ll> all_awake = a;
        all_awake.insert(all_awake.end(), t.begin(), t.end());

        if(remains % 2 == 0){
            cout << sum << endl;
        }
        else{
            ll min = *min_element(all_awake.begin(), all_awake.end());
            cout << sum - min << endl;
        }
    }
    return 0;

}
