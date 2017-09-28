#include <iostream>
using namespace std;

int lcmn(int n1, int n2){
	int i=n1;
	if ( i % n1 == 0 && i % n2 ==0){
		return i;
		}else 
	lcmn( n1+1,n2);
}

int main() {
	int n1, n2, i;
	cout << "enter the two numbers \n";
	cin >> n1 >> n2;
	if ( n2 > n1){
		int temp = n2;
		n2 = n1;
		n1 = temp;
	}
	cout << "lcm is "<< lcmn(n1,n2);
	return 0;
}
