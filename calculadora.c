/*
Calculadora.c
-------------

Autores: Mois‚s Seisdedos y Samuel Seisdedos
Descripción: Es una calculadora q calcula Suma, Resta, Multiplicación,
Divis¡on y Raiz Cuadrada, todas las funciones con opción de usar decimales.

Este fichero ha sido descargado desde:
http://www.elrincondelc.com

El Rincón del C - Cusos de programación, código fuente, información
sobre compiladores, art¡culos, listas de correo para consultas,...
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>   // esta librería suena bastante mal verdad? jejeje
#include <math.h>



// PROGRAMA PRINCIPAL
int main()
    {
	double a, b, resultado;
	int Opcion;


	double Suma (double , double );
	double Multiplicacion (double , double );
	double Division (double , double );

    clrscr();
	printf("\t\tCALCULADORA\n\n");
	printf("\t 1.- Suma\n");
	printf("\t 3.- Multplicaci¢n\n");
	printf("\t 4.- Division\n");

	printf("\t\t Elija su Opción:");
	scanf("%d", &Opcion);
	switch (Opcion)
	{
	   case 1:
		   resultado = Suma (a, b);
	   break;

	   case 3:
	   	resultado = Multiplicacion (a, b);
	   break;

	   case 4:
	   	resultado = Division (a, b);
       break;

	   }

  printf("\n El resultado de la opción elegida es: %lf", resultado);
  getchar();
  getchar();
  return 0;
}




// A partir de aquí pasamos a detallar las operaciones que son llamadas
// desde el programa principal.
// Ponemos "double" en la suma porque lo que vamos a devolver es un numero
// de alta precision... podríamos poner int, pero entonces tendríamos que
// declarar otras variables para operar con la division y la raiz
// ya que por ejemplo con la división, siempre pueden aparecer numeros
// decimales, y si ponemos int, entonces tendríamos problemas porque el
// compilador dará un warning, pero si lo ejecutas y salen decimales,
// el ordenador se colgará...
double Suma (double a, double b)
{
	  double c;
     printf("\n introduzca el primer sumando:");
     scanf ("%lf", &a);
     printf("\n introduzca el segundo sumando:");
     scanf ("%lf", &b);
     c = a + b;
     return (c); //así asignamos a la variable Suma, el valor de c=a+b
}
