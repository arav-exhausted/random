#include<bits/stdc++.h>
using namespace std;



//to print a gcd of two given numbers
// time complexity - vectors- 0(1), loops- 0(n)

int main(){


    // // using brute force algo
    int n1,n2;
    cout<<"Enter the first number ";
    cin>>n1;
    cout<<"Enter the second number ";
    cin>>n2;

    int gcd=1;


    // for(int i=1; i<=min(n1,n2); i++){
    //     if(n1%i==0 && n2%i ==0) gcd=i;

    // }

    // cout<<gcd<<endl;

    //using eucledian algo finding hcf/gcd

    while(n1>0 && n2>0){
        if(n1>n2) n1=n1%n2;
        else n2= n2%n1;

        if(n1==0) gcd=n2;
        if(n2==0) gcd=n1;
    }

    cout<<gcd;


}
