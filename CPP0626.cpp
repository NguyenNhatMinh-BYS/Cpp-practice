#include<bits/stdc++.h>
using namespace std;
class gv{
	private:
		string name,mon,mgv,nameL;
	public:
		friend istream &operator >>(istream &in, gv &a);
		friend ostream &operator <<(ostream &out, gv a);
		friend bool operator < (gv a,gv b);
		string getMon();
};
string gv::getMon(){
	
	return nameL;
}
int c=1;
istream &operator >>(istream &in, gv &a){
	int check=c;
	if(c<=9){
		a.mgv="GV0"+to_string(check);
		c++;
	}
	else if(c>9){
		a.mgv="GV"+to_string(check);
		c++;
	}
	getline(in,a.name);
	string s,tmp;
	getline(cin,s);
	stringstream ss(s);
	while(ss>>tmp){
		a.mon+=toupper(tmp[0]);
	}
	a.nameL=a.name;
	for(int i=0;i<a.nameL.length();i++) a.nameL[i]=tolower(a.nameL[i]);
	return in;
}
ostream &operator <<(ostream &out, gv a)
{
	cout<<a.mgv<<" "<<a.name<<" "<<a.mon<<endl;
	return out;
}
int main (){
//	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin>>n;
	cin.ignore();
	gv a[n];
	for(int i=0 ;i<n; i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	cin.ignore();
	while(m--){
		string s,tmp,test;
		
		getline(cin,s);
		test=s;
		for(int i =0;i<s.size();i++) s[i]=tolower(s[i]);
		stringstream ss(s);
		vector<string> v;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<test<<":"<<endl;
	for(int i =0;i<n;i++) {
		
	for(int j=0;j<v.size();j++){
		if(a[i].getMon().find(v[j])!=-1  ){
			cout<<a[i];
			break;
		}
	}
		
	}
}
	return 0;
}
