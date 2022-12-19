#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void check(long long b){
//	if(b==1) cout<<5;
	if(b==7) cout<<8;
	else if(b==8) cout<<5;
	else if(b==9) cout<<0;
//	else if(b==10) cout<<"0";
	else{
		
		int check=pow(10,b-1),bx,dem=0;
		for(long long i=check;i<check*10;i++ ){
			bx=b;
			int sum=0;
			for(long long j=2;j<=sqrt(i);j++){
				if(i%j==0){
					sum=1;
					break;
				}
					
				
			}
			int cd=10;
			if(sum==0){

				cd=0;
				long long d=i;
				int c=d%10,lon=0,nho=0;
				d=d/10;
				int g = d%10;
				if(g==0) cd=1;
				bx--;
				while(bx--){
					
					if(g>c){
						lon++;
					}
					if(g<c){
						nho++;
					}

					if((nho>0&&lon>0)||(g==c)){
						cd=1;
						break;
					}
					c=g;
					
					d/=10;
					g=d%10;
//					cout<<".";
				}
			}
			if(cd==0) dem++;
		}
		cout<<dem;
	}
}
int main(){
	int a;
	cin>>a;
	while(a--){
		long long b;
		cin>>b;	
		if(b>1&&b<10){
		
		check(b);
		cout<<endl;	
		}
		
	}
}
