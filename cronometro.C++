#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
  char tecla;
  bool run = true;

  while(run) {
    cout << "Presione Enter para empezar el cronometro o Esc para salir" << endl;
    tecla = getchar();

    if(tecla == 13) { // Si se presiona Enter
      system("cls"); // Limpiar la consola
      auto start = high_resolution_clock::now(); // Guardar el tiempo de inicio
      cout << "El cronometro ha empezado. Presione Esc para detenerlo" << endl;

      while(tecla != 27) { // Mientras no se presione Esc
        tecla = getchar();
      }

      auto stop = high_resolution_clock::now(); // Guardar el tiempo de fin
      auto duration = duration_cast<seconds>(stop - start); // Calcular la duración en segundos

      cout << "El cronometro ha sido detenido. Tiempo transcurrido: " << duration.count() << " segundos" << endl;
    } else if(tecla == 27) { // Si se presiona Esc
      run = false;
    }
  }

  return 0;
}
