#include<bits/stdc++.h>
using namespace std;
class sv{
	private:
		string name,msv,lop,e;
	public:
		friend istream &operator >>(istream &in,sv &a);
		friend ostream &operator <<(ostream &out,sv a);
		friend bool operator < (sv a , sv b);
		void setter(string);

};
void sv::setter(string s){
	this->msv=s;
}
bool operator < (sv a, sv b){
	
	return a.msv<b.msv;

}
 istream &operator >>(istream &in,sv &a){
	cin.ignore();
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
	sv a[10001];
	
	int j =0;
	string s;
	while(cin>>s){
		
		a[j].setter(s);
		cin>>a[j];
		j++;
//		if(s=="?") break;
	}
		
	
	sort(a,a+j);
	for(int i=0;i<j;i++){
		cout<<a[i];
	}
}
