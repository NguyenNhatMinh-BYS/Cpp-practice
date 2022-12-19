#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	int stt;
	string name,msv,date;
	float gpa;
};
string change(string s){
	for(int i=0;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
	stringstream ss(s);
	string tmp,copy="";
	while(ss>>tmp){
		tmp[0]=toupper(tmp[0]);
		copy+=tmp+" ";
	}
	return copy;
} 
void nhap(SinhVien ds[],int n){
	cin.ignore();
	for(int i =0;i<n;i++){
		ds[i].stt=i+1;
		getline(cin,ds[i].name);
		ds[i].name=change(ds[i].name);
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
void sapxep(SinhVien ds[],int n){
	for(int i =0;i<n;i++){
		for(int j =i+1 ;j<n;j++){
			if(ds[i].gpa<ds[j].gpa){
				swap(ds[i],ds[j]);
			}
		}
	}
}
void in(SinhVien ds[],int n){
	
	for(int i =0;i<n;i++){
	cout<<"B20DCCN"<<setw(3)<<setfill('0')<<ds[i].stt<<" "<<ds[i].name<<" "<<ds[i].msv<<" "<<ds[i].date<<" "<<setprecision(2)<<fixed<<ds[i].gpa<<endl;
	
		
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
