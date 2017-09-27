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
int reverse(int num, int count){
	int temp;
	if(num >0){
	temp = num %10;
	return temp + reverse(num/10, count -1)*pow(10,count);
	
	}else
	return 0;
}
int main() {
	int num;
	cout <<"enter your number\n";
	cin>> num;
	int count = digits(num);
	cout <<reverse(num,count);
	return 0;
}
