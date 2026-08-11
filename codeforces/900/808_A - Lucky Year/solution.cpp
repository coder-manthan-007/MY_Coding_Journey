#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    int cnt = 0;
    int last = 0;
    long long n = t;
    while(n>0){
        last = n%10;
        cnt++;
        n/=10;
    }
    n = (last+1)*(pow(10,cnt-1));
    cout << n - t;
    return 0;
}