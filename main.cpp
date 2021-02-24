#include <iostream>
#include "Base.h"
#include "Alumno.h"
#include "Profesor.h"
using namespace std;

//permito que el codigo sea publicado y distribuido.

void calificando() {
    //declaracion de los alumnos y el Profesor
    string buscarDni = "";
    vector<int> notas;
    vector<Alumno> listaAlumnos;
    Alumno a("Joaquin", "Perez", "650032x", notas);
    Alumno b("Marcos", "Perez", "650054c", notas);
    Alumno c("Diego", "Martinez", "650048y", notas);
    Alumno d("Pablo", "Pineda", "650063t", notas);
    Alumno e("Miguel", "Gonzalez", "650087e", notas);
    Profesor profe("Marc", "Sanchez", "650099z", listaAlumnos);
    //añado los alumnos
    profe.addStudent(a);
    profe.addStudent(b);
    profe.addStudent(c);
    profe.addStudent(d);
    profe.addStudent(e);
    //pongo las notas a los alumnos
    profe.addMark(a, 3, 8, 5);
    profe.addMark(b, 7, 3);
    profe.addMark(c, 3, 3, 3);
    profe.addMark(d, 10, 10, 8);
    profe.addMark(e, 10);
    //mostramos por pantalla la lista de alumnos del profesor
    profe.printStudentsData();
    //imprimimos al mejor alumno
    profe.printBestStudent();
    bool existe = false;
    do {
        cout << "Introduzca un dni: ";
        cin >> buscarDni;
        if (buscarDni == profe.getDni()) {
            profe.printAll();
            profe.printBestStudent();
            existe = true;
        }
        else {
            if (profe.searchStudentPositionDni(buscarDni) != -1) {
                profe.printStudentPosition(profe.searchStudentPositionDni(buscarDni));
                existe = true;
            }
        }
        if (!existe) {
            cout << "dni incorrecto" << endl;
        }
    } while (!existe);
}


int main() {
    calificando();
    return 0;
}
