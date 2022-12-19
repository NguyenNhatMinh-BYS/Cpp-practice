#include<bits/stdc++.h>
using namespace std;
class sv{
	private:
		string name,msv,lop,e,nganh;
	public:
		friend istream &operator >>(istream &in,sv &a);
		friend ostream &operator <<(ostream &out,sv a);
		string Gmsv();
	};
	
string sv::Gmsv(){
	return this->nganh;
}
istream &operator >>(istream &in,sv &a){
	getline(in,a.msv);
	getline(in,a.name);
	getline(in,a.lop);
	getline(in,a.e);
	if(a.msv.find("DCCN")<=15 && a.msv.find("DCCN")>=0 &&a.msv[0]!='E'){
		a.nganh="Cong nghe thong tin";
	}
	else if(a.msv.find("DCKT")<=15 && a.msv.find("DCKT")>=0 ){
		a.nganh="Ke toan";
	} 
	else if(a.msv.find("DCAT")<=15&& a.msv.find("DCAT")>=0 && a.msv[0]!='E'){
		a.nganh="An toan thong tin";
		
	}
	else if(a.msv.find("DCVT")<=15 && a.msv.find("DCVT")>=0){
		a.nganh="Vien thong";
		
	}
	else if(a.msv.find("DCDT")<=15 && a.msv.find("DCDT")>=0){
		a.nganh="Dien tu";
		
	}
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
	for(int i =0 ;i<n;i++){
		cin>>a[i];
	}
	int check;
	cin>>check;
	cin.ignore();
	while(check--){
		string s;
		getline(cin,s);
		string s1=s;
		for(int i =0 ;i<s.size();i++){
			s[i]=toupper(s[i]);
		}
		cout<<"DANH SACH SINH VIEN NGANH "<<s<<":"<<endl;
		for(int i =0 ;i<n;i++){
			
			if(a[i].Gmsv()==s1){
				cout<<a[i];
			}
		}
	}
}








