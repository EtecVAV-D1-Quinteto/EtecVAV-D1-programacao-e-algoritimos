#include <iostream>

int main(int argc, char** argv) {
	int num,soma=0,i=1;
	char n='s';
	while(n == 's'){

    std::cout <<" Digite um numero: ";
    std::cin >>num;
    while(i<=num){
    	if( i%2 != 0){
    		soma += i;
		}
		i++;
	}
	std::cout <<"A soma dos impares ate " <<num<< " e "<<soma;
	std::cout <<"\nUsar Novamente(s/n)?";
	std::cin >>n;
}
	return 0;
}
