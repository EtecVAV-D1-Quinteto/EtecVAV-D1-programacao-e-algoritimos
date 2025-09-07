#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    string linha;
    int primo,x;
    bool isprimo;
    while(true)
    {
        getline(cin,linha);
        if(linha == "0 0"||linha=="0"){
            break;
        }
        
        primo = atoi(linha.c_str());
        isprimo = true;
        
        for(int i=0; i <= primo; i++)
        {
            while(i <= primo){
            	cin >> x;
			}
            }
        }
        if(primo > 1){
            if(isprimo){
                cout<<primo;
            }
        }
    return 0;
}
