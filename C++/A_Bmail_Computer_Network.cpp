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
int n;
vector<int> a[ZN];vector<int> b;
void solve()
{
   
   
    cin >> n;
    
    fo(i,n-1){
        int v;
        cin >> v;
        v--;
        a[i+1].pb(v);
        a[v].pb(i+1);
    }
    /*fo(i,n){
        cout << i << " " ;
        fo(j,a[i].size()){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }*/
    dfs(0);
    fo(i,b.size()){
        cout << b[i] << " ";
    }

}

void dfs(int v){
    if(v == n-1){
            b.pb(v);
            return dfs(v);
    }
    for(int i;i<a[v].size();i++){
        dfs(a[v][i]);
        
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