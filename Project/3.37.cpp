#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::begin;
using std::end;
using std::vector;


int main() {
	const char a[] = {'h','e','l','l','o','\0'};
	const char b[] = "world";
	const char* p = a;
	while (*p) {
		cout << *p;
		p++;
	}
	system("pause");
	return 0;
}
