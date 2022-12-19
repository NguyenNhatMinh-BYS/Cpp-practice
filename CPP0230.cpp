#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][3],sum=0;
	for(int i =0 ;i<n;i++){
		int check = 0;
	for(int j =0 ;j<3;j++){
		cin>>a[i][j];
		if(a[i][j]) check++;
	}
	if(check>3/2) sum++;
	}
	cout<<sum;
	
}
