#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	double a[2],b[2];
	int t;
	cin>>t;
	while(t--){
		for( int i=0 ;i<2;i++){
			cin>>a[i];
		}
		for( int i=0 ;i<2;i++){
			cin>>b[i];
		}
		cout<<setprecision(4)<<fixed<<sqrt(pow(a[0]-b[0],2)+pow(a[1]-b[1],2))<<endl;
	}
}
