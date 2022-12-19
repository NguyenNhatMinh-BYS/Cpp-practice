#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string stt,name,msv,date;
		float gpa;
	public:
		friend istream &operator >> (istream & in,SinhVien &a);
		friend ostream &operator << (ostream & out,SinhVien a);
		friend bool operator <(SinhVien a,SinhVien b);
};
int c =0 ;
bool operator <(SinhVien a,SinhVien b){
	return a.gpa>b.gpa;
}
istream &operator >> (istream & in,SinhVien &a){
	scanf("\n");
	c++;
	a.stt=to_string(c);
	while(a.stt.size()<3){
		a.stt="0"+a.stt;
	}
	string name;
	getline(cin,name);
	for(int i =0 ;i<name.size();i++){
		name[i]=tolower(name[i]);
	}
	name[0]=toupper(name[0]);
	for(int i =0;i<name.size();i++){
		if(name[i]==' ') name[i+1]=toupper(name[i+1]);
	}
	a.name=name;
	getline(in,a.msv);
	string s,tmp,cpy="";
	getline(cin,s);
	for(int i =0;i<s.size();i++) if(s[i]=='/') s[i]=' ';
	stringstream ss(s);
	while(ss>>tmp){
		if(tmp.size()==1) cpy+="0"+tmp+"/";
		else if(tmp.size()==2) cpy+=tmp+"/";
		else break;
	}
	cpy+=tmp;
//	cout<<cpy<<endl;
	a.date=cpy;
	in>>a.gpa;
	return in;
}
//int c=0;
ostream &operator << (ostream & out,SinhVien a){

	cout<<"B20DCCN"<<a.stt<<" "<<a.name<<" "<<a.msv<<" "<<a.date<<" "<<setprecision(2)<<fixed<<a.gpa<<endl;
	c++;
	return out;
}
void sapxep(SinhVien ds[],int N){
	sort(ds,ds+N);
}

int main(){
	SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds,N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
