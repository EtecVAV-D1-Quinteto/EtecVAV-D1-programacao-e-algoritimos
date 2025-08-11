#include <iostream>
#define PI 3.14
double area(double raio){
	return PI * raio * raio;
}

int main(int argc, char** argv) {
	int num1,num2,num3,num4,num5;
	char n='s';
	while(n=='s'){
    std::cout << "Digite o raio do primeiro circulo: ";
    std::cin >> num1;
    
    std::cout << "Digite o raio do segundo circulo: ";
    std::cin >> num2;
    
    std::cout << "Digite o raio do terceiro circulo: ";
    std::cin >> num3;
    
    std::cout << "Digite o raio do quarto circulo: ";
    std::cin >> num4;
    
    std::cout << "Digite o raio do quinto circulo: ";
    std::cin >> num5;
    
    std::cout << "area do primeiro circulo: " << area(num1)<< "\n" ;
    std::cout << "area do segundo circulo: " << area(num2)<< "\n";
    std::cout << "area do terceiro circulo: " << area(num3)<< "\n" ;
    std::cout << "area do quarto circulo: " << area(num4)<< "\n" ;
    std::cout << "area do quinto circulo: " << area(num5)<< "\n" ;
    
    std::cout << "Usar novamente?(s/n)";
    std::cin >> n;
}
return 0;
}
