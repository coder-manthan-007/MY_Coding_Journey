#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    if(n==9 && m==1){
        cout << "9 " << "10"; 
    }
    else if(n-m ==0 ){
        cout << n*100+1 << " " <<  n*100+2;
    }
    else if(n-m == 1){
        cout << "-1";
 
    }
    else if(m-n == 1){
        cout << m*100-1 << " " <<  m*100; 
 
    }
    else{
        cout << "-1";
    }
    return 0;
}