#include<bits/stdc++.h>
using namespace std;
 struct SinhVien {
 	string name,date,msv;
 	float score;
 	
 }; 
void nhap(SinhVien &a){
	getline(cin,a.name);
	getline(cin,a.msv);
	getline(cin,a.date);
	for(int i =0;i<a.date.length();i++){
		if(a.date[i]=='/') a.date[i]=' ';
	}
	stringstream ss(a.date);
	string tmp,copy;
	while(ss>>tmp){
		if(tmp.length()==1) tmp = "0"+tmp;
		else if(tmp.length()==4) break;
		copy+=tmp+"/";
	}
	copy+=tmp;
	a.date= copy; 
	cin>>a.score;
}
void in(SinhVien a){
	cout<<"B20DCCN001"<<" "<<a.name<<" ";
	cout<<a.msv<<" ";
	cout<<a.date<<" ";
	cout<<setprecision(2)<<fixed<<a.score; 
}
 int main (){
 	struct SinhVien a;
 	nhap(a);
 	in(a);
 	return 0;
 } 
