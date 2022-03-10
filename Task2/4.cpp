#include <bits/stdc++.h>
using namespace std;

    int main() {
    file();
    fast
    int t = 1;
    // cin >> t;
    while (t--) {
    int n ;
    cin>>n;
    vector<int>a(n), b(n);
        for (int i = 0; i < n; ++i) {
                cin>>a[i]>>b[i];
        }
        bool ok=1;
        int cur=max(a[0] ,b[0]);
        for (int i = 1; i < n; ++i) {
            if (min(a[i], b[i]) > cur)
                ok=0;
            else {
                if (max(a[i] , b[i])> cur)
                    cur=min(a[i] , b[i]);
                else
                    cur=max(a[i] ,b[i]);
            }
        }
        if (ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}

