#include<bits/stdc++.h>
using namespace std;
struct SV{
	string name,date;
	long long tuoi;
};
bool cmp(SV a,SV b){
	return a.tuoi>b.tuoi;
}
int main(){
	int t;
	cin>>t;
	SV a[t];
//	cin.ignore();
	for(int i =0;i<t;i++){
		cin>>a[i].name;
		cin.ignore();
		getline(cin,a[i].date);
		for(int j = 0;j<a[i].date.size();j++){
			if(a[i].date[j]=='/') a[i].date[j]=' ';
		}
		string tmp,copy="";
		stringstream ss(a[i].date);
		while(ss>>tmp){
			copy=tmp+copy;
		}
		a[i].tuoi=stoi(copy);
	}
	sort(a,a+t,cmp);
	cout<<a[0].name<<endl;
	cout<<a[t-1].name;
}
