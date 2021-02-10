#include <iostream>
#include <string>
#include <math.h>
//bool loop = true;
std::string input1;
//std::string input2;

int main()
{
	std::cout << "Que Formula queres usar?" << std::endl;
	std::cout << "1: 2da ley de Newton" << std::endl;
	std::cout << "2: Teorema de pitagoras" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cin >> input1;
	if (input1 == "1")
	{
		float masa;
		float aceleracion;
		float fuerza;
		std::cout << "Que valor se quiere obtener?" << std::endl;
		std::cout << "1: Fuerza" << std::endl;
		std::cout << "2: Masa" << std::endl;
		std::cout << "3: Aceleracion" << std::endl;
		std::cout << "---------------------" << std::endl;
		std::cin >> input1;
		if (input1 == "1")
		{
			std::cout << "Masa (kg):";
			std::cin >> masa;
			std::cout << "Aceleracion (m/s2):";
			std::cin >> aceleracion;
			std::cout << "El resultado es " << masa * aceleracion << " N" << std::endl;
			return 0;
		}
		if (input1 == "2")
		{
			std::cout << "Fuerza (N):";
			std::cin >> fuerza;
			std::cout << "Aceleracion (m/s2):";
			std::cin >> aceleracion;
			std::cout << "El resultado es " << fuerza / aceleracion << " kg" << std::endl;
			return 0;
		}
		if (input1 == "3")
		{
			std::cout << "Fuerza (N):";
			std::cin >> fuerza;
			std::cout << "Masa (kg):";
			std::cin >> masa;
			std::cout << "El resultado es " << fuerza / masa << " m/s2" << std::endl;
			return 0;
		}
	}
	if (input1 == "2")
	{
		float cateto1;
		float cateto2;
		float hipotenusa;
		std::cout << "Que valor se quiere obtener?" << std::endl;
		std::cout << "1: Hipotenusa" << std::endl;
		std::cout << "2: Cateto" << std::endl;
		std::cout << "---------------------" << std::endl;;
		std::cin >> input1;
		if (input1 == "1")
		{
			std::cout << "Cateto N1:";
			std::cin >> cateto1;
			cateto1 = pow(cateto1, 2);
			std::cout << "Cateto N2:";
			std::cin >> cateto2;
			cateto2 = pow(cateto2, 2);
			std::cout << "El resultado es " << pow(cateto1 + cateto2, 0.5) << ". Vos decidis la unidad." << std::endl;
			return 0;
		}
		if (input1 == "2")
		{
			std::cout << "Hipotenusa:";
			std::cin >> hipotenusa;
			hipotenusa = pow(hipotenusa, 2);
			std::cout << "Cateto:";
			std::cin >> cateto1;
			cateto2 = pow(cateto1, 2);
			std::cout << "El resultado es " << pow(hipotenusa - cateto1, 0.5) << ". Vos decidis la unidad." << std::endl;
			return 0;
		}
	}
}
