#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class student
{
private:
	string name;
	int roll;
	string branch;
public:
	friend ofstream& operator<<(ofstream& ofs, student& s);
	friend ifstream& operator>>(ifstream& ofs, student& s);

};
ofstream& operator<<(ofstream& ofs, student& s)
{
	ofs << s.name << endl;
	ofs << s.roll << endl;
	ofs << s.branch << endl;
	return ofs;
}

 ifstream& operator>>(ifstream& iks, student& s)
{
	iks >> s.name;
	iks >> s.roll;
	iks >> s.branch;
	return iks;
}

int main()
{
	student s1;
	s1.name = "kavin"; s1.roll = 12045; s1.branch = "MECH";

	ofstream ofs("student.txt", ios::trunc);

	ofs << s1;
	ofs.close();

	ifstream iks("student.txt");
	iks >> s1;
	cout << s1.name << endl;
	cout << s1.roll << endl;
	cout << s1.branch << endl;

}
