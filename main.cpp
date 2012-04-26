#include <iostream>
#include <math.h>

using namespace std;

void funcCos();
void funcSin();
void funcTan();
void funcATan2();
void funcSqrt();
void funcPow();
void absolute();
void funcFloor();
void funcCeil();

int main()
{
	// Start an while loop, loop until bQuit = true
	bool bQuit = false;

	while (!bQuit)
	{
		// Draw the table
		cout << "1) cos(x),       2) sin(x),        3) tan(x)," << endl;
		cout << "4) atan2(y, x),  5) sqrt(x),       6) x^y," << endl;
		cout << "7) |x|,          8) floor(x),      9) ceil(x),    10) Exit." << endl << endl;
	
	    // Prompt for user selection
		int iUserChoice = 0;
		cout << "Your Selection)  ";
		cin >> iUserChoice;

		// go into functions or on quit set bQuit = true
		switch (iUserChoice)
		{
		case 1:
			funcCos();
			break;
		case 2:
			funcSin();
			break;
		case 3:
			funcTan();
			break;
		case 4:
			funcATan2();
			break;
		case 5:
			funcSqrt();
			break;
		case 6:
			funcPow();
			break;
		case 7: 
			absolute();
			break;
		case 8:
			funcFloor();
			break;
		case 9:
			funcCeil();
			break;
		case 10:
			bQuit = true;
			break;
		default:
			cout << "Sorry that was not a valid selection, Please choose another." << endl;
		}
	}

	return (0);
}

void funcCos()
{
	float x = 0.0f;			             // Ask for a value for x then compute and print the answer.
	cout << "Please enter a value for x in cos(x):  x = ";
	cin >> x;
	cout << "cos(" << x << ") = " << cos(x) << endl << endl;
}

void funcSin()
{
	float x = 0.0f;						// Ask for a value for x then compute and print the answer.
	cout << "Please enter a value for x in sin(x) : x = ";
	cin >> x;
	cout << "sin(" << x << ") = " << sin(x) << endl << endl;
}

void funcTan()
{
	float x = 0.0f;						// Ask for a value for x then compute and print the answer.
	cout << "Please enter a value for x in tan(x) : x = ";
	cin >> x;
	cout << "tan(" << x << ") = " << tan(x) << endl  << endl;
}

void funcATan2()
{
	float x = 0.0f;						// Ask for a value for y and x then compute and print the answer.
	float y = 0.0f;
	cout << "Please enter a value for y in atan2(y, x): y = ";
	cin >> y;
	cout << "Please enter a value for x in atan2(" << y << " , x): x = ";
	cin >> x;
	cout << "atan2(" << y << ", " << x << ") = " << atan2(y,x) << endl << endl;
}

void funcSqrt()
{
	float x = 0.0f;						// Ask for a value for x then compute and print the answer
	cout << "Please enter a value for x in sqrt(x) to find the square root: x = ";
	cin >> x;
	cout << "sqrt(" << x << ") = " << sqrt(x) << endl << endl;
}

void funcPow()
{
	float x = 0.0f;						// Ask for x, and y values then compute and print the answer
	float y = 0.0f;
	cout << "Please enter a value for x in x^y: x = ";
	cin >> x;
	cout << "Please enter a value for y in " << x << "^y: y = ";
	cin >> y;
	cout << x << "^" << y << " = " << pow(x,y) << endl << endl;
}

void absolute()							// Ask for x then compute and print the answer.
{
	float x = 0.0f;
	cout << "Please enter a value for x in |x|: x = ";
	cin >> x;
	cout << "|" << x << "| = " << fabs(x) << endl << endl;
}

void funcFloor()
{
	float x = 0.0f;						// Ask for x then compute and print the result
	cout << "Please enter a value for x in floor(x): x = ";
	cin >> x;
	cout << "floor(" << x << ") = " << floor(x) << endl << endl;
}

void funcCeil()
{
	float x = 0.0f;						// Ask for x then compute and print the result
	cout << "Please enter a value for x in ceil(x): x = ";
	cin >> x;
	cout << "ceil(" << x << ") = " << ceil(x) << endl << endl;
}






	