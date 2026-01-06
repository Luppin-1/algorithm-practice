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
    int m,c,d;
    cin >> m >> c >> d;
    int n = m*m;
    int a[n];
    fo(i,n) cin >> a[i];
    sort(a,a+n);
    //cerr << a[0];
    vector<int> v;
    fo(i,m){
        fo(j,m){
            v.pb(a[0]+(j*c)+(i*d));
        }
    }
    sort(all(v));
    bool k = 1;
    fo(i,sz(v)){
        if(a[i] != v[i]){
            k=0;
        }
        //cerr << v[i] << " ";
    }
    if(k){
        cout << "YES" << ln;
    }else{
        cout << "NO" << ln;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*------------------------------------*/
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
//check long long memory limit
//check int overflow