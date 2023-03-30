//#include<iostream>
//#include<vector>
//#include<Windows.h>
//#include<string>
//using namespace std;
//
//namespace _speciality {
//	class speciality {
//		static int stID;
//		int id = 0;
//		string spec;
//	public:
//		speciality() = default;
//		speciality(string special) :spec(special) {
//			id = ++stID;
//		}
//		void printSpec() {
//			cout << "ID:" << id << endl;
//			cout << "Speciality:" << spec << endl;
//		}
//	};
//	int speciality::stID = 0;
//}
//
//namespace teacher {
//
//	class teach {
//		string name;
//		string surname;
//		unsigned short age;
//		_speciality::speciality speciality;
//	public:
//		teach(string name, string surname, unsigned short age, _speciality::speciality specialityName) :name(name), surname(surname), age(age), speciality(specialityName) {}
//		void printTeach() {
//			cout << "Name:" << name << endl;
//			cout << "Surname:" << surname << endl;
//			cout << "Age:" << age << endl;
//			speciality.printSpec();
//		}
//	};
//}
//
//namespace student {
//	class stud {
//		string name;
//		string surname;
//	public:
//		unsigned short age;
//		float average;
//		stud(string name, string surname, unsigned short age, float average) :name(name), surname(surname), age(age), average(average) {}
//		void printStud() {
//			cout << "Name:" << name << endl;
//			cout << "Surame:" << surname << endl;
//			cout << "Age:" << age << endl;
//			cout << "average:" << average << endl;
//		}
//	};
//}
//
//namespace failStudend {
//	using namespace student;
//	class failstud :public stud {
//		short failCount;
//		short FailCreditAmount;
//	public:
//		failstud(string name, string surname, unsigned short age, float average, unsigned short failcount, unsigned short failcreditamount) : stud(name, surname, age, average), failCount(failcount), FailCreditAmount(failcreditamount) {}
//
//		void printFail() {
//			printStud();
//			cout << "Fail count:" << failCount << endl;
//			cout << "Fail credit amount:" << FailCreditAmount << endl;
//		}
//
//	};
//}
//namespace group {
//	class GroupClass {
//		string GroupName;
//		teacher::teach Teacher;
//		vector<student::stud> students;
//		vector<failStudend::failstud> FailedStudents;
//	public:
//		GroupClass(string GroupName, teacher::teach Teacher, vector<student::stud> students) :GroupName(GroupName), Teacher(Teacher), students(students) {}
//		GroupClass(string GroupName, teacher::teach Teacher, vector<failStudend::failstud> FailedStudents) :GroupName(GroupName), Teacher(Teacher), FailedStudents(FailedStudents) {}
//
//		void addFailed(failStudend::failstud failedStudy) { FailedStudents.push_back(failedStudy); }
//		void prinStudents() {
//			for (student::stud i : students) {
//				cout << endl;
//				i.printStud();
//			}
//		}
//	};
//}
//using namespace _speciality;
//using namespace teacher;
//using namespace student;
//using namespace failStudend;
//using namespace group;
//
//
//void main() {
//	speciality spec("Pogramlashdirma");
//	teach Teacher("Ismayil", "Seyidmemmedli", 25, spec);
//
//	stud s1("Elgun", "Haqverdiyev", 19, 12);
//	stud s2("Emil", "Tagiyev", 28, 12);
//	stud s4("Semur", "Emiraslanov", 20, 10);
//	failstud s3("Teymur", "Eliyev", 20, 10, 20, 200);
//	//spec.printSpec();
//	//s4.printStud();
//	//Teacher.printTeach();
//	vector<stud> students{ s1,s2,s3 };
//
//	GroupClass Otaq26("26 otaq.", Teacher, students);
//	Otaq26.prinStudents();
//	/*Otaq26.addFailed(s3);*/
//}