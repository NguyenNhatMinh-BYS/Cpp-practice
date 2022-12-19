#include<bits/stdc++.h>
using namespace std;
int m,n,a[1001][1001],visit[1001][1001];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
void dfs(int i,int j){
	visit[i][j]=1;
	for(int z =0 ;z<8;z++){
		int x=i+dx[z];
		int y=j+dy[z];
		if(x>=1 && x<=m && y>=1 && y<=n && visit[x][y]==0 && a[x][y]==1){
			dfs(x,y);
		}
	}
}
void input(){
	cin>>m>>n;
	for(int i =1 ;i<=m;i++){
		for(int j = 1 ;j<=n;j++){
			cin>>a[i][j];
		}
	}
	memset(visit,0,sizeof(visit));
	int dem=0;
	for(int i =1;i<=m;i++){
		for(int j =1;j<=n;j++){
			if(a[i][j]==1&&visit[i][j]==0){
				dfs(i,j);
				dem++;
			}
		}
	}
	cout<<dem<<endl;
}


int main(){
	int t;cin>>t;
	while(t--){
		input();
	}
}
