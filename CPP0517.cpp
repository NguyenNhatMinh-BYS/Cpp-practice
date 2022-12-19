#include<bits/stdc++.h>
using namespace std;
struct NhanVien {
	string ten,gt,date,addr,mst,dateH;
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
	cin.ignore();
	getline(cin,a.ten);
	getline(cin,a.gt);
	getline(cin,a.date);
	string tmp = a.date;
	norm(tmp);
	a.date=tmp;
	getline(cin,a.addr);
	
	getline(cin,a.mst);
	cin>>a.dateH;
	tmp = a.dateH;
	norm(tmp);
	a.dateH=tmp;
	
}
void inds(NhanVien a[], int n){
	for(int i =0;i<n;i++)
	cout<<setfill('0') << setw(5)<<i+1<<" "<<a[i].ten<<" "<<a[i].gt<<" "<<a[i].date<<" "<<a[i].addr<<" "<<a[i].mst<<" "<<a[i].dateH<<endl;
}
int main(){
	struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
