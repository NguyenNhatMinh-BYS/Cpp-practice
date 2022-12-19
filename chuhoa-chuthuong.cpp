#include <iostream>
//#include<cctype>
using namespace std;
int main(){
	int a;
	cin>>a;
	while(a--){
		char c;
		cin>>c;
		if(c>='a' && c<='z') c=toupper(c);
		else if(c>='A' && c<= 'Z') c=tolower(c);
		cout<<c<<endl;
	}
}
