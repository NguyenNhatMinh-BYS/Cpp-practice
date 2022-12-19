#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string name,sex,date,add,mst,dateK;
	public:
		friend istream &operator >>(istream &in,NhanVien &a) ;
		friend ostream &operator <<(ostream &out,NhanVien a);
		
};
	void norm(string &s){
		string tmp,cpy="";
		for(int i =0; i<s.size();i++){
			if(s[i]=='/') s[i]=' ';
			
		}
		stringstream ss(s);
		while(ss>>tmp){
			if(tmp.size()==1) cpy+="0"+tmp+"/";
			else if(tmp.size()==2) cpy+=tmp+"/";
			else break;
		}
		cpy+=tmp;
		s=cpy;
	}
	int check =1;
	istream &operator >>(istream &in,NhanVien &a){
		if(check==1) {
			cin.ignore();
			check=2;
		}
		getline(in,a.name);
		getline(in,a.sex);
		getline(in,a.date);
		norm(a.date);
		getline(in,a.add);
		getline(in,a.mst);
		getline(in,a.dateK);
		norm(a.dateK);
		return in;
	}
	int c=1;
	ostream &operator <<(ostream &out,NhanVien a){
		cout<<setw(5)<<setfill('0')<<c<<" "<<a.name<<" "<<a.sex<<" "<<a.date<<" "<<a.add<<" "<<a.mst<<" "<<a.dateK<<endl;
		c++;
		return out;
	}
	int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
