#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n,x,profit=0;
        cin>>n>>x;
        for(int i=x; i<=n; i++){
            profit+=(i-x);
        }

        cout<<profit<<endl;

    }

    return 0;
}
