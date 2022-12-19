#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,name,lop;
	float diem1,diem2,diem3,tong;
};

void nhap(SinhVien &a){
	cin.ignore();
	getline(cin,a.msv);
	getline(cin,a.name);
	getline(cin,a.lop);
	
	cin>>a.diem1>>a.diem2>>a.diem3;
//	a.tong=(a.msv[7]-'0')*100 +(a.msv[8]-'0')*10+(a.msv[9]-'0');

}
bool cmp(SinhVien a,SinhVien b){
	return a.name<b.name;
}
void sap_xep(SinhVien a[],int n){
	sort(a,a+n,cmp);
}
void in_ds(SinhVien a[], int n){
	for(int i =0 ;i<n;i++){
		cout<<i+1<<" "<<a[i].msv<<" "<<a[i].name<<" "<<a[i].lop<<" ";
		cout<<setprecision(1)<<fixed<<a[i].diem1<<" "<<a[i].diem2<<" "<<a[i].diem3<<endl; 
	}
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
