#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main() {
  int arr1[5]={0,0,0,0,0};
  string Filename, Name;
  cout << "Name(First Last): ";
  cin >> Name;
  cout << "\n";
  cout << "Filename: ";
  cin >> Filename;

  for (int i=0; i<5; i++){
    arr1[i] = (rand()%99) + 1;
  }


  ofstream MyFile("grade");
  MyFile << "Here are your random selected grade\n";
  MyFile << "Grade 1: " << arr1[0]<<" \n" ;
  MyFile << "Grade 2: " << arr1[1]<<" \n";
  MyFile << "Grade 3: " << arr1[2]<<" \n";
  MyFile << "Grade 4: " << arr1[3]<<" \n";
  MyFile << "Grade 5: " << arr1[4]<<" \n";
  MyFile.close();

  string myText;
	ifstream MyReadFile("grade");
	while (getline(MyReadFile, myText)) {
		cout << myText<< "\n";
	}
	MyReadFile.close();

  cout << "Data saved in " << Filename;
}
