#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long t,long long m){
			tu=t;
			mau=m;
		}
		friend istream &operator >> (istream&in,PhanSo&a);
		friend ostream &operator << (ostream&out,PhanSo a);
	PhanSo operator +(PhanSo another);
};
	PhanSo PhanSo::operator +(PhanSo another){
		PhanSo result(1,1);
		result.mau=(this->mau*another.mau)/__gcd(this->mau,another.mau);
		long long c =(this->mau*another.mau)/__gcd(this->mau,another.mau);
		
		result.tu= this->tu*(c/this->mau) + another.tu*(c/another.mau);
		c=__gcd(result.mau,result.tu);
		result.tu/=c;
		result.mau/=c;
		return result;
	}
	istream &operator >> (istream&in,PhanSo&a){
		in>>a.tu>>a.mau;
		int c=__gcd(a.tu,a.mau);
		a.tu/=c;
		a.mau/=c;
		return in;
	}
	ostream &operator << (ostream&out,PhanSo a){
		out<<a.tu<<"/"<<a.mau;
		return out;
	}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
