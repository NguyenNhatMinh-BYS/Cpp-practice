#include<bits/stdc++.h>
using namespace std;

int n;
int a[1001],visited[1001];
void in(){
	for(int i =1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void Try(int k){
	for(int i=1;i<=n;i++){
		if(visited[i]){
			a[k]=i;
			visited[i]=0;
			if(n==k) in();
			else Try(k+1);
			visited[i]=1;
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) visited[i]=1;
	Try(1);
}
