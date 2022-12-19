#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int>v1,v2,v3;
		set<int> s;
		
		int b[n];
		for(int i = 0 ;i<n;i++){
			b[i]=1;
			int a;
			cin>>a;
			v1.push_back(a);
			
		}
		for(int i = 0 ;i<m;i++){
			int a;
			cin>>a;
			if(s.find(a)==s.end()){

				s.insert(a);
				v2.push_back(a);
			}
		}

		for(int i = 0 ;i<v2.size();i++){

			for(int j = 0 ;j<n ;j++){
				if(v2[i]==v1[j]){
					v3.push_back(v2[i]);
					b[j]=0;

				}
			}
		}
	
		int check = 0 ,sx[n];
		for(int i =0 ;i <n ;i++){
			if(b[i]==1){
				sx[check]=v1[i];
				check++;
			}
		}

//		cout<<check<<endl;
		sort(sx,sx+check);
		for(int i = 0 ;i<check;i++){
			v3.push_back(sx[i]);
//		
		}
		for(auto x : v3) cout<<x<<" ";
		cout<<endl;
		}
		
	}
//1
//11 5
//2 1 2 5 7 1 9 3 6 8 8
//2 1 8 3 2
//	
