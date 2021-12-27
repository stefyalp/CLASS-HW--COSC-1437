/***************************************************
Name: Stefania Ascencio
* Lab: CLASS HW*/
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string studFirstName;
	string studLastName;
	double studExam1, studExam2, studExam3;
	double studAvg;
	char studGrade; //alphabetical grade
	double studScore;

public:
	Student() {
		cout << " Enter student's First Name: ";
		cin >> studFirstName;
		cout << " Enter student's Last Name: ";
		cin >> studLastName;
		cout << " Enter score for exam 1: ";
		cin >> studExam1;
		cout << " Enter score for exam 2: ";
		cin >> studExam2;
		cout << " Enter score for exam 3: ";
		cin >> studExam3;


		studScore = (studExam1 + studExam2 + studExam3);
		studAvg = (studScore) / 3;
	}

	double getStudAvg() const {
		return studAvg;
	}

	char getGrade() {
		if (studAvg >= 90) {
			studGrade = 'A';
		}
		else if (studAvg >= 80) {
			studGrade = 'B';
		}
		else if (studAvg >= 70) {
			studGrade = 'C';
		}
		else if (studAvg >= 60) {
			studGrade = 'D';
		}
		else {
			studGrade = 'F';
		}
		return studGrade;
	}
};

int main() {
	Student student;
	cout << "The grade is:  " << student.getGrade() << endl;
	system("pause");
	return 0;
}