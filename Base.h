//
// Created by ivan on 20/02/2021.
//

#ifndef PRACTICAAC1_BASE_H
#define PRACTICAAC1_BASE_H
#include <string>



class Base {
public:
    //constructores
    alumno(string name, string surName, int dni){ this->dni=dni; this->name=name; this->surName=surName};
    profesor(string name, string surName, int dni){this->dni=dni; this->name=name; this->surName=surName };
    string getName(){ return name};
    string getSurName(){return surName};
private:
    int dni;
    string name;
    string surName;
};


#endif //PRACTICAAC1_BASE_H
