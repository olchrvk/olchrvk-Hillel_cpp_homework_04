#include<iostream>

using namespace std;

void func(int*& var);

int main() 
{
	int* var = nullptr;

	//test1
	func(var);
	cout << "test1: " << var << "\n";

	//test2
	func(var);
	cout << "test2: " << var << "\n";

	return 0;
}

void func(int*& var)
{
	if (var == nullptr) {
		delete var;
		var = nullptr;
	}

	var = new int(30);
}