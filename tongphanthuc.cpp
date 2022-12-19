#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	long a;
	double sum=0;
	cin>>a;
	for(double i=1;i<=a;i++){
		sum+=1/i;
	}
	cout<<setprecision(4)<<fixed<<sum;
}
