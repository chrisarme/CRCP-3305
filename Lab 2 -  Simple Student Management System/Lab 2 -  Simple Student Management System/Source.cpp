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

		bool valueFlags[3] = { false };
		// 0 = age value, 1 = id value, 2 = gpa value
		// These all need to be correct ( = true) to finish adding the student

		cin.clear();

		cout << endl << "Adding New Student" << endl;

		cout << "Name: ";
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		getline(cin, studentName);

		cout << "Gender: ";
		cin >> studentGender;

		while (!valueFlags[0])
		{
			cout << "Age: ";
			cin >> studentAge;

			if (!cin)
			{
				cin.clear();
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

				cout << endl << "* ERROR: Please enter a valid number *" << endl;
			}
			else
			{
				valueFlags[0] = true;
			}
		}

		while (!valueFlags[1])
		{
			cout << "ID: ";
			cin >> studentID;

			if (!cin)
			{
				cin.clear();
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

				cout << endl << "* ERROR: Please enter a valid number *" << endl;
			}
			else
			{
				valueFlags[1] = true;
			}
		}
		
		while (!valueFlags[2])
		{
			cout << "GPA: ";
			cin >> studentGPA;

			if (!cin)
			{
				cin.clear();
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

				cout << endl << "* ERROR: Please enter a valid number *" << endl;
			}
			else
			{
				valueFlags[2] = true;
			}
		}

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

	void outputSpecificStudentData(int indexNumber)
	{
		cout << endl << "--------------STUDENT INFO--------------" << endl << endl;

		cout << "Database Number: " << indexNumber + 1 << endl;
		cout << "Name: " << students[indexNumber].getStudentName() << endl;
		cout << "Gender: " << (students[indexNumber].getGender() == 'M' ? "Male" : "Female") << endl;
		cout << "Age: " << students[indexNumber].getAge() << endl;
		cout << "ID: " << students[indexNumber].getId() << endl;
		cout << "GPA: " << students[indexNumber].getGPA() << endl << endl << endl;
	}

	void deleteStudent()
	{
	deleteStudent:
		char userChar;
		char userConfirmation;

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
				cout << endl << "Are you sure you want to delete this student?" << endl;
				outputSpecificStudentData(position);

				cout << "[y/n]: ";
				cin >> userConfirmation;

				switch (userConfirmation)
				{
				case 'y':
					students.erase(students.begin() + position);
					outputStudentData();
					break;
				case 'n': 
					cout << "Canceling deletion..." << endl;
					break;
				}
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
	bool shouldRun = true;
	int userChoice;
	System studentSystem;
	
	studentSystem.createStartingData();

	while (shouldRun)
	{
		studentSystem.createChoiceList();

		cin >> userChoice;

		if (userChoice == 4)
		{
			shouldRun = false;
		}

		if (shouldRun)
		{
			switch (userChoice)
			{
			case 1:
				studentSystem.createNewStudent();
				break;
			case 2:
				studentSystem.deleteStudent();
				break;
			case 3: studentSystem.outputStudentData(); break;
			default:
				cout << "* Error: Option not found. Please enter one of the available choices. *" << endl;
				break;
			}

			system("PAUSE");
			system("cls");
		}

		cin.clear();
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	}

	system("PAUSE");
	return 0;
}