#include<bits/stdc++.h>
using namespace std;
struct SV{
	long long gio,phut,giay,sum;
};
bool cmp(SV a,SV b){
	return a.sum<b.sum;
}
int main(){
	int t ;
	cin>>t;
	SV a[t];
	for(int i=0;i<t;i++){
		cin>>a[i].gio>>a[i].phut>>a[i].giay;
		a[i].sum=a[i].gio*60*60 + a[i].phut*60 +a[i].giay;
	}
	sort(a,a+t,cmp);
	for(int i = 0;i<t;i++){
		cout<<a[i].gio<<" "<<a[i].phut<<" "<<a[i].giay<<endl;
	}
}
