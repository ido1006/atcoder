#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> c(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        cin >> c[i];
    }

    int ans = 0;
    for(int i=0;i<n;i++){
        if(v[i]-c[i] >= 0){
            ans += v[i]-c[i];
        }
    }
    cout << ans << endl;
    return 0;
}
