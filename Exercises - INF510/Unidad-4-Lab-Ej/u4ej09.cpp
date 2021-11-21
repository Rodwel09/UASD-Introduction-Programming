#include <iostream>
#include <iomanip>

using namespace std;

/*
    Programa que despliega informacion de ventas de diversos vendedores y el total de dichas ventas, usando arrays y matrices.

    Rodwel Polanco Martinez - 100500328
*/

int main(int argc, char** argv)
{
    // Declaracion de variables
    const int CANT_VENDEDORES = 3;
    const int CANT_TRIMESTRES = 4;
    int row = 0;
    int col = 0;
    double total_general = 0;

    // Declaracion de matrices y arrays
    double ventas[CANT_VENDEDORES][CANT_TRIMESTRES];
    double ventas_por_vendedor[CANT_VENDEDORES];
    double ventas_por_trimestre[CANT_TRIMESTRES];

    // Declaracion de arrays y asignacion de valores
    string trimestres[CANT_TRIMESTRES] = {"Ene-Mar",
                                          "Abr-Jun",
                                          "Jul-Sep",
                                          "Oct-Dic"};
    string vendedores[CANT_VENDEDORES] = {"Silvia",
                                          "Yeimy",
                                          "Maria"};

    // Asignacion de valores a "ventas_por_vendedor" array
    ventas_por_vendedor[0] = 0;
    ventas_por_vendedor[1] = 0;
    ventas_por_vendedor[2] = 0;

    // Asignacion de valores a "ventas_por_trimestre" array
    ventas_por_trimestre[0] = 0;
    ventas_por_trimestre[1] = 0;
    ventas_por_trimestre[2] = 0;
    ventas_por_trimestre[3] = 0;

    // Inicializando el arreglo ventas
    ventas[row][col++] = 50500;
    ventas[row][col++] = 48023;
    ventas[row][col++] = 35490;
    ventas[row][col++] = 49099;
    col = 0;
    row++;
    ventas[row][col++] = 56900;
    ventas[row][col++] = 34564;
    ventas[row][col++] = 68098;
    ventas[row][col++] = 55980;
    col = 0;
    row++;
    ventas[row][col++] = 89002;
    ventas[row][col++] = 54090;
    ventas[row][col++] = 43090;
    ventas[row][col++] = 34234;

    // obtener totales por vendedor y totales por trimestre
    for (row = 0; row < CANT_VENDEDORES; row++)
    {
        for (col = 0; col < CANT_TRIMESTRES; col++)
        {
            ventas_por_vendedor[row] += ventas[row][col];
            ventas_por_trimestre[col] += ventas[row][col];
            total_general += ventas[row][col];
        }
    }

    // Imprime los valores del array trimestre para formar la tabla
    cout << setw(10) << left << "Vendedor";
    for (col = 0; col < CANT_TRIMESTRES; col++)
        cout << setw(12) << right << trimestres[col];

    cout << setw(12) << right << "Total" << endl;

    for (int i = 0; i < (5 * 12 + 10); i++)
        cout << "-";

    cout << endl;

    for (row = 0; row < CANT_VENDEDORES; row++) // Ciclo que recorre dependiendo de la cantidad de vendedores
    {
        cout << setw(10) << left << vendedores[row];

        for (col = 0; col < CANT_TRIMESTRES; col++) // Ciclo que imprime los valores de ventas
        {
            cout << setprecision(2) << fixed;
            cout << setw(12) << right << ventas[row][col];
        }
        cout << setprecision(2) << fixed << setw(12) << right
             << ventas_por_vendedor[row]; // Imprime los valores de ventas_por_vendedor dependiendo del index del primer ciclo
        cout << endl;
    }

    cout << endl;

    cout << setw(10) << left << "Total";
    for (col = 0; col < CANT_TRIMESTRES; col++) // Imprime los valores de ventas_por_trimestre array
    {
        cout << setprecision(2) << fixed << setw(12) << right
             << ventas_por_trimestre[col];
    }

    cout << setprecision(2) << fixed << setw(12) << right
         << total_general << endl << endl; // Imprime el total general.


    return 0;
}
