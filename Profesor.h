//
// Created by ivanp on 20/02/2021.
//

#ifndef PRACTICAAC1_PROFESOR_H
#define PRACTICAAC1_PROFESOR_H
#include "Alumno.h"
#include<iostream>
#include "Base.h"
#include <vector>
#include <string>
using namespace std;

class Profesor: public Base{
public:
    //constructor
    Profesor();
    Profesor(string name, string surname, string dni, vector<Alumno> listaAlumno);
    void addStudent(Alumno alumno);
    void addMark(Alumno alumno, int mark1);
    void addMark(Alumno alumno, int mark1, int mark2);
    void addMark(Alumno alumno, int mark1, int mark2, int mark3);
    int buscarAlumno(Alumno alumno);
    int  average(Alumno alumno);
    void printMarks(Alumno alumno);
    void printStudent(Alumno alumno);
    void printStudentsData();
    void printAll();
    void printBestStudent();
    int searchStudentPositionDni(string dni);
    void printStudentPosition(int pos);

private:
    vector<Alumno> m_listaAlumnos;
};


#endif //PRACTICAAC1_PROFESOR_H
