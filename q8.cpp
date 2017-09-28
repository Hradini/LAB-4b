#include <iostream>
using namespace std;
int sumdigits(int num){
	if(num !=0){
		int temp= num%10;
		return temp + sumdigits(num/10);
	}
}

int main() {
	int num;
	cin >> num;
	cout << sumdigits(num);
	return 0;
}
