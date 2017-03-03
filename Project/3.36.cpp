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
bool compare(int *a1, int *a2, int *b1, int*b2) {
	if (a2 - a1 != b2 - b1)return false;
	else {
		while (a1 != a2) {
			if (*a1 != *b1)return false;
			a1++;
			b1++;
		}
		return true;
	}
}

int main() {
	int a[] = { 2,3,4 };
	int b[] = { 2,3,5 };
	if (compare(begin(a), end(a), begin(b), end(b)))
		cout << "equal" << endl;
	else cout << " not equal" << endl;
	int c[] = { 2,3,4 };
	int d[] = { 2,3,4 };
	if (c == d)cout << "equal" << endl;
	else cout << "not equal" << endl;


	system("pause");
	return 0;	
}
