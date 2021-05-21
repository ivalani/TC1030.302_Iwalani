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
	string getName();
	int getLlegada();
	int getSalida();
	ElementLine* getSig();
	string getNext();
};
string Person::getName()
{
    return name;
}
ElementLine* ElementLine::getSig()
{
	return Sig;
}

int ElementLine::getNextElement()
{
	int count_sucesor = 0;
	ElementLine* sucesor = getSig();
	while (sucesor < <= 10)
	{
		count_sucesor = count_sucesor -1;
		sucesor = sucesor ->getSig();
	}
	return count_sucesor; 
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
	Time timpollegadaLuisa(02,00);
	Time timpollegadaPedro(02,00);
	Time timpollegadaJuana(02,00);
	Time timpollegadaRoberto(02,00);
	Time timpollegadaRubi(02,00);
	Time timpollegadaMaria(02,00);
	Time timpollegadaVictor(02,00);
	Time tiempollegadaAna(02,00);
	Time tiempollegadaPablo(02,00);
	Time tiempollegadaSofia(02,00);
	
	Time timposalidaLuisa(02,00);
	Time timposalidaPedro(02,00);
	Time timposalidaJuana(02,00);
	Time timposalidaRoberto(02,00);
	Time timposalidaRubi(02,00);
	Time timposalidaMaria(02,00);
	Time timposalidaVictor(02,00);
	Time timposalidaAna(02,00);
	Time timposalidaPablo(02,00);
	Time timposalidaSofia(02,00);
	
	ElementLine luisa("luisa", Tllegada, timposalidaLuisa, &pedro);
	ElementLine pedro("pedro", Tllegada, timposalidaPedro, &juana);
	ElementLine juana("juana", Tllegada, timposalidaJuana, &roberto);
	ElementLine roberto("roberto", Tllegada, timposalidaRoberto, &rubi);
	ElementLine rubi("rubi", Tllegada, timposalidaRubi, &maria);
	ElementLine maria("maria", Tllegada, tiemposalidaMaria, &victor);
	ElementLine victor("victor", Tllegada, tiemposalidaVictor, &ana);
	ElementLine ana("ana", Tllegada, tiemposalidaAna, &pablo);
	ElementLine pablo("pablo", Tllegada, tiemposalidaPablo, &sofia);
	ElementLine sofia("sofia", Tllegada, tiemposalidaSofia, 0);   // la fila inicia del ultimo, hacia arriba
	
	cout << sofia.getSig()->getName();

}

