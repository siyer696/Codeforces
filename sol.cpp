//Sachin Iyer, VIT Pune
#include <bits/stdc++.h>
using namespace std; 
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(n) for(int i=0;i<(n);i++)
#define FOR(a,b) for(int i=(a);i<=(b);i++)
#define FORD(a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define F first;
#define S second;
#define ALL(v) v.begin(), v.end() 
#define ALLA(arr, sz) arr, arr + sz 
#define SIZE(v) (int)v.size() 
#define SORT(v) sort(ALL(v)) 
#define REVERSE(v) reverse(ALL(v)) 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
typedef long long ll;
long long e = 1000000007;
/////////////////////////////////////////////////////////////////////
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i, j, k, l, r, c, test;
    
    
    cin>>test;
    while(test--){
        cin>>r>>c;
        if(r==1 || c==1){
            cout<<"YES\n";
            continue;}
        
        if(r==2 && c==2){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
    }
    
    
	
    return 0;
}