#include <iostream>
using namespace std;

int main() {

	char op;
	float num1, num2;

	cout << "Escoja un operador: +, -, *, /:";
	cin >> op;

	cout << "Ingrese 2 numeros: ";
	cin >> num1 >> num2;

	switch (op)
	{
	case '+':
		cout << "La suma da:" << num1 + num2;
			break;
	case '-':
		cout << "La resta da:" << num1 - num2;
		break;

	case '*':
		cout << "La multiplicacion da: " << num1 * num2;
		break;

	case '/':
		cout << "La division da: " << num1 / num2;
		break;

	default:
		cout << "Error! el operador no es correcto";
		break;
	}

	return 0;
}