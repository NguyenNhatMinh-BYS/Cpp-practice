#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	int a,chan=0,le=0,dem=0;
	cin>>a;
	if(a%2==0){
		for(int i=pow(10,a-1);i<pow(10,a);i++){
			if(dem==10){
				cout<<endl;
				dem=0;
			}
			chan=0,le=0;
			int copy=i;
			while(copy>0){
				int c=copy%10;
				if(c%2==0){
					chan++;
				}
				else if(c%2!=0){
					le++;
				}
				copy/=10;
			}
			if(le==chan && le+chan==a){
				 cout<<i<<" ";
				 dem++;
			}
		}
	}
}
