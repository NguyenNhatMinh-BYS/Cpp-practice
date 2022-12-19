#include<bits/stdc++.h>
using namespace std;
class sv{
	private:
		string name,msv,lop,e;
	public:
		friend istream &operator >>(istream &in,sv &a);
		friend ostream &operator <<(ostream &out,sv a);
		friend bool operator < (sv a , sv b);

};

bool operator < (sv a, sv b){
	if(a.lop < b.lop) return true;
	if(a.lop==b.lop) return a.msv<b.msv;
	else  return false;
}
 istream &operator >>(istream &in,sv &a){
	getline(in,a.msv);
	getline(in,a.name);
	getline(in,a.lop);
	getline(in,a.e);
	return in;
}
ostream &operator <<(ostream &out,sv a){
	cout<<a.msv<<" "<<a.name<<" "<<a.lop<<" "<<a.e<<endl;
	return out;
}
int main(){
	int n ;
	cin>>n;
	sv a[n];
	cin.ignore();
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
