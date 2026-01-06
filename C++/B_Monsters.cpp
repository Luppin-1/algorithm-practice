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
    int n,k,c=0;
    cin >> n >> k;
    int a[n];
    vector<int> v(n);
    pair<int ,int> m[n];
    fo(i,n){
        cin >> a[i];
        //v.pb(a[i]);
        m[i].first = a[i]; 
        m[i].second = i; 


    }
    sort(m,m+n);
    int save =0;
    reverse(m,m+n);
    fo(i,n){
        if(m[i].first <= k){
            save = i;
            break;
            //cerr  <<save << endl;
            
        }
        
    } 
    //cerr << save;
    int r=0;
    int l=0;
    for(int i=save;i<n;i++){
        v.pb(m[i].second);
        if(m[i].first != m[i+1].first){
            reverse(v.begin()+l,v.begin()+r);
            l=r+1;
        }
        r++;
    }
    fo(i,sz(v)){
        cerr << v[i] << " ";
    }
    for(int i=save;i>=0;i--){
        cout << m[i].second+1 << " ";
    }
    for(int i=n-1;i>save;i--){
        cout << m[i].second+1 << " ";
    }
    cerr << endl;
    //cerr << endl;
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