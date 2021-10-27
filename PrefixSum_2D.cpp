#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int a[N][N];
long long pf[N][N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int a[n][n];
    for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
         cin>>a[i][j];
         pf[i][j]=a[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
     }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;
    }
    return 0;
}