#include <bits/stdc++.h>
using namespace std;

    int main() {

        int n;
        cin>>n;
        vector<int>v(n);

        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }

        int ans=0;
        for (int i = 0; i < n; ++i) {
            if (v[i]==i)
                ans++;
        }
        int ok=0;

        for (int i = 0; i < n; ++i) {
            if (v[v[i]]==i and i!=v[i])
                ok=1;
        }

        if (ok) ans+=2;
        else {
            if (ans<n)
                ans+=1;
        }


        cout<<ans<<endl;
    }



