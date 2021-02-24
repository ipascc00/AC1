//
// Created by ivanp on 20/02/2021.
//

#include "Base.h"

Base::Base()
{
    m_name = "";
    m_surname = "";
    m_dni = "";
}

Base::Base(string name, string surname, string dni) {
    m_name = name;
    m_surname= surname;
    m_dni = dni;
}
string Base::getSurname() {
    return m_surname;
}
string Base::getDni(){
    return m_dni;
}
string Base::getName() {
    return m_name;
}