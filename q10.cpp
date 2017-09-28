#include <iostream>
using namespace std;

int fibo(int num,int n1, int n2){
	if(num!=1){
		int n3= n1+n2;
		n1=n2;
		n2=n3;
		return fibo(num-1,n1,n2);
	}
}

int main(){
	int num, n1=1, n2=1;
	cout <<"enter the number\n";
	cin >> num;
	cout << "the " << num << "th fibonacci number is " << fibo(num, n1,n2);
	return 0;
}
