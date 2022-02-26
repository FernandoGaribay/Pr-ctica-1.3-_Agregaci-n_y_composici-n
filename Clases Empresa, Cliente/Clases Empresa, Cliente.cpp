#include <iostream>
#include <string>
#pragma warning(disable : 4996) // Desabilita las warning's de metodos como strcpy_s
using namespace std;

class Empresa { // Clase Empresa
private:
    int numeroEmpresa;
    int numeroEmpleados;
    char* nombre;
    Cliente cliente; // Una instancia de Cliente
    Empleado* empleados; // Un arreglo de instancias de Empleado
public:
    Empresa();
    Empresa(int, int, char*);
    ~Empresa();
    void setNumeroEmpresa(int);
    void setNumeroEmpleados(int);
    void setNombre(char const*); 
    int getNumeroEmpresa();
    int getNumeroEmpleados();
    char* getNombre();
};

Empresa::Empresa() {
    setNumeroEmpresa(0);
    nombre = new char[20];
    setNombre(" ");
}

Empresa::Empresa(int numeroEmpresa, int numeroEmpleados, char* nombreEmpresa) {
    setNumeroEmpresa(numeroEmpresa);
    setNumeroEmpleados(numeroEmpleados);
    setNombre(nombreEmpresa);
}

Empresa::~Empresa() {}

void Empresa::setNumeroEmpresa(int numeroEmpresa) {
    this->numeroEmpresa = numeroEmpresa;
}

void Empresa::setNumeroEmpleados(int numeroEmpleados) {
    this->numeroEmpleados = numeroEmpleados;
}

void Empresa::setNombre(char const* nombre) {
    strcpy(this->nombre, nombre);
}

int Empresa::getNumeroEmpresa() {
    return this->numeroEmpresa;
}

int Empresa::getNumeroEmpleados() {
    return numeroEmpleados;
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
    Cliente(int, char*, char*);
    ~Cliente();
    void setNumeroCliente(int);
    void setNombre(char const*);
    void setDireccion(char const*);
    int getNumeroCliente();
    char* getNombre();
    char* getDireccion();
    void saludar();
};

Cliente::Cliente() {
    setNumeroCliente(0);
    nombre = new char[20];
    direccion = new char[20];
    setNombre(" ");
    setDireccion(" ");
}

Cliente::Cliente(int numeroCliente, char* nombre, char* direccion) {
    setNumeroCliente(numeroCliente);
    setNombre(nombre);
    setDireccion(direccion);
}

Cliente::~Cliente() {}

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

void Cliente::saludar() {
    cout << "Estoy vivo" << endl;
}


class Empleado { // Clase Empleado
private:
    int numeroNomina;
    char* nombre;
    double sueldo;
public:
    Empleado();
    Empleado(int, char*, double);
    ~Empleado();
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

Empleado::Empleado(int numeroNomina, char* nombre, double sueldo) {
    setNumeroNomina(numeroNomina);
    setNombre(nombre);
    setSueldo(sueldo);
}

Empleado::~Empleado() {}

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


int main(void)
{
    

    return 0;
}