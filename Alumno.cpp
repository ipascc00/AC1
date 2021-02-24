

#include "Alumno.h"


Alumno::Alumno(){
}

Alumno::Alumno(string name, string surname, string dni, vector<int> notas): Base(name, surname, dni){
   m_notas = notas;
}

int Alumno::getNumMarks() {
    return m_notas.size();
}
int Alumno::getSpecificMark(int pos) {
    return m_notas[pos];
}
void Alumno::addMark(int mark1) {
    m_notas.push_back(mark1);
}
void Alumno::addMark(int mark1, int mark2) {
    m_notas.push_back(mark1);
    m_notas.push_back(mark2);
}

void Alumno::addMark(int mark1, int mark2, int mark3){
    m_notas.push_back(mark1);
    m_notas.push_back(mark2);
    m_notas.push_back(mark3);
}

int Alumno::getAverage()
{
    if (getNumMarks() != 0) {
        int total = 0;
        for (int i = 0; i < m_notas.size(); i++) {
            total += m_notas[i];
        }
        total = total / getNumMarks();
        return total;
    }
    else {
        cout << "El vector notas esta vacio";
        return 0;
    }
}

