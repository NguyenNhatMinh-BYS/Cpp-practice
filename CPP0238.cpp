#include<bits/stdc++.h>
using namespace std;
int dx[5]={-1,0,0,1,0};
int dy[5]={0,-1,1,0,0};
int visit[1001][1001];
string a[1001][1001];
int checkX =0,checkO=0,check=0;
int n,m;
void dfs(int i ,int j){
	visit[i][j]=1;
	for(int z = 0;z<5;z++){
		int x = i+dx[z];
		int y = j+dy[z];
		if(a[x][y]=="X") checkX++;
		if(a[x][y]=="O" && (x==1 || x==n||y==1||y==m)) check=1;
		else if(a[x][y]=="O"&& visit[x][y]==0 && x>1 && x <n && y>1&&y<m){
			checkO++;
			
			dfs(x,y);
		}
	}
}
void dfsX(int i,int j){
		 if(a[i][j]=="O" && i>1 && i <n && j>0&&j<m &&visit[i][j]==1){
			a[i][j]="X";
		}
	for(int z = 0;z<4;z++){
		int x = i+dx[z];
		int y = j+dy[z];
		
		 if(a[x][y]=="O" && x>1 && x <n && y>0&&y<m &&visit[x][y]==1){
			a[x][y]="X";
			
			dfsX(x,y);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		
		cin>>n>>m;
		
		checkX=0,checkO=0,check=0;
		for(int i = 1;i<= n;i++){
			for(int j =1 ;j<=m;j++){
				cin>>a[i][j];
			}
		}
		memset(visit,0,sizeof(visit));
		for(int i = 1;i<= n;i++){
			for(int j =1 ;j<=m;j++){
				if(a[i][j]=="O"&&visit[i][j]==0){

					dfs(i,j);
					if(sqrt(checkO)*4<=checkX&&check==0){

						dfsX(i,j);
					}
				}
				check=0;
			}
			
		}
		for(int i =1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
} 
