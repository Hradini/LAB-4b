#include <iostream>
using namespace std;

int factorial(int num){
	if (num >0){
	return num*factorial(num-1);
	}else 
	return 1;
	}
int main(){
	int num;
	cout <<"enter the number";
	cin >> num;
	cout << "the factorial is " <<factorial(num);
	return 0;
}
