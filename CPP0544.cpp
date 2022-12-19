#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
int main(){
	int t ;
	cin>>t;
	double a,b,c;
	 for(int i = 0;i<t;i++){
	 	double x1,x2,x3,y1,y2,y3;
	 	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	 	a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	 	b=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	 	c=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	 	if((a+b<=c)||(a+c<=b)||(b+c<=a)){
	 		
	 		cout<<"INVALID"<<endl;
		 } 
		else{
		 double s=	sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
			double r=(a*b*c)/(4*s);
		cout<<setprecision(3)<<fixed<<PI*pow(r,2)<<endl;


		 }
	 }
} 
