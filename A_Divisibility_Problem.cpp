#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    while(n--){
        int a,b,d,ans;
        cin>>a>>b;
        int count=0, div=a%b;
        if(div==0) cout<<"0\n";
        else{
            a+=1;
            div = a%b;
            count++;
        }
        cout<<<<endl;

    } 
    return 0;
}