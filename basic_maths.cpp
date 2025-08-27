#include<bits/stdc++.h>
using namespace std;


void reverse(int n){
   

    while(n>0){
        int lastdigit = n%10;
        n = n/10;
        cout<<lastdigit;

        
    }

}


int main(){
    int n;
    cin>> n;
    reverse(n);
    return 0;

}

