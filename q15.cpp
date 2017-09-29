#include <iostream>
using namespace std;

int findMin(int A[], int n){
    if (n == 1){
    	return A[0];
	}return min(A[n-1], findMin(A, n-1));
}

int findMax(int A[], int n){
    if (n == 1){
    	return A[0];
	}return max(A[n-1], findMin(A, n-1));
}
int main(){
	int n,i=0;
	cout << "enter the size of the array";
	cin >> n;
	int num[n];
	cout << "enter the numbers in the array";
	for(i=0;i<=n-1;i++){
		cin >> num[i];
	}
	cout << "the minimum number in the array is " <<findMin(num,n);
	cout<< "\nthe maximum number in the array is "<<findMax(num,n);
	return 0;
	}
