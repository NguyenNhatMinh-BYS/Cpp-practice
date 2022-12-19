#include<iostream>
#include<cmath>
using namespace std;
int dem(int b, int p){
	if(b*b<p) return 1;
	if(p==1) return (b+1);
	//tim uoc nguyen to lon nhat cua p <=> buoc nhay
	int temp=p,jump=1;
	for(int i=2;i<=p;i++){
		while(temp%i==0){
//			cout<<"temp="<<temp<<endl;
			if((temp/i)==1){
				jump=temp;
				break;
			} 
			temp/=i;
		}
	}
//	cout<<"jump="<<jump<<endl;
	
	if(jump==2){
		int start=sqrt(p)/jump+1;
//	cout<<"start="<<start<<endl;
	//TH =1 luon dung
	int count=1;
	for(int i=start*jump;i<=b+1;i+=jump){
//		cout<<"i="<<i<<endl;
		if(i*(i-2)%p==0 ){
			count++;
//			cout<<"if: "<<count<<endl;
		}
		
	}
	return count;
	}
	else{
	//tim diem bat dau
	int start=sqrt(p)/jump+1;
//	cout<<"start="<<start<<endl;
	//TH =1 luon dung
	int count=1;
	for(int i=start*jump;i<=b+1;i+=jump){
//		cout<<"i="<<i<<endl;
		if(i*(i-2)%p==0 ){
			count++;
		}
			
		if(i*(i+2)%p==0 && i+2<=b+1 ){
			count++;
		}
	
	}
	return count;
}
}
int main(){
	int t; cin>>t;
	while(t--){
		int b,p;
		cin>>b>>p;
		
		cout<<dem(b,p)<<endl;
		
	}
}
