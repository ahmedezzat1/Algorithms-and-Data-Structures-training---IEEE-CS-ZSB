#include <bits/stdc++.h>
using namespace std;

    int main() {
 
        int n ,m;
        cin>>n>>m;
        vector<int>v(n);

        int ans=0;
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
            ans+=v[i];
        }
        m--;
        int l =m-1 , r=m+1;
        while (l>=0 and r<n){
            if (v[l]+v[r]==1)
                ans--;
            l-- , r++;
        }
        cout<<ans<<endl;
    }



