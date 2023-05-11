#include <iostream>

using namespace std;

int main() {
    int num_calificaciones;
    float calificacion, promedio, promedio_max = 0;

    cout << "Ingrese el numero de calificaciones: ";
    cin >> num_calificaciones;

    for(int i = 1; i <= num_calificaciones; i++) {
        cout << "Ingrese la calificacion " << i << ": ";
        cin >> calificacion;

        promedio = calificacion / i;
        if(promedio > promedio_max) {
            promedio_max = promedio;
        }
    }

    cout << "El promedio mayor es: " << promedio_max << endl;

    return 0;
}
