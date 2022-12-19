#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long  t,m;	

};
void nhap(PhanSo &p){
	cin>>p.t>>p.m;
}
void rutgon(PhanSo &p){
	long long  gcd=__gcd(p.t,p.m);
	p.t=p.t/gcd;
	p.m=p.m/gcd;
}
void in(PhanSo p){
	cout<<p.t<<"/"<<p.m;
}
int main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
} 
