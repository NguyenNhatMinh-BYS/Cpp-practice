#include<bits/stdc++.h>
using namespace std;
int visit[1001];
	
int a[1001];
void Back_Track(int n,int k){
	for(int i=1;i<=n;i++){
		if(visit[i]){
			a[k]=i;
			visit[i]=0;
			if(n==k) {
				for(int j=1;j<=k;j++) cout<<a[j]<<" ";
				cout<<endl;			}
			else Back_Track(n,k+1);
			visit[i]=1;
		}
	}
	
	
// 1 2 3
// 1 3 2	
		
}



int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) visit[i]=1;
	Back_Track(n,1);
	
}
