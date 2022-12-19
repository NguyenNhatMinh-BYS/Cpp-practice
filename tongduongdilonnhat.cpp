#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
    int f[1001][1001];
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin>>a[i][j];
        
    }
    for(int i=1;i<=n;i++){
        f[0][i]=f[n+1][i]= -1e9;
        f[i][1]=a[i][1];
    }
    for(int j=2;j<=n;j++){
        for(int i=1;i<=n;i++){
            f[i][j]=max({f[i+1][j-1],f[i][j-1],f[i-1][j-1]}) + a[i][j];
        }
    }
    
    int ans= -1e9;
    for(int i=1;i<=n;i++){
        ans=max(ans,f[i][n]);
    }
    cout<<ans;
}
