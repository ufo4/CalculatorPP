#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>

using namespace std;


/*float potencia(float base, int exponente){
	float resultado = 1;
	int i;
	for (i = 0; i < exponente; ++i)
	{
		resultado *= base;
	}
	return resultado;
}*/


int main(){
	double a, b, resultado; 
	string oper; 
	bool valido = true;
	
	cout << "Ingrese un numero: \n";
	cin >> a;

	cout << "Ingrese un segundo numero: \n";
	cin >> b; 

	cout << "Elija que Operacion desea hacer: \n" << "+ - * / \n";
	cin >> oper;


while(oper == "+" || oper == "-" || oper == "*" || oper == "/")
{
	if ( oper == "+"){  
			resultado = a + b;
			}		
	else if (oper == "-"){ 
			resultado = a - b;
			}
	else if( oper =="*" ){
			resultado = a * b;
			}
	else if (b == 0)
			{
			cout << "Error math: La operacion no es posible.\n";
			}else{
				resultado = a / b;
			}
			valido = false;
		break;

}


if (valido)
{
	printf("El resultado es %f\n", resultado);
}
else
{
	printf("Operacion invalida\n");
}
return(0);
}


