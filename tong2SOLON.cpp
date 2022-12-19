#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m;
	cin>>n>>m;
	string s1=to_string(n);
	string s2=to_string(m);
	long long max = s1.size()>s2.size()?s1.size():s2.size();
	while(s1.size()<max) s1="0"+s1;
	while(s2.size()<max) s2="0"+s2;
	vector<int> v(max+1,0);
	for(int i=max;i>=0;i--){
		
		if(i-1>=0) v[i]+=(s1[i-1]-'0') + (s2[i-1]-'0');
		v[i-1]+=v[i]/10;
		v[i]=v[i]%10;
//		cout<<v[i]<<endl;
	}
	string result="";
	int i =0;
	while(v[i]==0) i++;
	for(int j=i;j<v.size();j++){
		result+=to_string(v[j]);
	}
	cout<<result;
}
