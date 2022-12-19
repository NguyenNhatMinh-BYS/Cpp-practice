#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string name,date;
	double m1,m2,m3;
};
void nhap(ThiSinh &a){
	getline(cin,a.name);
	getline(cin,a.date);
	cin>>a.m1>>a.m2>>a.m3;
}
void in(ThiSinh a){
	cout<<a.name<<" "<<a.date<<" ";
	cout<<setprecision(1)<<fixed<<a.m1+a.m2+a.m3;
}
int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
	
}
