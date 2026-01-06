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
    char x;
    cin >> n >> m;
    char a[n][m];
    fo(i,n){
        fo(j,m){
            
            if(i%2 == 1){
                a[i][j] = '.';
            }else{
                a[i][j]='#';
            }
            if(i%4 == 1){
                a[i][m-1] = '#';
            }else if(i%4 == 3){
                a[i][0] = '#';
            }
        }
    }
    fo(i,n){
        fo(j,m){
            cout << a[i][j];
        }
        cout << ln;
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