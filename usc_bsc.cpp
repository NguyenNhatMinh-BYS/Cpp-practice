#include<iostream>
using namespace std;
long lcm(long a,long b){
	
	if(a==b) return a;
	while(a!=b){
		if(a>b){
			a-=b;
		}
		else if(b>a){
			b-=a;
		}
	}
	return a;
}
long gcd(long a,long b,long  lcm){
	return a*b/lcm;
}
int main(){
	int a;
	cin>>a;
	long c,d;
	while(a--){
		cin>>c>>d;
		long s2=lcm(c,d);
		long s1=gcd(c,d,s2);
		cout<<s1<<" "<<s2<<endl;
	}
}
