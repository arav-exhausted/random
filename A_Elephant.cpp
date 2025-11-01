#include <bits/stdc++.h>
using namespace std;

int main() {
    int start=0, end; 
    cin>> end;
    int s=end/5;
    int r=end%5;
    if(r==0) start=s;
    else start=s+1;
    cout<<start;
    return 0;
}