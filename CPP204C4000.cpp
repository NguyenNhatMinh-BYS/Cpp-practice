
    #include<bits/stdc++.h>
using namespace std;
 struct SinhVien {
 	string name,date,msv;
 	float score;
 	
 }; 
void  nhapThongTinSV(SinhVien &a){
	getline(cin,a.name);
	cin>>a.msv;
	cin>>a.date;
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
void inThongTinSV(SinhVien a){
	cout<<"N20DCCN001"<<"\t"<<a.name<<"\t"<<a.msv<<"\t"<<a.date<<"\t"<<setprecision(2)<<fixed<<a.score;
	
}
 int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
} 

 

