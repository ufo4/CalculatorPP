// experimentando con otra forma de hacer la calculadora. 
// puede con esta otra forma no tenga problemas con las condiciones del while y pueda que...
// permita hacer mas de una operacion. 

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	double x,y;
	int eleccion; 

	char iTilde = char(161);
	char oTilde = char(162);
	char uTilde = char(163);
		
	cout << "   ***Calculadora***\n   ";
	cout << "Ingrese el primer numero: \n"; 
	cin >> x;
	cout << "Ingrese el segundo numero: \n";
	cin >>y;

	system("cls");

	cout << "  ***Calculadora***  \n";
	cout << "x =  "<< x << "\t y = " << y << "\n";
	cout << "Escriba el n"<< uTilde <<"umero de la operaci"<<  oTilde <<"on que desea hacer \n";
	cout << "1. Suma: x + y" << endl;
	cout << "2. Resta: x - y" << endl;
	cout << "3. Multiplicac" << oTilde << "n: x * y" << endl;
	cout << "4. Divisi" << oTilde << "n decimal: x / y (Devuelve el valor en decimal)" << endl;
	cout << "5. Divisi" << oTilde << "n eucl" << iTilde << "dea: x / y (Devuelve el cociente y el residuo)" << endl;

	cout << "\n";

	cin.ignore();
	cin >> eleccion;

	system("cls");

	cout << "*** CALCULADORA *** \n" << endl;
	cout << "x = " << x << "\t y = " << y << "\n" << endl;

	if (eleccion == 1)
	{
		cout << "El resultado de la suma " << x << " + " << y << " es: " << (x+y) << "\n"; 
	}

	if (eleccion == 2)
	{
		cout << "El resultado de la resta " << x << " - " << y << " es: " << (x-y) << "\n";
	}

	if (eleccion == 3)
	{
		cout << "El resultado de la multiplicaci" << oTilde << "n " << x << " * " << y << " es: " << (x*y) << endl;
	}

	//Divicion simple
	if (eleccion == 4)
	{
		if (y == 0)
		{
			cout << "Error: El denominador no puede ser 0" << "\n";
		} 
		else 
		{
			cout << "El resultado de la divisi" << oTilde << "n " << x << " / " << y << " es: " << (float(x)/float(y)) << "\n";
		}
	}

	//Divicion euclidea 
	if (eleccion == 5)
	{
		if (y == 0)
		{
			cout << "Error: El denominador no puede ser 0" << "\n";
		}
		else 
		{
			cout << "El resultado del logar" << iTilde << "tmo base " << x << " con argumento " << y << " es: " << (log(y) / log(x)) << "\n";
		}
	}

	//Operacion raiz
	if (eleccion == 7)
	{
		if (x < 1)
		{
			cout << "Error: El " << iTilde << "no puede ser un valor menor que 1" << "\n";
		}
		else
		{
			if (y < 0)
			{
				cout << "Error: El radicando no puede ser un valor menor que 0" << "\n";
			}
			else
			{
				cout << "El resultado de la ra" << iTilde << "z con "<< iTilde << "ndice " << x << "y radicando " << y << " es: " << pow(float(y), 1.0/float(x)) << "\n";
			}
		}
	}

	cout << "\n\n";
	cout << "=============================================\n";
	cout << "||                                         ||\n";
	cout << "||       "<< char(173) <<"Gracias por usar!               ||\n";
	cout << "||                                         ||\n";
	cout << "=============================================\n";

	cout << "Para volver usar la calculadora, solo reinicie el programa.";



	return 0;
}
