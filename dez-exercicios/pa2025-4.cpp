#include <iostream>
int somar( int a,int b){
	return a+b;
}
int subtrair( int a, int b){
	return a-b;
}
int multiplicar(int a, int b){
	return a*b;
}
int divisao(int a,int b){
	return a/b;
}
int main(int argc, char** argv) {
	int num1,num2,adc,sub,mult;
	double div;
	char n='s';
	while(n=='s'){
	std::cout << "Digite um numero: ";
	std::cin >> num1;
	
	std::cout << "Digite um numero: ";
	std::cin >> num2;
	
	adc = somar(num1,num2);
	sub = subtrair(num1,num2);
    mult = multiplicar(num1,num2);
    div = divisao(num1,num2);
    
    std::cout << "Adicao = "<<adc<<"\nSubtracao = "<<sub<<"\nMultiplicacao = "<<mult<<"\nDivisao = "<<div;
    
    std::cout << "\nUsar Novamente?(s/n)";
    std::cin >> n;
}
return 0;
}
