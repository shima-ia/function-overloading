#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//Define prototype function
void Displaymenu();
float Area(const float radius);
float Area(const float length, const float widht);
double Area(const double based, const double high);
int main()
{
	char choice;
	bool flag = true;
	do{
		Displaymenu();
		cin >> choice;
		if(choice == '1')
		{
			float radius;
			cout << "Enter radius : ";
			cin >> radius;
			cout << "Area of circle = " << fixed;
			cout << setprecision(2) << Area(radius) << endl;
		}
		else if(choice == '2')
		{
			float length, widht;
			cout << "Enter length and widht : ";
			cin >> length >> widht;
			cout << "Area of rectangle = " << fixed;
			cout << setprecision(2) << Area(length,widht) << endl;
		}
		else if(choice == '3')
		{
			double based, high;
			cout << "Enter based and high : ";
			cin >> based >> high;
			cout << "Area of triangle = " << fixed;
			cout << setprecision(2) << Area(based,high) << endl;
		}
		else if(choice == '4') flag = false;
		else
		{
			cout << "You choose out of range is ";
			cout << "not process." << endl;
		}
	}while(flag);
	cout << "\n. . . Exit Program . . .\n";
	return 0;
}
float Area(const float radius)
{
	return(3.14159F * radius * radius);
}
float Area(const float length, const float widht)
{
	return(length * widht);
}
double Area(const double based, const double high)
{
	return(0.5 * based * high);
}
void Displaymenu()
{
	cout << endl;
	cout << "Program Calculate Area" << endl;
	cout << "1. Circle" << endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Triangle" << endl;
	cout << "4. Exit" << endl;
	cout << "Enter your choose number : ";
}
