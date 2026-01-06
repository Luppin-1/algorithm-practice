#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int , int>
#define ln '\n'
#define fo(i, n) for(int i = 0 ; i < n ; ++i)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define pb(x) push_back(x)
#define mt(x , y , z) make_tuple(x , y , z)

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
const int dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
int MOD = 1e9 + 7;

const int ZN  = 1e5 + 500;
//always check input!!!

void solve()
{
    int n,m;
    cin >> n >> m;
    string s[m][2],sol[m],s2[n];

    fo(i,m){
        cin >> s[i][0] >> s[i][1];
    }
    fo(i,m){
        if(sz(s[i][0]) <= sz(s[i][1])){
            sol[i] = s[i][0];
        }else{
            sol[i] = s[i][1];
        }
    }
    fo(i,n){
        cin >> s2[i];
        fo(j,m){
            fo(k,2){
                if(s2[i] == s[j][k]){
                    cout << sol[j] << " ";
                }
            }
        }
    }

    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*------------------------------------*/
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
//check long long memory limit
//check int overflow