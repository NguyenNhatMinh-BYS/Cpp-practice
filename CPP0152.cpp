#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		int b;
		cin>>a>>b;
		int check = 0;
		for(int i =1;i<b;i++){
			if(i*a%b==1){
			cout<<i;
			cout<<endl;
			check = 1;
			break;
			}
		}
		if(check==0)
		cout<<-1<<endl;
		
	}
}
