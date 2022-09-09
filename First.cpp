// Calculator in object oreanted programming
#include <iostream>
using namespace std;
// Creating class for addition
class Calculation
{
public:
	int additionFunction(int first, int second);
	int subtractionFunction(int first, int second);
	int multiplicationFunction(int first, int second);
};
// AdditionFunction Definition
int Calculation :: additionFunction(int first, int second)
{
	int result = first + second;
	return result;
}
// subtractionFunction Definition
int Calculation::subtractionFunction(int first, int second)
{
	int result = first - second;
	return result;
}
int Calculation::multiplicationFunction(int first, int second)
{
	int result = first * second;
	return result;
}
int main()
{
	Calculation objCalculation;
	int num1 = 0;
	int num2 = 0;
	int userInput = 0;
	cout << "Enter 1 for Addition 2 for Subtraction and 3 for Multiplication" << endl;
	cin >> userInput;
	switch (userInput)
	{
	case 1:
	{
		cout << "Enter the first number = " << endl;
		cin >> num1;
		cout << "Enter the second number = " << endl;
		cin >> num2;
		int additionResult = objCalculation.additionFunction(num1, num2);
		cout << "The addition of " << num1 << " and " << num2 << " is " << additionResult << endl;
		break;
	}
	case 2:
	{
		cout << "Enter the first number = " << endl;
		cin >> num1;
		cout << "Enter the second number = " << endl;
		cin >> num2;
		int subtractionResult = objCalculation.subtractionFunction(num1, num2);
		cout << "The subtraction of " << num1 << " and " << num2 << " is " << subtractionResult << endl;
		break;
	}
	case 3:
	{
		cout << "Enter the first number = " << endl;
		cin >> num1;
		cout << "Enter the second number = " << endl;
		cin >> num2;
		int multiplicationResult = objCalculation.multiplicationFunction(num1, num2);
		cout << "The multiplication of " << num1 << " and " << num2 << " is " << multiplicationResult << endl;
		break;
	}
	default:
		cout << "Envalid Operation!" << endl;
	}
	return 0;
}