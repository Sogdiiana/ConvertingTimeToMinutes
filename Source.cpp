#include <iostream>

using namespace std; //program to convert time to minutes
double perevodStoM( double seconds)
{
	double perevodstom;
	perevodstom = seconds / 60;
	return perevodstom;
}
int perevodChtoM(int hours)
{
	int perevodChtom;
	perevodChtom = hours * 60;
	return perevodChtom;
}
int main()
{
	int mins, hours ;
	double result,seconds;
	cout << "Enter your time : \nhours   >> ";
	cin >> hours;
	cout << "minutes >> ";
	cin >> mins;
	cout << "seconds >> ";
	cin >> seconds;
	result = mins + perevodStoM(seconds) + perevodChtoM(hours);
	cout << "Your result is - " << result << " minutes";
	return 0;

}