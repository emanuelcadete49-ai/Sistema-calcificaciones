#include <iostream>
 #include <string>
 #include <iomanip>
 using namespace std;
 int main()
 {
     char repetirGrupo;
     do
     {
         int cantidadEstudiantes;
         // Validación cantidad mayor a 0 (DO‑WHILE)
         do
         {
             cout << "Ingrese la cantidad de estudiantes del grupo: ";
             cin >> cantidadEstudiantes;
             if (cantidadEstudiantes <= 0)
             {
                 cout << "ERROR: La cantidad debe ser mayor a 0, intente nuevamente\n";
             }
         } while (cantidadEstudiantes <= 0);
         string nombreEstudiante, nombreMejorEstudiante;
         double nota1, nota2, nota3, promedioEstudiante;
         double sumaTotalPromediosGrupo = 0;
         double valorMayorPromedio = -1;
         int contadorReprobados = 0;
         // Bucle FOR para cada estudiante
         for (int i = 1; i <= cantidadEstudiantes; i++)
         {
             cout << "\n==== ESTUDIANTE #" << i << " ====\n";
             cout << "Nombre: ";
             cin >> nombreEstudiante;
             cout << "Nota 1: ";
             cin >> nota1;
             cout << "Nota 2: ";
             cin >> nota2;
             cout << "Nota 3: ";
             cin >> nota3;
             promedioEstudiante = (nota1 + nota2 + nota3) / 3;
             cout << "Promedio de " << nombreEstudiante << ": " << fixed << setprecision(2) << promedioEstudiante;
             if (promedioEstudiante >= 70)
             {
                 cout << " -> Aprobado\n";
             }
             else
             {
                 cout << " -> Reprobado\n";
                 contadorReprobados++;
             }
             sumaTotalPromediosGrupo = sumaTotalPromediosGrupo + promedioEstudiante;
             if (promedioEstudiante > valorMayorPromedio)
             {
                 valorMayorPromedio = promedioEstudiante;
                 nombreMejorEstudiante = nombreEstudiante;
             }
         }
         double promedioGeneralGrupo = sumaTotalPromediosGrupo / cantidadEstudiantes;
         cout << "\n\n===== RESUMEN =====\n";
         cout << "Aprobados: " << (cantidadEstudiantes - contadorReprobados) << " | Reprobados: " << contadorReprobados << "\n";
         cout << "Promedio del grupo: " << fixed << setprecision(2) << promedioGeneralGrupo << "\n";
         cout << "Mejor promedio: " << nombreMejorEstudiante << " (" << fixed << setprecision(2) << valorMayorPromedio << ")\n";
         cout << "\n¿Desea procesar otro grupo (s/n): ";
         cin >> repetirGrupo;
     } while (repetirGrupo == 's' || repetirGrupo == 'S');
     cout << "\nPrograma finalizado ✔\n";
     return 0;
 }
