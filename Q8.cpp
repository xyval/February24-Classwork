#include <iostream>
using namespace std;

int main() {
	int n[10];
	int x;
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		n[i] = rand() % 10 + 1;
	}
	for (int i = 0; i < 10; i++) {
		cout << n[i] << " ";
	}
	cout << "\nvalue to find: ";
	cin >> x; 
	bool exist = 0;
	for (int i = 0; i < 10; i++) {
		if (n[i] == x) {
			cout << x << " is in the array. \n";
			exist = 1; 
		}
	}
	if (!exist)
		cout << x << " is not in the array. \n";
}
