#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::vector;

class Student
{
	string studentName;
	char gender;
	int age;
	int id;
	double gpa;

public:

	Student()
	{
		studentName = "";
		gender = 'q';
		age = -1;
		id = -1;
		gpa = -1;
	}

	Student(string name, char gender, int age, int id, double gpa)
	{
		studentName = name;
		this->gender = gender;
		this->age = age;
		this->id = id;
		this->gpa = gpa;
	}

	void setStudentName(string name)
	{
		studentName = name;
	}

	void setGender(char gender)
	{
		this->gender = gender;
	}

	void setAge(int age)
	{
		this->age = age;
	}

	void setID(int id)
	{
		this->id = id;
	}

	void setGPA(double gpa)
	{
		this->gpa = gpa;
	}

	string getStudentName()
	{
		return studentName;
	}

	char getGender()
	{
		return gender;
	}

	int getAge()
	{
		return age;
	}

	int getId()
	{
		return id;
	}

	double getGPA()
	{
		return gpa;
	}
};


class System
{
	vector<Student> students;

public:

	void createChoiceList()
	{
		cout << endl << "------------------Student Info Database------------------" << endl << endl;
		cout << "1 = Add, 2 = Delete, 3 = View, 4 = Exit Program" << endl;
		cout << "Choice: ";
	}

	void createNewStudent()
	{
		string studentName;
		char studentGender;
		int studentAge;
		int studentID;
		double studentGPA;
		Student tempNewStudentInfoHolder;

		cin.clear();

		cout << "Adding New Student" << endl;

		cout << "Name: ";
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		getline(cin, studentName);

		cout << "Gender: ";
		//cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		cin >> studentGender;

		cout << "Age: ";
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		cin >> studentAge;

		cout << "ID: ";
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		cin >> studentID;

		cout << "GPA: ";
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		cin >> studentGPA;

		tempNewStudentInfoHolder = Student(studentName, studentGender, studentAge, studentID, studentGPA);

		students.push_back(tempNewStudentInfoHolder);

		cout << endl << endl << endl << "------------NEW STUDENT INFO------------" << endl << endl;

		cout << "Database Number: " << students.size() << endl;
		cout << "Name: " << studentName << endl;
		cout << "Gender: " << (studentGender == 'M' ? "Male" : "Female") << endl;
		cout << "Age: " << studentAge << endl;
		cout << "ID: " << studentID << endl;
		cout << "GPA: " << studentGPA << endl << endl << endl;
	}

	void deleteStudent()
	{
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
				outputStudentData();
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
	}

	void outputStudentData()
	{
		int studentDatabaseNumber = 1;
		for (Student student : students)
		{
			cout << endl << "--------------STUDENT INFO--------------" << endl << endl;

			cout << "Database Number: " << studentDatabaseNumber << endl;
			cout << "Name: " << student.getStudentName() << endl;
			cout << "Gender: " << (student.getGender() == 'M' ? "Male" : "Female") << endl;
			cout << "Age: " << student.getAge() << endl;
			cout << "ID: " << student.getId() << endl;
			cout << "GPA: " << student.getGPA() << endl << endl << endl;
			studentDatabaseNumber++;
		}
	}

	void createStartingData()
	{
		Student tempStudentInfoHolder;

		tempStudentInfoHolder.setStudentName("John Smith");
		tempStudentInfoHolder.setGender('M');
		tempStudentInfoHolder.setAge(18);
		tempStudentInfoHolder.setID(59406943);
		tempStudentInfoHolder.setGPA(3.8);

		students.push_back(tempStudentInfoHolder);

		tempStudentInfoHolder.setStudentName("Sarah Jillian");
		tempStudentInfoHolder.setGender('F');
		tempStudentInfoHolder.setAge(23);
		tempStudentInfoHolder.setID(85019285);
		tempStudentInfoHolder.setGPA(3.99);

		students.push_back(tempStudentInfoHolder);

		tempStudentInfoHolder.setStudentName("Jimmy Steve");
		tempStudentInfoHolder.setGender('M');
		tempStudentInfoHolder.setAge(53);
		tempStudentInfoHolder.setID(29539201);
		tempStudentInfoHolder.setGPA(2.23);

		students.push_back(tempStudentInfoHolder);
	}
};

int main()
{
	bool firstRun = true;
	int userChoice;
	System studentSystem;
	
	studentSystem.createStartingData();
	
	// CHECK FOR USER INPUTS BEFORE WHILE LOOPS 
	// IF 4 --> WHILE (FALSE)

	while (true)
	{
		studentSystem.createChoiceList();

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
			studentSystem.createNewStudent();
			break;
		case 2: 
			studentSystem.deleteStudent();
			break;
		case 3: studentSystem.outputStudentData(); break;
		case 4: exit(0); break;
		}

		system("PAUSE");
		system("cls");
	}

	system("PAUSE");
	return 1;
}