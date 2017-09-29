#include <iostream>
using namespace std;
int printnum(int arr[], int n1, int n2){
	if(n1!=n2){
		cout << arr[n1] <<endl;
		printnum(arr ,n1+1,n2);
	}
}


int main(){
	int n,i=0;
	cout << "enter the size of the array";
	cin >> n;
	int num[n];
	cout << "enter the numbers in the array";
	for(i=0;i<=n;i++){
		cin >> num[i];
	}
	
	cout << "the elements of the array are\n";
	 printnum(num,0,n);
	return 0;
	

}
