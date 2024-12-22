#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Ru");
	ofstream file("test.txt");
	if (file.is_open())
	{
		file << "Привет, Вова! " << endl;
		file.close();
	}
	ifstream filee("test.txt");
	if (filee.is_open())
	{
		string temp;
		while (getline(filee, temp))
		{
			cout << temp << endl;
		}
		filee.close();
	}




	return 0;
}