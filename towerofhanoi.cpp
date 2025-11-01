#include <bits/stdc++.h>
using namespace std;

int toh(int n, int src, int help, int dest){
    if(n==1) cout<<"move disc"<<n<<"from"<<src<<"to"<<dest;
    toh(n-1,src,dest,help);
    cout<<"move disc"<<n<<"from"<<src<<"to"<<dest;
    toh(n-1, help,src,dest);
}
int main() {
   
}