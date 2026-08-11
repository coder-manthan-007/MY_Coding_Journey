#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    
    cin >> n >> t;
    vector<int>arr(n);
    int mini = INT_MAX;
    int maxi = -1;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        mini = min(mini,arr[i]);
        maxi = max(maxi,arr[i]);
    }
    int k = t;
    int j = 0;
    while(t>0 && j<n ){
        t-= maxi - arr[j];
        j++;
    }
    mini = maxi;
    if(t>0){
        if(t%n==0){
            mini+=t/n;
        }
        else{
            mini+=t/n+1;
        }
    }
    maxi+=k;
    cout << mini << " " << maxi;
    return 0;
 
}