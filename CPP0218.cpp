#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		set<int> s ;
		vector<int> v,vk;
		for(int i =0;i<n;i++){
			cin>>a[i];
			if(a[i]>0)
			s.insert(a[i]);
			
		}
	
		 if( s.size()==1){
		cout<<0<<endl;
		}
		else if(!s.empty()){
			
		
		for( auto x : s){
			v.push_back(x);
		}
	int sp = v[v.size()-1]-v[v.size()-2];
	for(int i =1 ; i <=sp;i++){
		if(sp%i==0){
			vk.push_back(i);
		
		}
	}
//	cout<<v.end();
	int dem=0;
	
	for(int i =0 ;i<vk.size();i++){
//		cout<<vk[i]<<endl;
		int check = 0 ;
		for(int j =0 ; j<v.size()-1;j++){
			if((v[j+1]-v[j])%vk[i]!=0){
				check=1;
				break;
				
			}
		
		}
			if(check == 0 ) dem++;
	}
		cout<<dem<<endl;
	}

	}
}
