//
// Created by ivanp on 20/02/2021.
//
#ifndef PRACTICAAC1_ALUMNO_H
#define PRACTICAAC1_ALUMNO_H
#include<iostream>
#include "Base.h"
#include <vector>
#include <string>
using namespace std;



class Alumno:public Base {
public:
    //constructor
    Alumno();
    Alumno(string name,string surname, string dni, vector<int> notas);
    int getNumMarks();
    int getSpecificMark(int pos);
    void addMark(int mark1);
    void addMark(int mark1, int mark2);
    void addMark(int mark1, int mark2, int mark3);
    int getAverage();

private:
    vector<int> m_notas;
};


#endif //PRACTICAAC1_ALUMNO_H
