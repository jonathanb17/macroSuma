// MacroSuma.cpp: define el punto de entrada de la aplicación de consola.
//


				//***MACROS**

//Macros en c o c++ son alias que podemos incluir en nuestro codigo,el cual al momento de compilar,sera reemplazado por
//lo que ayamos definido



#include "stdafx.h"

#include<iostream> //incluimos esta libreria para las entradas y salidas
#define N(a,b) a+b // define un macro con la palabra #define,
                  // este macro tendra parametros

using namespace std;

int main()
{
	int x;
	x = N(1, 3); // al macro le pasamos valores

	cout <<"La suma es:"<< x << endl; // imprimos el valor 

	system("pause");


    return 0;
}

/*

#include<iostream>
#include "stdafx.h"
#define M(a,b,c) a+b+c   // define un macro con la palabra #define,

using namespace std;


int main()
{
int x;
x = M(1, 2, _); // al macro le paso por parametros valores

cout << "la suma es :" << x << endl; // imprimimos la suma


system("pause");

return 0;
}

// Error: no pase valor la tercer parametro....


*/