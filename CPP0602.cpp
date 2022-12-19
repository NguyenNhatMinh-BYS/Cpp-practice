#include<bits/stdc++.h>
using namespace std;
class SinhVien {
	private:
		string name,msv,date;
		float gpa;
		
	public:
		SinhVien(){
			name="";
			msv="";
			date="";
			gpa=0;
		}
		friend ostream & operator << (ostream &out, SinhVien &a);
		friend istream & operator >> (istream &in, SinhVien &a);
		
		
};
ostream & operator << (ostream &out, SinhVien &a){
	out<<"B20DCCN001 "<<a.name<<" "<<a.msv<<" "<<a.date<<" "<<setprecision(2)<<fixed<<a.gpa;
	return out;
}
istream & operator >> (istream &in, SinhVien &a){
	getline(in,a.name);
	getline(in,a.msv);
	string s,tmp,cpy="";
	getline(cin,s);
	
	for(int i =0 ;i<s.size();i++){
		if(s[i]=='/')s[i]=' ';
	}
	stringstream ss(s);
	while(ss>>tmp){
		if(tmp.size()==1) cpy+="0"+tmp+"/";
		if(tmp.size()==4) break;
		else if(tmp.size()==2) cpy+=tmp+"/";
	}
	cpy+=tmp;
	a.date=cpy;
	
	in>>a.gpa;
	cin.ignore();
	return in;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

