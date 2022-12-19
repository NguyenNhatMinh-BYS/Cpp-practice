#include<bits/stdc++.h>
 using namespace std;
  int main(){ 
  
   int m, n; cin  >> n;
   m=n;
   int a[n][m];
   multiset<int> s;
    vector<int> a1; for(int i=0;i<m;i++){ 
	for(int j=0;j<n;j++){ 
	int b;
	cin>>b;
	s.insert(b);
	 }
	 
	  }
	  for(auto x : s) a1.push_back(x) ;
	  int hi = 0;
	  for(int i = 0 ; i<n ; i++){
	  	for(int j = 0; j<n;j++){
	  		a[i][j]=a1[hi];
	  		hi++;
		  }
	  }
//	  for(int i = 0 ; i<n ; i++){
//	  	for(int j = 0; j<n;j++){
//	  		cout<<a[i][j]<<" ";
//		  }
//		  cout<<endl;
//	  }
	for(int i = 0 ; i<n/2;i++){
		
	}
	
 }
 
 
 
 
 
 
 
 
 
