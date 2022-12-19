#include<bits/stdc++.h>
using namespace std;
int toInt(char s){
	int x =s-48;
	return x;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string x,y;
		cin>>x>>y;
		while(x.size()<y.size()){
			x="0"+x;
		}
		while(x.size()>y.size()){
			y="0"+y;
		}
		if(x[0]<y[0]) {
			swap(x,y);
		}

		int memory=0;
		string r="";
		int result=0;
		for(int i =x.size()-1 ;i >= 0;i--){
			int nX=toInt(x[i]) - memory;
			int nY=toInt(y[i]);
			memory = 0;
			 if(nX<nY){
				result=nX+10-nY;
				memory=1;

			}
			
			else{
				result=nX - nY;

			}
			r=to_string(result)+r;
			
		}
		cout<<r<<endl;
	}
}
