#include<bits/stdc++.h>
using namespace std;
class tt{
	private:
		string mdn,name;
		int member;
	public:
		friend istream &operator >>(istream &in, tt &a);
		friend ostream &operator <<(ostream &out, tt a);
		friend bool operator < (tt a, tt b);
};
 istream &operator >>(istream &in, tt &a){
 	getline(in,a.mdn);
 	getline(in,a.name);
 	in>>a.member;
 	cin.ignore();
 	return in;
 }
 bool operator < (tt a,tt b){
 	if(a.member==b.member) {
 		return a.mdn<b.mdn;
	 }
	 else return a.member >b.member;
 }
 ostream &operator << (ostream &out, tt a){
 	out<<a.mdn<<" "<<a.name<<" "<<a.member<<endl;
 	return out;
 }
int main(){
	int n;
	cin>>n;
	cin.ignore();
	tt a[n];
	for(int i =0;i <n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int j=0;j<n;j++){
		cout<<a[j];
	}
}
