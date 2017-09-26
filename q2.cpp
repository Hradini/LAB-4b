#include <iostream>
using namespace std;

int printn(int num, int n1 =0){
	
	if (n1 != num){
		cout << n1+1;
		n1++;
		printn(num, n1);
	}else{
	return 0;
	}
	}

int main() {
	int num;
	cout << "enter the number";
	cin >> num;
	cout << "the numbers are \n";
	cout << printn(num);
	return 0;
}
