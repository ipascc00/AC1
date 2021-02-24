
#include "Profesor.h"

Profesor::Profesor(){
}

Profesor::Profesor(string name, string surname, string dni, vector<Alumno> listaAlumno) : Base(name, surname, dni){
	m_listaAlumnos = listaAlumno;
}

void Profesor::addStudent(Alumno alumno){
	m_listaAlumnos.push_back(alumno);
}


int Profesor::buscarAlumno(Alumno alumno) {
	for (int i = 0; i < m_listaAlumnos.size(); i++) {
		if(alumno.getDni() == m_listaAlumnos[i].getDni()){
			return i;
		}
	}
}
void Profesor::addMark(Alumno alumno, int mark1){
	int index = buscarAlumno(alumno);
	m_listaAlumnos[index].addMark(mark1);
}

void Profesor::addMark(Alumno alumno, int mark1, int mark2){
	int index = buscarAlumno(alumno);
	m_listaAlumnos[index].addMark(mark1, mark2);
}

void Profesor::addMark(Alumno alumno, int mark1, int mark2, int mark3){
	int index = buscarAlumno(alumno);
	m_listaAlumnos[index].addMark(mark1, mark2, mark3);
}

int Profesor::average(Alumno alumno)
{
	int index = alumno.getAverage();
	return index;
}

void Profesor::printMarks(Alumno alumno){
	int index = buscarAlumno(alumno);
	for (int i = 0; i < m_listaAlumnos[index].getNumMarks(); i++) {
		cout << "Nota " << i + 1 << " = " << m_listaAlumnos[index].getSpecificMark(i) << "  ";
	}
}

void Profesor::printStudent(Alumno alumno){
	int index = buscarAlumno(alumno);
	cout << "El alumno: " << m_listaAlumnos[index].getName() << " " << m_listaAlumnos[index].getSurname() << " " << " con dni: " << m_listaAlumnos[index].getDni() << " ";
}

void Profesor::printStudentsData(){
	cout << "Lista de alumnos del profesor " << getName() << " " << getSurname() << " con dni: " << getDni() << " es la siguiente: " << endl;
	int index = m_listaAlumnos.size();
	for (int i = 0; i < index; i++) {
		printStudent(m_listaAlumnos[i]);
		cout << " con nota media: " << average(m_listaAlumnos[i]) << endl;
	}
}



void Profesor::printAll(){
	cout << "Lista de alumnos del profesor " << getName()<< " "<< getSurname()<< " con dni: "<<getDni() <<" es la siguiente: "<< endl;
	int index = m_listaAlumnos.size();
	for (int i = 0; i < index; i++) {
		printStudent(m_listaAlumnos[i]);
		printMarks(m_listaAlumnos[i]);
		cout << "y con nota media: " << average(m_listaAlumnos[i]) << endl;
	}
}

void Profesor::printBestStudent(){
	bool encontrado= false;
	int index = m_listaAlumnos.size();
	int j = 0;
	do {
		if (m_listaAlumnos[j].getNumMarks() == 3) {
			encontrado = true;
		}
		else {
			j++;
		}
	} while (encontrado == false);
	Alumno mejor = m_listaAlumnos[j];
	if (encontrado == true) {
		for (int i= 1; i < index; i++) {
			if (m_listaAlumnos[i].getNumMarks() == 3) {
				if (mejor.getAverage() < m_listaAlumnos[i].getAverage()) {
					mejor = m_listaAlumnos[i];
				}
			}
		}
		cout << "El mejor Alumno es: " << mejor.getName() <<" "<< mejor.getSurname() <<" "<< " con dni: "<<" "<<mejor.getDni()<<" "<<" y su nota media es: " << average(mejor) << endl;
	}
	else{
		cout << "No hay ningun alumno con tres notas" << endl;
	}
}

int Profesor::searchStudentPositionDni(string dni){
	for (int i = 0; i < m_listaAlumnos.size(); i++) {
		if (dni == m_listaAlumnos[i].getDni()) {
			return i;
		}
	}
	return -1;
}

void Profesor::printStudentPosition(int pos){
	printStudent(m_listaAlumnos[pos]);
	printMarks(m_listaAlumnos[pos]);
	cout << "y con nota media: " << average(m_listaAlumnos[pos]) << endl;
}






