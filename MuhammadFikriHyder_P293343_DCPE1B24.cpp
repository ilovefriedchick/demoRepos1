

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    //aaa
    int age;
    double height, result;

    cout << "This program is done by.." << "\n";
    cout << "Name: Fikri Hyder " << "\n";
    cout << "Adm no: P293343" << "\n\n";

    cout << "Enter your age: " << "\n";
    cin >> age;

    if (age > 16)
    {
        cout << "Enter your height in meters: " << "\n";
        cin >> height;

        result = -100.0 / 26 + sqrt(pow((pow(age, 2) - 16), 3)) / pow(height, 3) + 55;
        cout << "The computed result is " << result << "\n";
    }
    else {
        cout << "Your age must be more than 16." << "\n";
    }

    return 0; 
}

	
	
	
	







