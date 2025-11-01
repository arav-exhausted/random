#include<bits/stdc++.h>
using namespace std;

int main(){

    string a;
    cin>>a;

    int count=0;
    for(char c : a){
        if(c=='1') count++;
    }

    cout<<count;

}