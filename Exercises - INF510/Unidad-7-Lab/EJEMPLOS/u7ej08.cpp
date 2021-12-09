// Este programa lee un archivo y escribe su contenido en otro
// archivo en formato HTML
// Rodwel Polanco Martinez - 100500328

#include <iostream>
#include <fstream>
using namespace std;

// Size de los fields
const int NOMBRE_SIZE = 51, DIRECCION_SIZE = 51, TELEFONO_SIZE = 14;

// Declaracion de la estructura del Info
struct Info
{
   char nombre[NOMBRE_SIZE];
   int edad;
   char direccion1[DIRECCION_SIZE];
   char direccion2[DIRECCION_SIZE];
   char telefono[TELEFONO_SIZE];
};

int main()
{
   // Declaracion de la variable
   Info personas;
   char continuar;
   fstream archivoPersonas;
   fstream htmlFile;

   // Abrir el archivo para lectura en modo binario
   archivoPersonas.open("curso.dat", ios::in | ios::binary);
   htmlFile.open("curso.html", ios::out);

   if (!archivoPersonas) // Si el archivo no esta en el directorio
   {
      cout << "Error opening file. Program aborting.\n";
      return 0;
   }


   cout << "Aqui estan los registros en el archivo:\n\n";
   archivoPersonas.read(reinterpret_cast<char *>(&personas), sizeof(personas)); // Leer el archivo

   htmlFile << "<table border=\"1\" cellpadding=\"1\">\n";
   htmlFile << "<tr>\n";
   htmlFile << "<th>Nombre</th><th>Edad</th><th>Direccion</th><th>Sector</th><th>Telefono</th>\n";
   htmlFile << "</tr>\n";

   while (!archivoPersonas.eof()) // Mientras que el archivo tenga data.
   {
      htmlFile << "<tr>\n";
	  htmlFile << "<td>" << personas.nombre << "</td>"
	           << "<td>" << personas.edad << "</td>"
			   << "<td>" << personas.direccion1 << "</td>"
			   << "<td>" << personas.direccion2 << "</td>"
			   << "<td>" << personas.telefono << "</td>\n";
	  htmlFile << "</tr>\n"; // Escribe en el archivo

      archivoPersonas.read(reinterpret_cast<char *>(&personas), sizeof(personas)); // Leer el archivo.
   }

   htmlFile << "</table>";
   archivoPersonas.close(); // Cerrar el archivo
   return 0;
}
