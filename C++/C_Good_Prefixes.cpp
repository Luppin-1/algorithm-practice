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
    int n,cnt=0;
    cin >> n ;
    ll a[n],maxx[n],sumx[n];
    
    fo(i,n) cin >> a[i];
    sumx[0] = a[0];maxx[0] = a[0];
    for(int i=1; i<n; i++){
        sumx[i] = a[i]+sumx[i-1];
        maxx[i] = max(a[i],maxx[i-1]);
        if(maxx[i] != 0){
            if((sumx[i]/maxx[i]) == 2 && sumx[i]%maxx[i] == 0){
                cnt++;
            }
        }
        
    }
    fo(i,n){
        if(a[i] != 0) break;
        cnt++;
    }
        


    cout << cnt << ln;

    //fo(i,n) cout << maxx[i] << " ";
    //cout <<ln;
    //fo(i,n) cout << sumx[i] << " ";
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