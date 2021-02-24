
#ifndef PRACTICAAC1_BASE_H
#define PRACTICAAC1_BASE_H
#include <string>
using namespace std;





class Base {
public:
    //constructor
    Base();
    Base(string name,string surname, string dni);
    string getName();
    string getSurname();
    string getDni();
private:
    string m_dni;
    string m_name;
    string m_surname;
};


#endif //PRACTICAAC1_BASE_H
