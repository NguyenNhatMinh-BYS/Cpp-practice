#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum=0;
		cin>>n;
		int a[n][n];
		multiset<int> s1,s2;
		for(int i = 0;i<n;i++){
			int row = 0;
			int column=0;
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				sum+=a[i][j];
				row+=a[i][j];
			
			}
			s1.insert(row);

		}
	for(int i = 0;i<n;i++){
		
			int column=0;
			for(int j=0;j<n;j++){
				column+=a[j][i];
			}
			s2.insert(column);
		}
		vector<int>v1,v2;
		for(auto x : s1){
			v1.push_back(x);
		}
		for(auto x : s2){
		v2.push_back(x);
		}
		int result=v1[v1.size()-1]>v2[v2.size()-1]?v1[v1.size()-1]:v2[v2.size()-1];
		cout<<result*n-sum<<endl;
	}
}
