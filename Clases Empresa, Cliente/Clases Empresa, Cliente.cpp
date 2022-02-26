#include <iostream>
#include <string>
using namespace std;

class Empresa { // Clase Empresa
private:
    int numeroEmpresa;
    char* nombre;
public:
    Empresa();
    void setNumeroEmpresa(int);
    void setNombre(char const*);
    int getNumeroEmpresa();
    char* getNombre();
};

Empresa::Empresa() {
    setNumeroEmpresa(0);
    nombre = new char[20];
    setNombre(" ");
}

void Empresa::setNumeroEmpresa(int numeroEmpresa) {
    this->numeroEmpresa = numeroEmpresa;
}

void Empresa::setNombre(char const* nombre) {
    strcpy(this->nombre, nombre);
}

int Empresa::getNumeroEmpresa() {
    return this->numeroEmpresa;
}

char* Empresa::getNombre() {
    return this->nombre;
}


class Cliente { // Clase CLiente
private:
    int numeroCliente;
    char* nombre;
    char* direccion;
public:
    Cliente();
    void setNumeroCliente(int);
    void setNombre(char const*);
    void setDireccion(char const*);
    int getNumeroCliente();
    char* getNombre();
    char* getDireccion();
};

Cliente::Cliente() {
    setNumeroCliente(0);
    nombre = new char[20];
    direccion = new char[20];
    setNombre(" ");
    setDireccion(" ");
}

void Cliente::setNumeroCliente(int numeroCliente) {
    this->numeroCliente = numeroCliente;
}

void Cliente::setNombre(char const* nombre) {
    strcpy(this->nombre, nombre);
}

void Cliente::setDireccion(char const* direccion) {
    strcpy(this->direccion, direccion);
}

int Cliente::getNumeroCliente() {
    return this->numeroCliente;
}

char* Cliente::getNombre() {
    return this->nombre;
}

char* Cliente::getDireccion() {
    return this->direccion;
}


class Empleado { // Clase Empleado
private:
    int numeroNomina;
    char* nombre;
    double sueldo;
public:
    Empleado();
    void setNumeroNomina(int);
    void setNombre(char const*);
    void setSueldo(double);
    int getNumeroNomina();
    char* getNombre();
    double getSueldo();
};

Empleado::Empleado() {
    setNumeroNomina(0);
    nombre = new char[20];
    setNombre(" ");
    setSueldo(0);
}

void Empleado::setNumeroNomina(int numeroNomina) {
    this->numeroNomina = numeroNomina;
}

void Empleado::setNombre(char const* nombre) {
    strcpy(this->nombre, nombre);
}

void Empleado::setSueldo(double sueldo) {
    this->sueldo = sueldo;
}

int Empleado::getNumeroNomina() {
    return this->numeroNomina;
}

char* Empleado::getNombre() {
    return this->nombre;
}

double Empleado::getSueldo() {
    return this->sueldo;
}


int main()
{
    
    return 0;
}