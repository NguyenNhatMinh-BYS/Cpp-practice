#include<bits/stdc++.h>
//#include <fstream>
using namespace std;
int main(){
	ifstream doc;
	ofstream ghi;
	doc.open("PTIT.in");
	ghi.open("PTIT.out");
	string line;
	while(doc>>line){
		
		ghi<<line<<endl;
	}
	doc.close();
	ghi.close();
	return 0;
}
