#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream doc;
	ofstream ghi;
	doc.open("PTIT.in ",ios::in);
	ghi.open("PTIT.in ",ios::out);
	string line;
	while(!doc.eof()){
		getline(doc,line);
		ghi<<line<<endl;
	}
	doc.close();
	ghi.close();
}
