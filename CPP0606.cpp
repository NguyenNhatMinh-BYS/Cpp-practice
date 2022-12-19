#include<bits/stdc++.h>
using namespace std;
class NhanVien {
	private:
		string name,msv,date,sex,add,mst,dateK;
	public:
		NhanVien(){
			name="";
			msv="";
			date="";
			sex="";
			add="";
			mst="";
			dateK="";
		}
		friend istream &operator >>(istream &in,NhanVien &a);
		friend ostream &operator <<(ostream &out,NhanVien &a);
	
		
		
};
	istream &operator >>(istream &in,NhanVien &a){
		getline(in,a.name);
		getline(in,a.sex);
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
	getline(in,a.add);
	getline(in,a.mst);

	string s1;
	getline(cin,s1);
	
	for(int i =0 ;i<s1.size();i++){
		if(s1[i]=='/') s1[i]=' ';
	}
	stringstream ss1(s1);
	
	string tmp1,cpy1="";
	while(ss1>>tmp1){

		if(tmp1.size()==1) cpy1+="0"+tmp1+"/";
		 if(tmp1.size()==4) break;
		else if(tmp1.size()==2) cpy1+=tmp1+"/";
		
	}
	
	cpy1+=tmp1;
	a.dateK=cpy1;
	return in;
	}
	ostream &operator<< (ostream&out, NhanVien &a){
	out<<"00001 "<<a.name<<" "<<a.sex<<" "<<a.date<<" "<<a.add<<" "<<a.mst<<" "<<a.dateK;	
	return out;
}
	
	int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
	
	
	
	
	
	
	
