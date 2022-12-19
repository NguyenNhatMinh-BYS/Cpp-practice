#include<bits/stdc++.h>
using namespace std;
struct toado{
	int x,y,z;
};
void result(toado a[]){
	int X1,Y1,Z1,X2,Y2,Z2;
	X1=a[0].x-a[1].x;
	Y1=a[0].y-a[1].y;
	Z1=a[0].z-a[1].z;
	X2=a[0].x-a[2].x;
	Y2=a[0].y-a[2].y;
	Z2=a[0].z-a[2].z;
	int na=(Y1*Z2-Y2*Z1);
	int nb=(X2*Z1-X1*Z2);
	int nc=(X1*Y2-X2*Y1);
	int nd= -na*a[0].x -nb*a[0].y-nc*a[0].z;
	if(a[3].x*na+a[3].y*nb+a[3].z*nc+nd==0){
		cout<<"YES";
		
	}
	else cout<<"NO";
	cout<<endl;
	
}
int main(){
	int n;
	cin>>n;
	while(n--){
		toado a[4];
	for(int i =0 ;i<4;i++){
		cin>>a[i].x>>a[i].y>>a[i].z;
	}
	result(a);
	}
	
	
}
