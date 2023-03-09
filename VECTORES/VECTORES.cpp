#include <stdexcept>
#include <limits>
#include <iostream>

int main()
{
    //preguntar al usuario cuantos alumos va ingresar
	int n;
	std::cout << "Cuantos alumnos va a ingresar? ";
	std::cin >> n;
	//crear un vector donde almacene la cedula de los alumnos
	int* cedula = new int[n];
	//crear un vector donde almacene el nombre de los alumnos
	std::string* nombre = new std::string[n];
	//crear un vector donde almacene el apellido de los alumnos
	std::string* apellido = new std::string[n];
	//crear un vector donde almacene la edad de los alumnos
	int* edad = new int[n];
	//crear un vector donde almacene la profesion de los alumnos
	std::string* profesion = new std::string[n];
	//crear un vector donde almacene el lugar de nacimiento de los alumnos
	std::string* nacimiento = new std::string[n];
	//crear un vector donde almacene la direccion de los alumnos
	std::string* direccion = new std::string[n];
	//crear un vector donde almacene el telefono de los alumnos
	int* telefono = new int[n];
	//for con try catch para cada pregunta
		for (int i = 0; i < n; i++)
		{
			//try catch para preguntar la cedula del alumno para que que saque error si no escribe numeros
			try
			{
				std::cout << "Cedula del alumno " << i + 1 << ": ";
				std::cin >> cedula[i];
				if (std::cin.fail())
				{
					throw 1;
				}
			}
			catch (int)
			{
				std::cout << "Error, no se puede ingresar letras" << std::endl;
			}
			//try catch para preguntar el nombre del alumno y que muestre error si escribe numeros
			try
			{
				std::cout << "Nombre del alumno " << i + 1 << ": ";
				std::cin >> nombre[i];
				for (int j = 0; j < nombre[i].size(); j++)
				{
					if (isdigit(nombre[i][j]))
					{
						throw 1;
					}
				}
			}
			catch (int)
			{
				std::cout << "Error, no se puede ingresar numeros" << std::endl;
				std::cin.clear();
				std::cin.ignore(1000, ' ');
				i--;
			}
			//try catch para preguntar el apellido del alumno y que muestre error si escribe numeros
			try
			{
				std::cout << "Apellido del alumno " << i + 1 << ": ";
				std::cin >> apellido[i];
				for (int j = 0; j < apellido[i].size(); j++)
				{
					if (isdigit(apellido[i][j]))
					{
						throw 1;
					}
				}
			}
			catch (int)
			{
				std::cout << "Error, no se puede ingresar numeros" << std::endl;
				std::cin.clear();
				std::cin.ignore(1000, ' ');
				i--;
			}
			//try catch para preguntar la edad del alumno para que que saque error si no escribe numeros
			try
			{
				std::cout << "Edad del alumno " << i + 1 << ": ";
				std::cin >> edad[i];
				if (std::cin.fail())
				{
					throw 1;
				}
			}
			catch (int)
			{
				std::cout << "Error, no se puede ingresar letras" << std::endl;
				std::cin.clear();
				std::cin.ignore(1000, ' ');
				i--;
			}
			//try catch para preguntar la profesion del alumno y que muestre error si escribe numeros
			try
			{
				std::cout << "Profesion del alumno " << i + 1 << ": ";
				std::cin >> profesion[i];
				for (int j = 0; j < profesion[i].size(); j++)
				{
					if (isdigit(profesion[i][j]))
					{
						throw 1;
					}
				}
			}
			catch (int)
			{
				std::cout << "Error, no se puede ingresar numeros" << std::endl;
				std::cin.clear();
				std::cin.ignore(1000, ' ');
				i--;
			}
			//try catch para preguntar el lugar de nacimiento del alumno y que muestre error si escribe numeros
			try
			{
				std::cout << "Lugar de nacimiento del alumno " << i + 1 << ": ";
				std::cin >> nacimiento[i];
				for (int j = 0; j < nacimiento[i].size(); j++)
				{
					if (isdigit(nacimiento[i][j]))
					{
						throw 1;
					}
				}
			}
			catch (int)
			{
				std::cout << "Error, no se puede ingresar numeros" << std::endl;
				std::cin.clear();
				std::cin.ignore(1000, ' ');
				i--;
			}
			//try catch para preguntar la direccion del alumno y que muestre error si escribe numeros
			try
			{
				std::cout << "Direccion del alumno " << i + 1 << ": ";
				std::cin >> direccion[i];
				for (int j = 0; j < direccion[i].size(); j++)
				{
					if (isdigit(direccion[i][j]))
					{
						throw 1;
					}
				}
			}
			catch (int)
			{
				std::cout << "Error, no se puede ingresar numeros" << std::endl;
				std::cin.clear();
				std::cin.ignore(1000, ' ');
				i--;
			}
			//try catch para preguntar el telefono del alumno para que que saque error si no escribe numeros
			try
			{
				std::cout << "Telefono del alumno " << i + 1 << ": ";
				std::cin >> telefono[i];
				if (std::cin.fail())
				{
					throw 1;
				}
			}
			catch (int)
			{
				std::cout << "Error, no se puede ingresar letras" << std::endl;
				std::cin.clear();
				std::cin.ignore(1000, ' ');
				i--;
			}
			//borrar pantalla
			system("cls");
		}
		//imprimir los datos de los alumnos en forma de tabla usando los vectores
		std::cout << "Nombre" << "\t\t" << "Apellido" << "\t\t" << "Edad" << "\t\t" << "Profesion" << "\t\t" << "Lugar de nacimiento" << "\t\t" << "Direccion" << "\t\t" << "Telefono" << std::endl;
		for (int i = 0; i < 5; i++)
		{
			std::cout << nombre[i] << "\t\t" << apellido[i] << "\t\t" << edad[i] << "\t\t" << profesion[i] << "\t\t" << nacimiento[i] << "\t\t" << direccion[i] << "\t\t" << telefono[i] << std::endl;
		}
		system("pause");
		return 0;
}