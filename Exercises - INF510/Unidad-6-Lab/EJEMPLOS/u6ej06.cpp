#include <iostream>
#include <iomanip>
using namespace std; /******************************************************************/
/* Programa que lee un listado de ventas y determina las ventas   */
/* totales, utilizando funciones para la lectura del arreglo      */
/* y el calculo del total recibiendo los paramentros en forma de  */
/* punteros en lugar de arreglos                                  */
/******************************************************************/

// Programa que toma 4 inputs del usuario (ventas) para sacar el suma total de estos.
// Rodwel Polanco Martinez - 100500328

// Prototipo de las Funciones
void leeVentas(double *, int);
double totalVentas(double *, int);

int main()
{
	const int CANTIDAD = 4; // Declaracion de variables
	double ventas[CANTIDAD]; // Declaracion de lista fixed-size

	leeVentas(ventas, CANTIDAD); // Llamada de funcion

	cout << fixed << showpoint << setprecision(2); // Formateo de impresion

	cout << "Las ventas totales del ano son: "
	     << totalVentas(ventas, CANTIDAD) // Imprime el valor retornado de la funcion
		 << endl;

	return 0;
}

/* Funcion que lee un arreglo, recibe el arreglo como puntero     */
void leeVentas(double *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Entre las ventas para el Q" << (i + 1) << ": ";
		cin >> arr[i]; // cin << *arr++; // Introduce el valor del input a la lista
	}
}

/* Funcion que recibe un arreglo como parametro tipo puntero para */
/* retornar el total de las ventas                                */
double totalVentas(double *arr, int size)
{
	double sum = 0.0;

	for (int i = 0; i < size; i++) // Inicio del forloop
	{
		sum += *arr; // Suma los valores del puntero.
		arr++;
	} // Fin del forloop
	return sum; // Retorno del valor sum.
}
