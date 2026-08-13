#include <bits/stdc++.h>
using namespace std;
int main(){
    string t;
    string s = "a";
 
    cin >> t;
    s+=t;
    bool h = 0,e = 0,l1 = 0,l2 = 0, o = 0;
    for(int i = s.length()-1;i>=0;i--){
        if(o == 1){
            if( l2 == 1){
                if(l1 == 1){
                    if(e == 1){
                        if(h == 1){
                            cout << "YES";
                            exit(0);            
                        }
                        else if(s[i]=='h') h = 1;
            
                    }       
                    else if(s[i]=='e') e = 1;
            
                }
                else if(s[i]=='l') l1 = 1;
            
            }
        else if(s[i]=='l') l2 = 1;
            
        }
        else if(s[i]=='o') o = 1;
    }
    cout << "NO";
    return 0;
}