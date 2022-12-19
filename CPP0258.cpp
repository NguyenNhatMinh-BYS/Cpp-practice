#include<bits/stdc++.h>
using namespace std;

struct sv{
	int stt;
	string msv,name,lop,email,dn;
};
bool cmp(sv a, sv b){
	return a.name<b.name;
}
int main(){
//	freopen("input.inp","r",stdin);
//	freopen("output.out","w",stdout);
	int n;
	cin>>n;
//	cout<<n;
	sv a[n];
	cin.ignore();
	for(int i=0;i<n;i++){
		a[i].stt=i+1;
//		cout<<a[i].stt;
		getline(cin,a[i].msv);
//		cout<<a[i].msv<<endl;
		getline(cin,a[i].name);
		getline(cin,a[i].lop);
		getline(cin,a[i].email);
		getline(cin,a[i].dn);
	}
//	cout<<n<<endl;
	int m;
	cin>>m;
	cin.ignore();
	for(int i =0 ;i<m;i++){
		sv b[n];
		int check =0;
		string s;
		getline(cin,s);
		for(int j =0 ;j<n;j++){
			if(a[j].dn==s){
				b[check]=a[j];
				check++;
			}
		}
		sort(b,b+check,cmp);
		for(int j =0 ;j<check;j++){
//			cout<<n;
			cout<<b[j].stt<<" "<<b[j].msv<<" "<<b[j].name<<" "<<b[j].lop<<" "<<b[j].email<<" "<<b[j].dn<<endl;
		}
	}
}
