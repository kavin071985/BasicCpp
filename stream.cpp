#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outfile("My.txt", ios::app);
	outfile << "kavin" << endl;
	outfile << 12045 << endl;
	outfile << "mech" << endl;
	outfile.close();
	/*ifstream ifs;
		ifs.open("My.txt");   or */
	ifstream ifs("My.txt");
	if (ifs.is_open())cout << "File is Opened" << endl;
	string name;
	int roll;
	string branch;

	ifs >> name >> roll >> branch;
	ifs.close();

	cout << "Name " << name << endl;
	cout << "Roll " << roll << endl;
	cout << "Branch " << branch << endl;
}