#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100],b[100],c[100];
//	fgets(a,200,stdin);
//	fgets(b,200,stdin);
//	fgets(a,100,stdin);
	cin.getline(a,100);
//	cin.ignore();
//	fgets(b,100,stdin);
	cin.getline(b,100);
	fgets(c,100,stdin);
//	getchar();
//	cin.getline(b,100);
	strcat(a,b);
	strcat(a,c);
	
	cout<<a;
}
