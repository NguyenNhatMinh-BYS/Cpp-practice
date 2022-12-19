#include <iostream>
using namespace std;
int main(){
	
	long a;
	cin>>a;
	getchar();
	while(a--){
		string c;
		int sum=0;
		getline(cin,c);
		for(int i=0;i<c.length();i++){
		
		if(c[i]!='8'&&c[i]!='6'&&c[i]!='0') {
			cout<<"NO\n";
			sum=1;
			break;
		}
		}
		if(sum==0)
		cout<<"YES\n";
	}
}
