#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        string s,t;
        cin>>s>>t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}