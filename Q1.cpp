#include <iostream>
using namespace std;

int main() {
	int arr[1000];
	srand(time(0));
	for (int i=0; i < 1000; i++) 
		arr[i] = (rand() % 90) + 10;
	for (int i=0; i < 1000; i++)
		cout << arr[i] << "  ";
}
