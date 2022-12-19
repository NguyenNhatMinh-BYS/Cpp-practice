#include<bits/stdc++.h>
using namespace std;
class SinhVien {
	private:
		string name,msv,date;
		float gpa;
	public:
		void nhap();
		void xuat();
		
};
void SinhVien::nhap(){
	getline(cin,this->name);
	getline(cin,this->msv);
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]=='/') s[i]=' ';
	}
	string tmp,cpy="";
	stringstream ss(s);
	while(ss>>tmp){
		if(tmp.size()==1){
			cpy+="0"+tmp+"/"; 
		}
		else if(tmp.size()==4) break;
		else if(tmp.size()==2) cpy+=tmp+"/";
	}
	cpy+=tmp;
	this->date=cpy;
	cin>>this->gpa;
	
}
void SinhVien::xuat(){
	cout<<"B20DCCN001 "<<this->name<<" "<<this->msv<<" "<<this->date<<" "<<setprecision(2)<<fixed<<this->gpa;
}
 int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
