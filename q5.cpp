#include <iostream>
using namespace std;
int sum(int lower,int upper){
	if (lower <= upper){
		return lower + sum(lower+2,upper);
		}else{
		return 0;	
		}
}
int main() {
	int l=1,u;
	cout <<"enter the lower and upper\n";
	cin >> l >> u;
	cout <<sum(l,u);
	return 0;
}
