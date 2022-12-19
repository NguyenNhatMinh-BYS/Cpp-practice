#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fp;
	fp.open("DATA.in");
	map<int,int> m;
	string tmp;
	while(fp>>tmp){
		m[stoi(tmp)]++;
	}
	for(auto x : m ) {
		cout<<x.first<<" "<<x.second<<endl;
	}
}
