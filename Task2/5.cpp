#include <bits/stdc++.h>
using namespace std;
    int main() {
        int n ;
        cin>>n;
        vector<int>v(n) , frq(5500);

        deque<int>dq;


        for (int i = 0; i < n; ++i) {
            cin>>v[i];
            frq[v[i]]++;
        }

        int mx=*max_element(all(v));

        dq.push_back(mx);

        for (int i = 5000; i >0; i--) {
            if (i!=mx and frq[i]==1 )
                dq.push_back(i);

           else if (i!=mx and frq[i]>1 ){
                dq.push_back(i);
                dq.push_front(i);
            }
        }

        cout<<dq.size()<<endl;
        for (int i = 0; i <dq.size() ; ++i) {
            cout<<dq[i]<<" ";
        }
    }

}


