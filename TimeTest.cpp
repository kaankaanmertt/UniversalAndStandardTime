#include<iostream>

using namespace std;

#include "Time.h"

int main() {

	Time t;

	cout << "The initial universal time is : " ; 
	t.printUniversal();

	cout << "The initial standard time is : ";
	t.printStandard();

	cout << endl;

	t.setTime(13,27,6);

	cout << endl;

	cout << "Universal time after setTime is : ";
	t.printUniversal();

	cout << "Standard time after setTime is : ";
	t.printStandard();

	cout << endl;

	cout << endl;

	try
	{
		t.setTime(99, 99, 99);
	}
	catch (const std::exception& e)
	{
		cout << "Exeption : " << e.what() << endl << endl;
	}

	cout << "After attempting invalid setting : " << endl;
	cout << "Universal Time : ";
	t.printUniversal();
	cout << "Standard Time : ";
	t.printStandard();

	cout << endl << endl;


	system("PAUSE");
	return 0;
}
