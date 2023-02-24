#include <iostream>
using namespace std;

int main() {
  int arr1[10];
  int arr2[10];

  for (int i=1; i<10; i++){
    arr1[i] = (rand()%99) + 1;
    }
  
  for (int i=1; i<10; i++){
    arr2[i] = arr1[i];
  }
  cout << "array 1:";
  for(int i=1; i<10; i++){
    arr1[9] = -7;
    cout << arr1[i] << " ";
  }
  cout << "\n"; 
  cout << "array 2:"; 
  for(int i=1; i<10; i++){
    cout << arr2[i] << " ";
  }
}
