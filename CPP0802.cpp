#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fp;
	fp.open("DATA.txt");
	string line;
	long long sum=0;
	while(fp>>line){
		int check =1;
		
		for(int i =0;i<line.length();i++){
			if(!(line[i]>='0' && line[i]<='9') || line.length()>10){
				check=0;
				
				break;
			}

		}
			if(check==1){
				  sum+=stoi(line);
			
			
			}
			
		
		
	}
	cout<<sum;
}
