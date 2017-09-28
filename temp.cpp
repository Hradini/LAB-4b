#include <iostream>
#include <cmath>
using namespace std;
int digits(int num){
	int sum =0;
	while(num!=0){
	sum++;
	num /= 10;
	}
	return sum;
}
int reverse(int num){
	int count = digits(num);
	int temp =0;
	if(num >0){
	temp = num %10;
	return (temp + reverse(num/10))*pow(10,count);
	count--;
	}else
	return 0;
}
int main() {
	int num;
	cout <<"enter your number\n";
	cin>> num;
	cout <<reverse(num);
	return 0;
}
