#include<bits/stdc++.h>
using namespace std;
struct NhanVien {
	string ma,ten,gt,date,addr,mst,dateH;
};
void norm(string &a){
	for(int i = 0 ;i<a.size();i++){
		if(a[i]=='/') a[i]=' ';
	}
	stringstream ss(a);
	string tmp,copy="";
	while(ss>>tmp){
		if(tmp.size()==1) tmp= "0" + tmp;
		else if(tmp.size()==4) break;
		copy+=tmp+"/";
	}
	copy+=tmp;
	a=copy;
}
void nhap(NhanVien &a){
	getline(cin,a.ten);
	getline(cin,a.gt);
	getline(cin,a.date);
	string tmp = a.date;
	norm(tmp);
	a.date=tmp;
	getline(cin,a.addr);
	
	getline(cin,a.mst);
	getline(cin,a.dateH);
	tmp = a.dateH;
	norm(tmp);
	a.dateH=tmp;
}
void in(NhanVien a){
	cout<<"00001"<<" "<<a.ten<<" "<<a.gt<<" "<<a.date<<" "<<a.addr<<" "<<a.mst<<" "<<a.dateH;
}
int main(){
	struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
