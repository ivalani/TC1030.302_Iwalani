#include<string>
#include<iostream>
using namespace std; 

class Time{
	private:
	int hora;
	int minutos;
	int Tllegada;
	int Tsalida;
	
	public:
	Time(){} //constructor vacio 
	Time(int horaa, int minutoss) : hora(horaa), minutos(minutoss){} //constructor para inicializacion de tiempo  
	int getTllegada();
	int getTsalida();
};
int Time::getTsalida()
{
	return getTsalida;
}

int Time::getTllegada()
{
    return Tllegada;
}


class ElementLine{
	private:
	string name;
	Time  llegada;
	Time salida;	
	ElementLine* Sig();
	
	public: 
	ElementLine(){}
	ElementLine(string name, Time llegada, Time salida) : name(name), llegada(llegada), salida(salida){}
	int getLlegada();
	int getSalida();
	ElementLine* getSig();
	string getNext();
};
ElementLine* ElementLine::getSig()
{
	return sig;
}

string ElementLine::getNextElement()
{
	ElementLine* sucesor = getSig();
	while (sucesor < <= 10)
		
	
}

int Time::getSalida()
{
	return salida;
}

int Time::getLlegada()
{
	return llegada;
}

class LineStatistics{
	private:
	ElementLine* fila;  // lo de fila lo puedo modificar cuando 
	
	public:            // tenga la fila completa en el main
	LineStatistics(){}
	LineStatistics(ElementLine* filaa) : fila(filaa){}
	
	int getMaxTime();
};
// restar el tiempo de llegada entre 2 personas(modificar)
int ElementLine::getMinTime()
{
	return (llegada.getTllegada() - llegada.getTllegada());
}


//Simula en el main que llegan n personas a la fila de vacunaciรณn (n debe ser mayor que 9). Utiliza como ejemplo las siguientes 5 personas, pero en tu main debes colocar al menos 10 personas
int main()
{ 
    Time timpollegada(02,00);
	Time timposalida(02,20);
	ElementLine luisa("luisa", &timpollegada, &tiemposalida);
	LineStatistics luisa( &timpollegada, &tiemposalida);
	cout<< luisa.getMinTime();
}

