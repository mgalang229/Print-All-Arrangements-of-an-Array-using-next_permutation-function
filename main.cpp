#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
  //this prints all the possible arrangements of an array
  //just use 'next_permutation' function in the array
	int a[3]={1,2,3};
	sort(a, a+3);
	do {
		cout << a[0] << " " << a[1] << " " << a[2] << "\n";
	 } while(next_permutation(a, a+3));
}
