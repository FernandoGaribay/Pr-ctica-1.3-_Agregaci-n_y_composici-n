#include <iostream>
#include <string>
#pragma warning(disable : 4996)
using namespace std;


//Clase Cliente
class Cliente { 
private:
	int numeroCliente;
	char const* nombre;
	char const* direccion;
public:
    Cliente();
    Cliente(int, char const*, char const*);
    ~Cliente();

    void setNumeroCliente(int);
    void setNombre(char const*);
    void setDireccion(char const*);

    int getNumeroCliente();
    char const* getNombre();
    char const* getDireccion();
};

Cliente::Cliente() {
    setNumeroCliente(0);
    nombre = new char[20];
    direccion = new char[20];
    setNombre(" ");
    setDireccion(" ");
}

Cliente::Cliente(int numeroCliente, char const* nombre, char const* direccion) {
    setNumeroCliente(numeroCliente);
    setNombre(nombre);
    setDireccion(direccion);
}

Cliente::~Cliente() {}

//Setter y Getters
void Cliente::setNumeroCliente(int numeroCliente) {
    this->numeroCliente = numeroCliente;
}

void Cliente::setNombre(char const* nombre) {
    this->nombre = nombre;
}

void Cliente::setDireccion(char const* direccion) {
    this->direccion = direccion;
}

int Cliente::getNumeroCliente() {
    return this->numeroCliente;
}

char const* Cliente::getNombre() {
    return this->nombre;
}

char const* Cliente::getDireccion() {
    return this->direccion;
}
    

//Clase Empleado
class Empleado {
private:
    int numeroNomina;
    char const* nombre;
    double sueldo;
public:
    Empleado();
    Empleado(int, char const*, double);
    ~Empleado();

    void setNumeroNomina(int);
    void setNombre(char const*);
    void setSueldo(double);

    int getNumeroNomina();
    char const* getNombre();
    double getSueldo();
};

Empleado::Empleado() {
    setNumeroNomina(0);
    nombre = new char[20];
    setNombre(" ");
    setSueldo(0);
}

Empleado::Empleado(int numeroNomina, char const* nombre, double sueldo) {
    setNumeroNomina(numeroNomina);
    setNombre(nombre);
    setSueldo(sueldo);
}

Empleado::~Empleado() {}

//Setter y Getters
void Empleado::setNumeroNomina(int numeroNomina) {
    this->numeroNomina = numeroNomina;
}

void Empleado::setNombre(char const* nombre) {
    this->nombre = nombre;
}

void Empleado::setSueldo(double sueldo) {
    this->sueldo = sueldo;
}

int Empleado::getNumeroNomina() {
    return this->numeroNomina;
}

char const* Empleado::getNombre() {
    return this->nombre;
}

double Empleado::getSueldo() {
    return this->sueldo;
}


//Clase Empresa
class Empresa {
    int numeroEmpresa;
    int numeroEmpleados;
    char const* nombre;
    Cliente cliente;
    Empleado* empleados = new Empleado[numeroEmpleados]; // Composicion de los objetos de la Clase "Empleado"
public:
    Empresa();
    Empresa(int, int, char const*);
    ~Empresa();

    void setNumeroEmpresa(int);
    void setNumeroEmpleados(int);
    void setNombre(char const*);

    int getNumeroEmpresa();
    int getNumeroEmpleados();
    char const* getNombre();

    void agregarCliente(Cliente objetoCliente);
    Empleado registrarEmpleado();
    double sumaSueldosEmpleados();
};

Empresa::Empresa() {
    setNumeroEmpresa(0);
    nombre = new char[20];
    setNombre(" ");
}

Empresa::Empresa(int numeroEmpresa, int numeroEmpleados, char const* nombreEmpresa) {
    setNumeroEmpresa(numeroEmpresa);
    setNumeroEmpleados(numeroEmpleados);
    setNombre(nombreEmpresa);

    for (int i = 0; i < numeroEmpleados; i++) {
        empleados[i] = registrarEmpleado();
    }
}

Empresa::~Empresa() {}

void Empresa::agregarCliente(Cliente objetoCliente) {
    this->cliente = objetoCliente;
}

Empleado Empresa::registrarEmpleado() {
    int numNomina;
    char* nombre = new char[20];
    double sueldo;

    cout << "Dijite el numero de nomina: ";
    cin >> numNomina;

    cout << "Dijite el nombre: ";
    cin >> nombre;

    cout << "Dijite el sueldo: ";
    cin >> sueldo;

    cout << "\n\n";

    Empleado objEmpleado = Empleado(numNomina, nombre, sueldo);
    return objEmpleado;
}

double Empresa::sumaSueldosEmpleados() { // Devolver la suma de los sueldos de todos los empleados
    double sumSalarios=0;

    for (int i = 0; i < numeroEmpleados; i++) {
        sumSalarios += empleados[i].getSueldo();
    }

    return sumSalarios;
}

//Setter y Getters
void Empresa::setNumeroEmpresa(int numeroEmpresa) {
    this->numeroEmpresa = numeroEmpresa;
}

void Empresa::setNumeroEmpleados(int numeroEmpleados) {
    this->numeroEmpleados = numeroEmpleados;
}

void Empresa::setNombre(char const* nombre) {
    this->nombre = nombre;
}

int Empresa::getNumeroEmpresa() {
    return this->numeroEmpresa;
}

int Empresa::getNumeroEmpleados() { // Devolver la cantidad de empleados de la empresa
    return numeroEmpleados;
}

char const* Empresa::getNombre() {
    return this->nombre;
}


int main()
{
    Cliente cliente1 = Cliente(1, "Fernando", "Garibay");
    Empresa empresa = Empresa(1, 2, "Amazon");

    empresa.agregarCliente(cliente1); // Agregacion del objeto de la Clase "Cliente"

    cout << "Cantidad de empleados de la empresa: " << empresa.getNumeroEmpleados() << endl;
    cout << "Suma de los sueldos de todos los empleados: " << empresa.sumaSueldosEmpleados() << endl;

    system("pause");
	return 0;
}