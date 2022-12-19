#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long result1=0,result2=0,result=0;
		for(int i =0;i<s.length();i++){
			result1=0,result2=0;
			if(s[i]>='0'&&s[i]<='9'&&(s[i+1]<'0'||s[i+1]>'9')){
				
			
			result1=(s[i]-48);
			result+=result1;
//			cout<<"1."<<result1<<endl;
			}
			else if(s[i+1]>='0'&&s[i+1]<='9'&&s[i]>='0'&&s[i]<='9'){
			
			while(s[i]>='0'&&s[i]<='9'){
				int x = s[i]-48;
				result2=result2*10 +x;
				i++;
				
//				cout<<"2."<<result2<<endl;	
			}
			result+=result2;
//			cout<<"2."<<result<<endl;
		}
			
		}
		cout<<result<<endl;
		}
	}

