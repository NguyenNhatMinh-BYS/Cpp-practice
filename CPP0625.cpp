#include<bits/stdc++.h>
using namespace std;
class gv{
	private:
		string name,mon,mgv;
	public:
		friend istream &operator >>(istream &in, gv &a);
		friend ostream &operator <<(ostream &out, gv a);
		friend bool operator < (gv a,gv b);
};
bool operator < (gv a,gv b){
	stringstream ss(a.name);
	stringstream ss1(b.name);
	string tmp,tmp1;
	while(ss>>tmp){
		
	}
	a.name=tmp;
	while(ss1>>tmp1){
		
	}
	b.name=tmp1;
	if(a.name==b.name) return a.mgv<b.mgv;
	else return a.name<b.name;
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
	return in;
}
ostream &operator <<(ostream &out, gv a)
{
	cout<<a.mgv<<" "<<a.name<<" "<<a.mon<<endl;
	return out;
}
int main (){
	int n;
	cin>>n;
	cin.ignore();
	gv a[n];
	for(int i=0 ;i<n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i =0;i<n;i++) cout<<a[i];
	return 0;
}
