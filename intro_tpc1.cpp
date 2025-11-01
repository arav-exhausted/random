#include<bits/stdc++.h>
using namespace std;
 
//intro to programming tpc 1

int main(){
    int n;
    cout<<"Enter the no of elements in the array"<<endl;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<"The numbers are: "<<endl;

    int count=0;


    for(int i=0; i<5; i++ ){
        if(a[i]%2 ==0){
            cout<<a[i]<<endl;
            count++;
        }
    }


    cout<<"The no of even nos are: "<<count;

}
 