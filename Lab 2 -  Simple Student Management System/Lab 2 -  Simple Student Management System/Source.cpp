#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
public: 
	string studentName;
	char gender;
	int age;
	int id;
	double gpa;
};

void outputStudentData(vector<Student> students);
vector<Student> createStartingData();
Student emptyInfoHolder();

int main()
{
	bool firstRun = true;
	int userChoice;
	vector<Student> students;
	Student tempNewStudentInfoHolder;

	students = createStartingData();

	while (true)
	{
		cout << endl << "------------------Student Info Database------------------" << endl << endl;
		cout << "1 = Add, 2 = Delete, 3 = View" << endl;
		cout << "Choice: ";

		cin.clear();

		if (!firstRun)
		{
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		}

		firstRun = false;

		cin >> userChoice;

		switch (userChoice)
		{
		case 1: 
			cin.clear();

			cout << "Adding New Student" << endl;

			cout << "Name: ";
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cin >> tempNewStudentInfoHolder.studentName;

			cout << "Gender: ";
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cin >> tempNewStudentInfoHolder.gender;

			cout << "Age: ";
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cin >> tempNewStudentInfoHolder.age;

			cout << "ID: ";
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cin >> tempNewStudentInfoHolder.id;

			cout << "GPA: ";
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cin >> tempNewStudentInfoHolder.gpa;

			students.push_back(tempNewStudentInfoHolder);
			tempNewStudentInfoHolder = emptyInfoHolder();

			cout << endl << endl << endl << "------------NEW STUDENT INFO------------" << endl << endl;

			cout << "Database Number: " << students.size() << endl;
			cout << "Name: " << students.back().studentName << endl;
			cout << "Gender: " << (students.back().gender == 'M' ? "Male" : "Female") << endl;
			cout << "Age: " << students.back().age << endl;
			cout << "ID: " << students.back().id << endl;
			cout << "GPA: " << students.back().gpa << endl << endl << endl;
			break;
		case 2: 
		deleteStudent:
			char userChar;

			cout << endl << endl << "Enter Database Number To Delete (Enter x to return)" << endl;
			cout << "Student Database Number: ";

			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cin >> userChar;

			if (isdigit(userChar))
			{
				int position = userChar - '0' - 1;
				if ((position < students.size()))
				{
					students.erase(students.begin() + position);
					outputStudentData(students);
				}
				else
				{
					cout << endl << endl << "* ERROR: Database Number not found, please enter a valid number *" << endl << endl;
				}
			}
			else
			{
				cout << endl << endl << "* ERROR: Please enter a valid number *" << endl << endl;
				goto deleteStudent;
			}
			break;
		case 3: outputStudentData(students); break;
		}
		// ADD, DELETE, ETC

		//outputStudentData(students);
	}
	system("PAUSE");
	return 0;
}

void outputStudentData(vector<Student> students)
{
	int studentDatabaseNumber = 1;
	for (Student student : students)
	{
		cout << endl << "--------------STUDENT INFO--------------" << endl << endl;

		cout << "Database Number: " << studentDatabaseNumber << endl;
		cout << "Name: " << student.studentName << endl;
		cout << "Gender: " << (student.gender == 'M' ? "Male" : "Female") << endl;
		cout << "Age: " << student.age << endl;
		cout << "ID: " << student.id << endl;
		cout << "GPA: " << student.gpa << endl << endl << endl;
		studentDatabaseNumber++;
	}
}

vector<Student> createStartingData()
{
	vector<Student> students;
	Student tempStudentInfoHolder;

	tempStudentInfoHolder.studentName = "John Smith";
	tempStudentInfoHolder.gender = 'M';
	tempStudentInfoHolder.age = 18;
	tempStudentInfoHolder.id = 59406943;
	tempStudentInfoHolder.gpa = 3.8;

	students.push_back(tempStudentInfoHolder);

	tempStudentInfoHolder.studentName = "Sarah Jillian";
	tempStudentInfoHolder.gender = 'F';
	tempStudentInfoHolder.age = 23;
	tempStudentInfoHolder.id = 85019285;
	tempStudentInfoHolder.gpa = 3.99;

	students.push_back(tempStudentInfoHolder);

	tempStudentInfoHolder.studentName = "Jimmy Steve";
	tempStudentInfoHolder.gender = 'M';
	tempStudentInfoHolder.age = 53;
	tempStudentInfoHolder.id = 29539201;
	tempStudentInfoHolder.gpa = 2.23;

	students.push_back(tempStudentInfoHolder);

	return students;
}

Student emptyInfoHolder()
{
	Student emptyStudent;

	emptyStudent.studentName = "";
	emptyStudent.age = 0;
	emptyStudent.gender = '?';
	emptyStudent.id = 00000000;
	emptyStudent.gpa = 0;

	return emptyStudent;
}