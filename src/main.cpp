#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int create_Json();
void create_Objects(int value);
int read_Json();
int main_Menu();
void evaluate_Option(int value);
void Object_Json();
void Array_Json();
void Value_Json();
void String_Json();
void Number_Json();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("\t\tEnvio y lectura de tramas JSON\n\n\n");
	system("PAUSE()");
	system("CLS()");
	main_Menu();
	getch();
	return 0;
}

int main_Menu()
{
	int value;
	printf("\t\tElije una opcion:\n\n");
	printf("\t1)Crear una trama Json:\n");
	printf("\t2)Leer una trama Json:\n");
	printf("\t\nCualquier otra tecla para salir.....:  ");
	cin>>value;
	evaluate_Option(value);
	return 0;
}
	
void evaluate_Option(int value)
{
	system("CLS()");
	switch(value)
	{
		case 1:
			create_Json();
			break;
		case 2:
			read_Json();
			break;
		default:
			printf("Programa Finalizado.....  ");
			break;
	}
}

int create_Json()
{
	int option;
	printf("\t\t Elige el objeto que deseas crear: \n\n");
	printf("\t1)Crear un Objeto Json\n\n");
	printf("\t2)Crear un Arreglo Json\n\n");
	printf("\t3)Crear un Valor Json\n\n");
	scanf("%d",&option);
	if(option == 1 || option == 2 || option == 3
		|| option == 5 || option == 4)
	{
		create_Objects(option);
	}
	return 0;
}

void define_Value()
{
	printf("\t\telige un tipo de valor: \n");
	printf("\t1)Crear un Cadena Json\n\n");
	printf("\t2)Crear un Boleano Json\n\n");
	printf("\t3)Crear un Nulo Json\n\n");
	printf("\tOtra tecla para salir\n\n");
}
void create_Objects(int value)
{
	system("CLS()");
	switch(value)
	{
		case 1:
			Object_Json();
			break;
		case 2:
			Array_Json();
			break;
		case 3:
			Value_Json();
			break;
		case 4:
			String_Json();
			break;
		case 5:
			Number_Json();
			break;
		default:
			
			break;
	}
}

void Object_Json()
{
	
}

void Array_Json()
{
}

void Value_Json()
{
}

void String_Json()
{
}

void Number_Json()
{
}

int read_Json()
{
	char trama[1024];
	printf("\t\tEscribe la trama a leer: \n\n");
	cin>>trama;
	
}

