#include <iostream>
using namespace std;
void evenodd(int lower, int upper){
	if (lower < upper){
		cout << lower << "\n";
		evenodd(lower+2,upper);
	}
}
int main() {
	int l,u;
	cout << "enter the lower and upper limit\n";
	cin >> l>>u;
	evenodd(l,u);
	return 0;
}
