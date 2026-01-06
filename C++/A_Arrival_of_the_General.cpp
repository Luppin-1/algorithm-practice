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
    int n;
    cin >> n;
    int a[n];
    int maxx =0,minn=100;
    int indmax=0,indmin=0;
    fo(i,n){
        cin >> a[i];
        if(a[i] <= minn){
            minn = a[i];
            indmin = i;
        }
    }
    
    for(int i=n-1;i>=0;i--){
        if(a[i] >= maxx){
            maxx = a[i];
            indmax = i;
        }
    }
    if(indmax > indmin){
        cout << indmax+(n-1-indmin)-1;
    }else
    cout << indmax+(n-1-indmin);
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