#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
 
int n,m;
int a[105];
int f[105][505];
 
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    f[0][0] = 1;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            for(int k = a[i]; k <= j; k+= a[i]){
                f[i][j] = (f[i][j] + f[i-1][j-k])%M;
            }
        }
    }
//    for (int i=0; i<=n; i++) {
//        for (int j=0; j<=m; j++) {
//            cout << f[i][j] << " ";
//        }
//        cout << endl;
//    }
    cout << f[n][m];
 
    return 0;
}