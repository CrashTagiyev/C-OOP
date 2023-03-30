////#include<iostream>
////#include <cassert>
////
////
////using namespace std;
////class fail
////{
////private:
////	float _credit = 0;
////	char* _subjectName = nullptr;
////public:
////	fail();
////	fail(const char* subjectName, float credit);
////	~fail();
////	//Modifiers
////	void setName(const char* subjectName) {
////		if (subjectName == nullptr)
////		{
////			assert(!"Name did not found");
////		}
////		if (_subjectName != nullptr)
////		{
////			delete[]_subjectName;
////		}
////		size_t len = strlen(subjectName) + 1;
////		_subjectName = new char[len];
////		strcpy_s(_subjectName, len, subjectName);
////	}
////	void setCredit(float credit) {
////
////		if (credit > 0)
////		{
////			_credit = credit;
////		}
////		else
////		{
////			assert(!"Credit must be higher than 0");
////		}
////	}
////	//methods
////	void printFail() {
////		cout << "\nSubjectName:" << _subjectName ? _subjectName : "NUll";
////		cout << "\nCredit:" << _credit << endl;
////	}
////};
////fail::fail() {}
////
////fail::fail(const char* subjectName, float credit)
////{
////	setName(subjectName);
////	setCredit(credit);
////
////}
////
////fail::~fail()
////{
////	//cout << "Destructed->" << _subjectName ? _subjectName : "NULL";
////	delete[]_subjectName;
////	_subjectName = nullptr;
////
////}
////
////class Student
////{
////private:
////	static size_t _Staticid;
////	size_t _id;
////	char* _name = nullptr;
////	char* _surname = nullptr;
////	char* _bday = nullptr;
////	fail** _fails;
////	size_t _failCounts = 0;
////public:
////	Student(const char* name, const char* Surname, const char* bday, fail** fails, size_t failCounts);
////	//modifiers
////	void setName(const char* name) {
////		if (name == nullptr)
////		{
////			assert(!"Name did not found");
////		}
////		if (_name != nullptr)
////		{
////			delete[]_name;
////		}
////		size_t len = strlen(name) + 1;
////		_name = new char[len];
////		strcpy_s(_name, len, name);
////	}
////	void setSname(const char* surname)
////	{
////		if (surname == nullptr)
////		{
////			assert(!"Name did not found");
////		}
////		if (_surname != nullptr)
////		{
////			delete[]_surname;
////		}
////		size_t len = strlen(surname) + 1;
////		_surname = new char[len];
////		strcpy_s(_surname, len, surname);
////	}
////	void setBday(const char* bday)
////	{
////		if (bday == nullptr)
////		{
////			assert(!"Name did not found");
////		}
////		if (_bday != nullptr)
////		{
////			delete[]_bday;
////		}
////		size_t len = strlen(bday) + 1;
////		_bday = new char[len];
////		strcpy_s(_bday, len, bday);
////	}
////	void setFails(fail** fails)
////	{
////		if (fails == nullptr)
////		{
////			assert(!"Fails null error");
////		}
////		_fails = fails;
////	}
////	//inspectors
////	size_t getID() { return _id; }
////	//Methods
////	void printStudent()
////	{
////		cout << "\nName:" << _name ? _name : "Null";
////		cout << "\nSurname:" << _surname ? _surname : "Null";
////		cout << "\nBirthday" << _bday ? _bday : "NUll";
////		cout << "\nCount of the fails:" << _failCounts << endl;
////	}
////	void printFails()
////	{
////		int lenfails = sizeof(_fails) / sizeof(_fails[0]);
////		for (size_t i = 0; i < lenfails; i++)
////		{
////			_fails[i]->printFail();
////		}
////	}
////	~Student();
////
////
////};
////size_t Student::_Staticid = 0;
////Student::Student(const char* name, const char* Surname, const char* bday, fail** fails, size_t failCounts)
////{
////	_id = ++_Staticid;
////	setName(name);
////	setSname(Surname);
////	setBday(bday);
////	setFails(fails);
////	_failCounts = failCounts;
////}
////
////Student::~Student()
////{
////	//cout << "Destructed->" << endl << _name << endl << _surname << endl << _bday << endl;
////	for (size_t i = 0; i < _failCounts; i++)
////	{
////		_fails[i] = nullptr;
////	}
////	for (size_t i = 0; i < _failCounts; i++)
////	{
////		delete[]_fails[i];
////	}
////	delete[]_name;
////	delete[]_surname;
////	delete[]_bday;
////	_name = nullptr;
////	_surname = nullptr;
////	_bday = nullptr;
////
////}
////
////class Teacher
////{
////private:
////	static size_t _StaticID;
////	size_t id;
////	char* _name = nullptr;
////	char* _surname = nullptr;
////	char* _ixtisas = nullptr;
////public:
////	Teacher(const char* name, const char* surname, const char* ixtisas);
////	//modifiers
////	void setName(const char* name) {
////
////		if (name == nullptr)
////		{
////			assert(!"Name did not found");
////		}
////		if (_name != nullptr)
////		{
////			delete[]_name;
////		}
////		size_t len = strlen(name) + 1;
////		_name = new char[len];
////		strcpy_s(_name, len, name);
////	}
////	void setSurname(const char* surname)
////	{
////		if (surname == nullptr)
////		{
////			assert(!"Name did not found");
////		}
////		if (_surname != nullptr)
////		{
////			delete[]_surname;
////		}
////		size_t len = strlen(surname) + 1;
////		_surname = new char[len];
////		strcpy_s(_surname, len, surname);
////	}
////	void setIxtisas(const char* ixtisas)
////	{
////		if (ixtisas == nullptr)
////		{
////			assert(!"Name did not found");
////		}
////		if (_ixtisas != nullptr)
////		{
////			delete[]_ixtisas;
////		}
////		size_t len = strlen(ixtisas) + 1;
////		_ixtisas = new char[len];
////		strcpy_s(_ixtisas, len, ixtisas);
////	}
////	//methods
////	void printInfo() {
////		cout << "\nId:" << id;
////		cout << "\nName:" << _name ? _name : "null";
////		cout << "\nSurname:" << _surname ? _surname : "null";
////		cout << "\nIxtisas:" << _ixtisas ? _ixtisas : "null";
////	}
////	~Teacher();
////
////
////};
////size_t Teacher::_StaticID = 0;
////Teacher::Teacher(const char* name, const char* surname, const char* ixtisas)
////{
////	id = ++_StaticID;
////	setName(name);
////	setSurname(surname);
////	setIxtisas(ixtisas);
////}
////
////Teacher::~Teacher()
////{
////	//cout << "Destructed->\n" << _name << endl << _surname << endl << _ixtisas;
////	delete[]_name;
////	delete[]_surname;
////	delete[]_ixtisas;
////	_name = nullptr;
////	_surname = nullptr;
////	_ixtisas = nullptr;
////}
////
////class Group
////{
////private:
////	static size_t _StaticID;
////	size_t _Id;
////	size_t _StudentsCount;
////	Teacher* _teacher;
////public:
////	Student** _students;
////	char* _name = nullptr;
////	Group(const char* name, Student** students, Teacher* teacher, size_t StudentsCount);
////	//modifiers
////	//methods
////	Group(Group& otherGroup)noexcept;
////	
////	void setName(const char* name) {
////		if (name == nullptr)
////		{
////			assert(!"Name did not found");
////		}
////		if (_name != nullptr)
////		{
////			delete[]_name;
////		}
////		size_t len = strlen(name) + 1;
////		_name = new char[len];
////		strcpy_s(_name, len, name);
////	}
////	void printfailsByID(size_t id) {
////		for (size_t i = 0; i < _StudentsCount; i++)
////		{
////			if (id == _students[i]->getID())
////			{
////				_students[i]->printFails();
////			}
////		}
////	}
////	void printTeacherInfo() { _teacher->printInfo(); }
////	void printStudents() {
////		for (size_t i = 0; i < _StudentsCount; i++)
////		{
////			_students[i]->printStudent();
////		}
////	}
////	~Group();
////
////
////};
////size_t Group::_StaticID = 0;
////Group::Group(const char* name, Student** students, Teacher* teacher, size_t StudentsCount)
////{
////	_Id = ++_StaticID;
////	setName(name);
////	_students = students;
////	_teacher = teacher;
////	_StudentsCount = StudentsCount;
////	
////}
////Group::Group(Group& otherGroup) noexcept {
////	_Id = ++_StaticID;
////	size_t len = strlen(otherGroup._name) + 1;
////	delete[]_name;
////	_name = new char[len];
////	strcpy_s(_name, len, otherGroup._name);
////	_students = otherGroup._students;
////	_teacher = otherGroup._teacher;
////	_StudentsCount = otherGroup._StudentsCount;
////	otherGroup._name = nullptr;
////	otherGroup._students = nullptr;
////	otherGroup._teacher = nullptr;
////	otherGroup._StudentsCount = 0;
////}
////Group::~Group()
////{
////	//cout << "\nDestructed->\n" << _name << endl << "Students" << endl << "Teacher" << endl;
////	delete[]_name;
////	delete[]_students;
////	_students = nullptr;
////	delete _teacher;
////	_teacher = nullptr;
////
////}
////void main() {
////	fail* fail1 = new fail("Fizika", 50);
////	fail* fail2 = new fail("Yeni tarix", 50);
////	fail* fail3 = new fail("edebiyat", 50);
////	fail* fail4 = new fail("elifba", 50);
////	fail* fail5 = new fail("vurma cedveli", 50);
////	fail* fail6 = new fail("c++ oop", 50);
////
////	int size = 3;
////	int size2 = 3;
////	fail** fails = new fail * [size] {fail1, fail2, fail3};
////	fail** fails2 = new fail * [size2] {fail4, fail5, fail6};
////	Student s1("Nazim", "Nazimov", "12,04,1999", fails, size);
////	Student s2("Qazim", "Qazimov", "11,12,2000", fails2, size2);
////
////	int studentSize = 2;
////	Student** students = new Student * [studentSize] {&s1, & s2};
////
////	Teacher* teach = new Teacher("name", "namov", "Fizika muellimi");
////
////	Group group("23cu otaq", students, teach, studentSize);
////
////	Group group3(group);
////
////	group3.printStudents();
////	//group.printStudents();
////}