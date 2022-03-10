#include<bits/stdc++.h>
using namespace std;
int main() {
        int n;
        cin>>n;
        vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    long long  sum=0;
    sum+=abs(v[0]);
    for (int i = 1; i <n ; ++i) {
        sum+=abs(v[i]-v[i-1]);
    }
    cout<<sum;
}
