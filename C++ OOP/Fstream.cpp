//#include<iostream>
//#include<fstream>
//#include<string>
//#include<vector>
//using namespace std;
//
//
//
//class student {
//	friend class group;
//	static int sID;
//	int id;
//	string name;
//	string surname;
//	int age;
//public:
//	student() = default;
//	student(string name, string surname, int age) :name(name), surname(surname), age(age) {
//		id = (++sID);
//	}
//	int getid() { return id; }
//	string getName() { return name; }
//	string getSurname() { return surname; }
//	int getAge() { return age; }
//	void operator=(student other) {
//		id = other.id;
//		name = other.name;
//		surname = other.surname;
//		age = other.age;
//	}
//};
//int student::sID = 0;
//
//class group :public student{
//	fstream groupFile;
//	string groupname;
//	vector<student> students;
//public:
//	group(string GroupName, vector<student>students) :groupname(GroupName), students(students) {}
//
//	void addTextFile() {
//		groupFile.open(R"(C:\Users\Crash\Desktop\Text.txt)", ios::out);
//		groupFile << "Group name:" << groupname << endl << endl;
//		for (student i : students) {
//			groupFile << "ID:" << i.getid() << endl;
//			groupFile << "Name:" << i.getName() << endl;
//			groupFile << "Surname:" << i.getSurname() << endl;
//			groupFile << "Age:" << i.getAge() << endl;
//			groupFile << endl;
//			groupFile << endl;
//		}
//		groupFile.close();
//	}
//	void showTextFile() {
//		students[0].name;
//		fstream fGroupFile;
//		fGroupFile.open(R"(C:\Users\Crash\Desktop\Text.txt)", ios::in);
//		string txt;
//		while (!fGroupFile.eof()) {
//			getline(fGroupFile, txt);
//			cout << txt << endl;
//		}
//
//	}
//	void deleteStudent(int id) {
//		try
//		{
//			if (id > students.size() - 1 or id < 0)
//			{
//				throw new exception("Out of range ");
//			}
//			else
//			{
//				for (size_t i = 0; i < students.size(); i++)
//				{
//					if (students[i].getid() == id)
//					{
//						student temp;
//						for (size_t j = i; j < students.size() - 1; j++)
//						{
//							temp = students[j + 1];
//							students[j + 1] = students[j];
//							students[j] = temp;
//						}
//						students.pop_back();
//						break;
//					}
//				}
//				groupFile.clear();
//				addTextFile();
//
//			}
//		}
//		catch (const std::exception& ex)
//		{
//			cout << ex.what();
//		}
//	}
//};
//
//
//void main() {
//	student s1("nazim", "nazimov", 25);
//	student s2("qazim", "qazimov", 25);
//	student s3("sazim", "sazimov", 25);
//	vector<student> students{ s1,s2,s3 };
//	group g1("@3cu otaq", students);
//	g1.addTextFile();
//	g1.deleteStudent(1);
//	g1.showTextFile();
//
//}
