#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long  tu,m;
};
void nhap(PhanSo &a){
	long long x,y;
	cin>>x>>y;
	long long i = __gcd(x,y);

	a.tu=x/i;
	a.m=y/i;
	
	
}
PhanSo tong(PhanSo p,PhanSo q){
	PhanSo t;
	long long same=(p.m*q.m)/__gcd(p.m,q.m);
	t.m=same;
	t.tu=p.tu*(same/p.m) + q.tu*(same/q.m);
	return t;
}
void in(PhanSo t){
	cout<<t.tu<<"/"<<t.m;
}
int main(){
	struct PhanSo p,q;
	nhap(p); nhap(q);
//	cout<<q.tu<<q.m;
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
