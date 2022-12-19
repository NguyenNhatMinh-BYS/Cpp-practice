#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	getchar();
	while(a--){
		string c;
		cin>>c;
		int a= c.find("084");
		for(int i=0;i<c.size();i++){
			if(i!=a && i!=a+1 && i!= a+2){
				cout<<c[i];
			}
		}
			
		cout<<endl;
	}
}
