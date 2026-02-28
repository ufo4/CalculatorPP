string oper;

cout << "Ingrese un numero: \n";
cin >> a;

cout << "Ingrese un segundo numero: \n";
cin >> b; 

cout << "Elija que Operacion desea hacer: \n" << "+ - * /";
cin >> oper;

while(oper == "+" || oper == "-" || oper == "*" || oper == "/"){

		if ( oper == "+"){  
			cout << "La suma es: " << a + b << endl;
			}		
		else if (oper == "-"){ 
			cout << "La resta es: " << a - b << endl;
			}
		else if( oper =="*" ){
			cout << "La multiplicacion es: " << a * b << endl;
			}
		else if (b == 0)
			{
			cout << "Error math: La operacion no es posible.";
			}else (oper = "/" || b == 0);{
				cout << "Divicon es: " << a / b << endl;
			}
		break;
	}

return (0);
}
