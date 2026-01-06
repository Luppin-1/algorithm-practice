#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c1=0,c2=0;
    cin >> n;
    string s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<s[i].size();j++){
            if(s[i][j] == '+'){
                c1++;
            }else if(s[i][j] == '-'){
                c2++;
            }
        }
    }
    cout << (c1-c2)/2;
    return 0;
}

