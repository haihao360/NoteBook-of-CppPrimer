#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;
using std::endl;


int main(){
	string a;
	getline(cin,a);
	for(char &i:a){
	i=toupper(i);
    }
	cout<<a<<endl;
    system("pause"); 
    return 0;
}
