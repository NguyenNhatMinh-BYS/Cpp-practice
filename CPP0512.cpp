#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
};
void process(PhanSo A,PhanSo B){
	long long x=(A.mau*B.mau)/__gcd(A.mau,B.mau);
	
	
	A.tu=(x/A.mau) *A.tu;
	
	B.tu=(x/B.mau) *B.tu;
	A.mau=x;
	B.mau=x;

	long long t=pow((A.tu+B.tu),2), m=A.mau*B.mau;
	x=__gcd(t,m);
	cout<<t/x<<"/"<<m/x<<" ";
	PhanSo C;
	C.tu=t/x,C.mau=m/x;
	long long max= C.tu*A.tu*B.tu, min=C.mau*A.mau*B.mau;
	x=__gcd(max,min);
	cout<< max/x<<"/"<<min/x<<endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

