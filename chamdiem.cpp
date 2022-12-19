#include<iostream>
#include<iomanip>
using namespace std;
double check(char de1[]){
	char c[16];
	double sum =10;
	for( int i=0;i<15;i++){
		cin>>c[i];
	}
	for( int i=0;i<15;i++){
		if(c[i]!=de1[i]) sum-=10.00/15.00;
	}
	return sum;
}
int main(){
	char de1[]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	char de2[]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	int a,c;
	cin>>a;
	while(a--){
		cin>>c;
		if(c==101){
		cout<<setprecision(2)<<fixed<<check(de1)<<endl;
		}
		if(c==102){
			cout<<setprecision(2)<<fixed<<check(de2)<<endl;
		}
	}
	
}
