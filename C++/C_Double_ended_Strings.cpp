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
    string a,b;
    cin >> a >> b;
    int n = sz(a),m = sz(b),k=0,cnt =0,save1=0 , save2 =0,maxx=0;
    if(m>=n) k=n;
    else k=m;
    fo(i,n){
        fo(j,m){
            if(a[i] == b[j]){
                int save1 = i,save2 = j;cnt =0;
                while(save1<n && save2<m && (a[save1] == b[save2])){
                    cnt++;save1++;save2++;
                }
            }
            
            maxx = max(maxx,cnt);
        }
    }
    cout << n-maxx+m-maxx <<ln;
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