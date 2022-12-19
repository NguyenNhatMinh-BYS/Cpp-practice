#include<bits/stdc++.h>
using namespace std;

int arrayMaxConsecutiveSum(vector<int> inputArray, int k)
{   int w=0;
    int max=0,sum=0;
    int n=inputArray.size();
    while(w!=n-k+1){
	sum=0;
    
    for(int i =0+w;i<k+w;i++){
        sum+=inputArray[i];
    }
    if(sum>max) max=sum;
    w++;
    }
    return max;
}
int main(){
	vector<int> a={2, 3, 5, 1, 6};
	cout<<arrayMaxConsecutiveSum( a, 2);
}
