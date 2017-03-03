#include<iostream>

int main(){
	int a,b;
	std::cout<<"please enter two integers"<<std::endl;
	std::cin>>a>>b;
	if(a<=b){
	while(a<=b){
		std::cout<<a<<std::endl;
		a++;
   } 
   }
   else {
   	while(a>=b){
   		std::cout<<a<<std::endl;
   		a--;
	   }
   }

	


	system("pause");
return -1;
}
