// Class Exercise 3

#include <iostream>
using namespace std;

class Imagin{
	public:

	double a,b;

	Imagin(double na, double nb){

	a=na;b=nb;}
};

int main(){

	double nu1,nu2;
	cout << "\First number \n";
	cout << "Input the real part:";
	cin >> nu1;
	cout <<"Input the imaginary part:";
	cin >> nu2;
	Imagin number1(nu1,nu2);
	cout <<"\nAnother number \n";
    double nu3,nu4;
	cout << "Input the real part:";
	cin >> nu3;
	cout << "Input the imaginary part:";
	cin >> nu4;

	Imagin number2(nu3,nu4);

	double real;

    real = number1.a +number2.a;

    double imagin;

    imagin = number2.b + number1.b;

    cout << "\nThe sum of the real parts is " << real << "\n";
    cout << "The sum of the imaginary parts is " << imagin;

    return 0;
}
