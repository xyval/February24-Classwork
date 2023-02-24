#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main() {
	ofstream MyFile("yourname_ilovecoding.txt");
	MyFile << "Yay! Cool! OoooOOoooOOO! ";
	MyFile.close();
	string myText;
	ifstream MyReadFile("yourname_ilovecoding.txt");
	while (getline(MyReadFile, myText)) {
		cout << myText;
	}
	MyReadFile.close();
}
