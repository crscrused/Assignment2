// File Name : SanJose_PA2.cpp
// Author : John Cris San Jose
// Email Address : jcsanjose@gbox.adnu.edu.ph
// ProgAss Number : 2
// Description : Engineer's Calculator
// Last Changed :  09/21/2023 ,  6:30 AM


#define _USE_MATH_DEFINES
#include <cmath>
#include <conio.h>
#include <iomanip>
#include <iostream>

/*Variables For Getch Function*/
int MainChoice, SubChoice, SuperSubChoice;

/*Variables For Number Input*/
double x, y;

/*Menu Function Declaration*/
void Menu();
void BasicArith();
void Exponentiation();
void Logarithm();
void Trigonometry();
void NSC();

/**Computation Function Declaration**/
/*Basic Arithmetic*/
void Addition();
void Subtraction();
void Multiplication();
void Division();

/*Exponentiation*/
void Power();
void CubeRoot();
void SquareRoot();

/*Basic Arithmetic Function Declaration*/
double Add(double x, double y);
double Subtract(double x, double y);
double Multiply(double x, double y);
double Divide(double x, double y);
/*Exponentiation Function Declaration*/
double MakePower(double x, double y);
double GetSquareRoot(double x);
double GetCubeRoot(double x);

/*Additional Function Declaration*/
double IntegersOnly();

int main()
{
	while (true)
	{
		Menu();
		MainChoice = _getch() - '0';
/*============================================================================*/
		/*Basic Arithmetic*/
		switch (MainChoice)
		{
		case 0:
			std::cout << "F this shit I'm out.\n";
			return 0;
/*============================================================================*/
		case 1: 
			BasicArith();
			SubChoice = _getch() - '0';
			switch (SubChoice)
			{
			case 1: 
				Addition();
			break;
			case 2:
				Subtraction();
				break;
			case 3:
				Multiplication();
				break;
			case 4:
				Division();
				break;
			default: std::cout << "Bruh, Wrong Choice.\n";
			}
			break;
/*============================================================================*/
		case 2: 
			Exponentiation();
			SubChoice = _getch() - '0';

			switch (SubChoice)
			{
			case 1:
				Power();
				break;
			case 2:
				SquareRoot();
				break;
			case 3:
				CubeRoot();
				break;
			default: std::cout << "Bruh, Wrong Choice.\n";
			}
			break;
/*============================================================================*/
		case 3: 
			Logarithm();
			SubChoice = _getch() - '0';
			switch (SubChoice)
			{
			case 1:			
				break;
			case 2:
				break;
			case 3:
				break;
			default: std::cout << "Bruh, Wrong Choice.\n";
			}
			break;
/*============================================================================*/
		case 4:
			Trigonometry();
			SubChoice = _getch() - '0';
			switch (SubChoice)
			{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			default: std::cout << "Bruh, Wrong Choice.\n";
			}
			break;
/*============================================================================*/
		case 5:
			NSC();
			SubChoice = _getch() - '0';
			switch (SubChoice)
			{
			case 1:
				break;
			case 2:
				break; 
			case 3:
				break;
			case 4:
				break;
			default: std::cout << "Bruh, Wrong Choice.\n";
			}
			break;

		default: std::cout << "Invalid Choice. Please Try Again.\n";
		break;
		}
	}
	return 0;
}
/**Function Definitions**/
/*Menu*/
void Menu()
{
	std::cout << "Welcome to Engineer's Calculator\n";
	std::cout << "========MENU========\n";
	std::cout << "(1) Basic Arithmetic\n";
	std::cout << "(2) Powers\n";
	std::cout << "(3) Logarithm\n";
	std::cout << "(4) Trigonometry(with DRG)\n";
	std::cout << "(5) Number System Conversion\n";
	std::cout << "(6) Others\n";
	std::cout << "Press 0 to EXIT\n";
}
/*Basic Arithmetic Menu*/
void BasicArith()
{
	std::cout << "Basic Arithmetic\n";
	std::cout << "========MENU========\n";
	std::cout << "(1) Addition\n";
	std::cout << "(2) Subtraction\n";
	std::cout << "(3) Multiplication\n";
	std::cout << "(4) Division\n";
}
void Exponentiation()
{
	std::cout << "Exponentiation\n";
	std::cout << "========MENU========\n";
	std::cout << "(1) Power\n";
	std::cout << "(2) Square Root\n";
	std::cout << "(3) Cube Root\n";
}
void Logarithm()
{
	std::cout << "Logarithm\n";
	std::cout << "========MENU========\n";
	std::cout << "(1) Base 10 Logarithm (log10)\n";
	std::cout << "(2) Natural Logarithm (ln)\n";
	std::cout << "(3) Logarithm with Any Base\n";
}
void Trigonometry()
{
	std::cout << "Trigonometry\n";
	std::cout << "========MENU========\n";
	std::cout << "(1) Sine\n";
	std::cout << "(2) Cosine\n";
	std::cout << "(3) Tangent\n";
	std::cout << "(4) Inverse Sine\n";
	std::cout << "(5) Inverse Cosine\n";
	std::cout << "(6) Inverse Tangent\n";
}
void NSC()
{
	std::cout << "Number System Conversion\n";
	std::cout << "========MENU========\n";
	std::cout << "(1) Decimal\n";
	std::cout << "(2) Binary\n";
	std::cout << "(3) Octal\n";
	std::cout << "(4) Hexadecimal\n";
}
/**Computation Menu**/
/*Basic Arithmetic*/
void Addition()
{
	std::cout << "ADDITION\n";
	std::cout << "Enter the Augend: ";
	x = IntegersOnly();
	std::cout << "Enter the Addend: ";
	y = IntegersOnly();
	std::cout << "Sum: " << Add(x, y) << '\n';
}
void Subtraction()
{
	std::cout << "SUBTRACTION\n";
	std::cout << "Enter the Minuend: ";
	x = IntegersOnly();
	std::cout << "Enter the Subtrahend: ";
	y = IntegersOnly();
	std::cout << "Difference: " << Subtract(x, y) << '\n';
}
void Multiplication()
{
	std::cout << "MULTIPLICATION\n";
	std::cout << "Enter the Multiplicand: ";
	x = IntegersOnly();
	std::cout << "Enter the Multiplier: ";
	y = IntegersOnly();
	std::cout << "Product: " << Multiply(x, y) << '\n';
}
void Division()
{
	std::cout << "DIVISION\n";
	std::cout << "Enter the Dividend: ";
	x = IntegersOnly();
	std::cout << "Enter the Divisor: ";
	y = IntegersOnly();
	std::cout << "Quotient: " << Divide(x, y) << '\n';
}
/*Exponentiation*/
void Power()
{
	std::cout << "POWER\n";
	std::cout << "Enter the Base: ";
	x = IntegersOnly();
	std::cout << "Enter the Exponent: ";
	y = IntegersOnly();
	std::cout << "Result: " << MakePower(x, y) << '\n';
}
void SquareRoot()
{
	std::cout << "SQUARE ROOT\n";
	std::cout << "Enter the radicand: ";
	x = IntegersOnly();
	std::cout << "The Square Root of " << x << " is  " << GetSquareRoot(x) << '\n';
}
void CubeRoot()
{
	std::cout << "CUBE ROOT\n";
	std::cout << "Enter the Radicand: ";
	x = IntegersOnly();
	std::cout << "The Cube Root of " << x << " is " << GetCubeRoot(x) << '\n';
}
/***Computations/Formula***/
/**Basic Arithmetic**/
/*Addtion*/
double Add(double x,double y)
{
	return x + y;
}
/*Subctraction*/
double Subtract(double x, double y)
{
	return x - y;
}
/*Multiplication*/
double Multiply(double x, double y)
{
	return x * y;
}
/*Division*/
double Divide(double x, double y)
{
	return x / y;
}
double MakePower(double x, double y)
{
	return pow(x, y);
}
double GetSquareRoot(double x)
{
	return sqrt(x);
}
double GetCubeRoot(double x)
{
	return cbrt(x);
}

/*Additional Function Definition*/
double IntegersOnly()
{
	double Number;
	while (!(std::cin >> Number))
	{
		//Resets The Input:
		std::cin.clear();
		//Used to Discard the Newline Character from the Input Buffer Before Reading the Character
		std::cin.ignore(256, '\n');
		std::cout << "Invalid Input. Please Enter Numbers Only: ";
	}
	return Number;
}
