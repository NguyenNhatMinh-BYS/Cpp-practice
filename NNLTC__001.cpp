#include<bits/stdc++.h>
using namespace std;
int main(){
	
	map<int,int> m ;
	vector<int> v;
	int x;
	while(cin>>x){

		if(m[x]==0) v.push_back(x);
		m[x]++;
	}
	for(auto i:v){
		cout<<i<<" "<<m[i]<<endl;
	}
	return 0;
}

