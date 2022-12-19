#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main(){
	int t;
	cin>>t;
	
	
	while(t--){
		int a;
		cin>>a;
		vector<int> v;
		for(int i=0;i<a;i++){
			int c;
			cin>>c;
			if(c==0 || c==1 ) v.push_back(c);
			else{
			long long f0=0,f1=1,fn=1;
			for(long long  i = 1;i<=c;i++){
				fn=f1+f0;
				f0=f1;
				f1=fn;
				if(fn == c){
					v.push_back(c);
					break;
				}
				else if(fn>c) {
					
					break;
				}
			}	
			} 
			
		}
		for(int i =0 ; i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}
			
