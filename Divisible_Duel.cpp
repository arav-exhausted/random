#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        double x,y,sumodd=0,sumeven=0;;
        cin>> x >> y ;
        for(double  i=x; i<=y;i++){
            if(i%2==0) 
                sumeven += i;
            else
                sumodd += i;
            
        }

        if(sumeven >= sumodd) 
            cout<<"YES"<<endl;
        else 
            cout<<"NO\n";
    }
}
