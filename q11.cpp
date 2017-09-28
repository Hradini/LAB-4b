#include <iostream>
using namespace std;

int hcf(int n1, int n2){
	if (n1 % n2 !=0){
		int temp = n1%n2;
		n1= n2;
		n2 = temp;
		hcf(n1,n2);
	}else 
	return n2;
}
int main(){
	int n1,n2;
	cout << "enter the two numbers";
	cin >> n1 >> n2;
	int temp= max(n1,n2);
	int temp2 = min(n1, n2);
	n1 = temp;
	n2 = temp2;
	cout << "the hcf is " << hcf(n1,n2);
	return 0;
	
	
}
