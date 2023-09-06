#include <iostream>
using namespace std;

class Fraction{
private: 
	float a; 
	float b;

public:
	//To set number
	void SetA(float num)
	{
		a = num;
	}
	void SetB(float num)
	{
		b = num;
	}

	//To get number
	float GetA() 
	{
		return a;
	}
	
	float GetB()
	{
		return b;
	}

	//Sum 
	float Sum(float num) {
		float result = (a / b) + num;
		return result;
	}

	//Subtracting
	float Minus(float num) {
		float result = (a / b) - num;
		return result;
	}

	//Multiplication
	float Multiply(float num) {
		float result = (a / b) * num;
		return result;
	}

	//Division
	float Divide(float num) {
		float result = (a / b) / num;
		return result;
	}
};

int main() {
	Fraction a;
	float numerator;		//числитель
	float denominator;	//знаменатель
	cout << "Enter numerator: ";
	cin >> numerator;
	cout << "Enter denominator: ";
	cin >> denominator;
	a.SetA(numerator);
	a.SetB(denominator);
	float result = a.GetA() / a.GetB();
	float sum, minus, multiply, divide;
	
	cout << "Your fraction: " << a.GetA() << "/" << a.GetB() << " = " << result << endl;
	int userAnswer;
	float num;
	bool repeat = false;


	do {
		cout << "\tMENU" << endl;
		cout << "[1] - Add a number to a fraction" << endl;
		cout << "[2] - Subtracting a number from a fraction" << endl;
		cout << "[3] - Multiply a fraction by a number" << endl;
		cout << "[4] - Divide a fraction by a number" << endl;
		cout << "(your answer): ";
		cin >> userAnswer;

		switch (userAnswer)
		{
		case 1:
			cout << "Enter number: ";
			cin >> num;
			sum = a.Sum(num);
			cout << "Result: " << sum << endl;
			break;
		case 2:
			cout << "Enter number: ";
			cin >> num;
			minus = a.Minus(num);
			cout << "Result: " << minus << endl;
			break;
		case 3:
			cout << "Enter number: ";
			cin >> num;
			multiply = a.Multiply(num);
			cout << "Result: " << multiply << endl;
			break;
		case 4:
			cout << "Enter number: ";
			cin >> num;
			divide = a.Divide(num);
			cout << "Result: " << divide << endl;
			break;
		default:
			cout << "Incorrect choice, try again\n " << endl;
			cout << endl;
			break;
		}

		cout << "Continue?\n[1] - yes\t[0] - no\n";
		cout << endl;
		cout << "(your answer): ";
		cin >> repeat;
	} while (repeat);
}