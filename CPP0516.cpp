#include<bits/stdc++.h>
using namespace std;
struct hh{
	int stt;
	string name,msv;
	float inter ;
};
int main(){
	int n;
	cin>>n;
	hh a[n];
	cin.ignore();
	for(int i =0 ;i <n;i++){
		
		a[i].stt=i+1;
		
		getline(cin,a[i].name);
		getline(cin,a[i].msv);
		float c,b;
		cin>>c>>b;
		a[i].inter=b-c;
		cin.ignore();
	}
	for(int i =0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].inter<a[j].inter){
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i].stt<<" "<<a[i].name<<" "<<a[i].msv<<" "<<setprecision(2)<<fixed<<a[i].inter<<endl;
	}
}
