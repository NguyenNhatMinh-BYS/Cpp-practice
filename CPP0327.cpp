#include <bits/stdc++.h>
 using namespace std;
 
   int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); 
   
    int t; cin >> t; 
	while (t--) {
	 string s; 
	 cin >> s; 
	 long long  res = 0; 
	 long long a = 1; 
	 for (long long  i = s.size() - 1; i >= 0; --i) {
	  if (s[i] == '1') { res += a; res %= 5; } 
	  a *= 2; a %= 5; } res == 0 ? cout << "Yes" : cout << "No"; 
	  cout << endl; } }
