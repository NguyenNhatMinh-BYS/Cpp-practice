#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name,msv,date;
	double gpa;
};
void nhap(SinhVien ds[],int n){
	cin.ignore();
	for(int i =0;i<n;i++){
		getline(cin,ds[i].name);
		getline(cin,ds[i].msv);
		getline(cin,ds[i].date);
		for(int j=0;j<ds[i].date.length();j++){
			if(ds[i].date[j]=='/') ds[i].date[j]=' ';

		}
		stringstream ss(ds[i].date);
		string tmp,copy="";
		while(ss>>tmp){
			if(tmp.length()==1) tmp="0"+tmp;
			if(tmp.length()==4) break;
			copy+=tmp+"/";
			
		}
		copy+=tmp;
		ds[i].date=copy;
		cin>>ds[i].gpa;
		cin.ignore();
	}
	
}
void in(SinhVien ds[],int n){
	for(int i =0;i<n;i++){
	
		cout<<"B20DCCN"<<right<<setw(3)<<setfill('0')<<i+1<<" "<<ds[i].name<<" "<<ds[i].msv<<" "<<ds[i].date<<" ";
		cout<<setprecision(2)<<fixed<<ds[i].gpa<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
