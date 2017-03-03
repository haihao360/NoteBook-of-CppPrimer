#include<iostream>

int main(){
	int i=0,&r=i;
	const ci=i,&cr=ci;
	auto b=ci;
	auto c=cr;
	auto d=&i;
	auto e=&ci;
	std::cout<<a<<b<<c;

    system("pause"); 
    return 0;
}
