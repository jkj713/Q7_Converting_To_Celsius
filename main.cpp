//Converting Fahrenheit to Celsius

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  //Declare and Initialize variables
  double fahrenheit = 0.0;
  double result = 0.0;

  //Accept user input
  cout << "Please enter your temperature in Fahrenheit to convert to Celsius: " << endl;
  cin >> fahrenheit;

  //Process
  result = ((fahrenheit - 32)*0.555555);

  //Output
  cout << "The degrees in Celsius is: " << setprecision(4) << fixed << result << endl;
}