#include <iostream>
 #include <cmath>

int main(int argc, char** argv) {
	int base,exp,i,result;
	char n='s';
	while(n=='s'){
		i=0;
	std::cout << "Digite a base: ";
	std::cin >>base;
	
	std::cout <<"Digite o expoente: ";
	std::cin >>exp;
	
	result = pow(base,exp);
	
	while(i < exp){
		std::cout << base;
		if(i < exp-1){
			std::cout <<"x";
		}
		i++;
	}
	std::cout<< "=" <<result;
	
	std::cout << "\nUsar novamente?(s/n)";
	std::cin >> n;
}
	return 0;
}
