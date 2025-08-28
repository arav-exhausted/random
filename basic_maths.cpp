#include<bits/stdc++.h>
using namespace std;

void check_armstrongNo(int n){
     int sum=0;
    int dup = n;


  
    while(n>0){
        int ld= n%10;
        n = n/10;

    sum = sum + ld*ld*ld;


    }

   

    if(sum == dup){
        cout<<"yes";


    }
    else{ cout<<"no";
    }

    
    


}




int main(){
    int n = 8;
    

   


}

