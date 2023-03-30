//#include <iostream>
//#include<cassert>
//using namespace std;
//
//class Person {
//public:
//	char* _name = nullptr;
//	char* _surname = nullptr;
//	unsigned short _age = 0;
//	Person() = default;
//	Person(const char* name, const char* surname, unsigned short age) {
//		setName(name);
//		setSurname(surname);
//		_age = age;
//	}
//	//modifiers
//	void setName(const char* name) {
//		if (name == nullptr)
//		{
//			assert(!"Name did not found 404 error");
//		}
//		int NameLen = strlen(name) + 1;
//		_name = new char[NameLen];
//		strcpy_s(_name, NameLen, name);
//	}
//	void setSurname(const char* surname) {
//		if (surname == nullptr)
//		{
//			assert(!"Surname did not found 404 error");
//		}
//		int surnameLen = strlen(surname) + 1;
//		_surname = new char[surnameLen];
//		strcpy_s(_surname, surnameLen, surname);
//	}
//	//methods
//	void printPerson() {
//		cout << "\nName:" << this->_name << endl << "Surname:" << this->_surname << endl << "Age:" << this->_age << endl;
//	}
//};
//class Specialities {
//public:
//	char* _speciality = nullptr;
//	Specialities() = default;
//	Specialities(const char* Speciality)
//	{
//		setSpec(Speciality);
//	}
//	void setSpec(const char* spec) {
//		if (spec == nullptr)
//		{
//			assert(!"Name did not found 404 error");
//		}
//		int SpecLen = strlen(spec) + 1;
//		_speciality = new char[SpecLen];
//		strcpy_s(_speciality, SpecLen, spec);
//	}
//
//	void printSpec() {
//		cout << "Speciality:" << _speciality << endl;
//	}
//
//};
//class WorkName {
//public:
//	char* _workName = nullptr;
//	//Constructors
//	WorkName() = default;
//	WorkName(const char* workName)
//	{
//		setWorkName(workName);
//	}
//	//modifiers
//	void setWorkName(const char* workName) {
//		if (workName == nullptr)
//		{
//			assert(!"Name did not found 404 error");
//		}
//		int workNameLen = strlen(workName) + 1;
//		_workName = new char[workNameLen];
//		strcpy_s(_workName, workNameLen, workName);
//	}
//	//inspectors
//	const char* getWorkName() { return _workName; }
//
//	//methods
//	void printWorker() {
//		cout << "Work name:" << _workName << endl;
//	}
//};
//
//class StepWorker :private Person, private Specialities, private WorkName {
//	static int _sID;
//	int id = 0;
//public:
//	//constructor overloading
//	StepWorker() = default;
//	StepWorker(const char* name, const char* surname, unsigned short age, const char* workName, const char* speciality)
//		:Person(name, surname, age), Specialities(speciality), WorkName(workName) {
//		id = ++_sID;
//	}
//	StepWorker(const char* name, const char* surname, unsigned short age, const char* workName)
//		:Person(name, surname, age), WorkName(workName) {
//		id = ++_sID;
//	}
//	//Inspectors
//	const char* getWorkName() { return this->_workName; }
//	//methods
//	void printStepWorker() {
//		Person::printPerson();
//		WorkName::printWorker();
//		if (Specialities::_speciality != nullptr)
//		{
//			Specialities::printSpec();
//		}
//	}
//};
//int StepWorker::_sID = 0;
//
//class ITStep {                  //1.Teachers.2.Reseption 3.Marketing,4.Security,5.ScrubWoman
//	StepWorker*** Workers;;
//	size_t TeachersSize = 1;
//	size_t ReseptionSize = 1;
//	size_t MarketingSize = 1;
//	size_t SecuritySize = 1;
//	size_t ScrubWomanSize = 1;
//	StepWorker** _IncomingWorkers = nullptr;
//	int _incomingCount = 0;
//public:
//	ITStep(StepWorker** workers, int _count)
//	{
//		Workers = new StepWorker * *[5] {};
//		Workers[0] = new StepWorker * [TeachersSize] {};
//		Workers[1] = new StepWorker * [ReseptionSize] {};
//		Workers[2] = new StepWorker * [MarketingSize] {};
//		Workers[3] = new StepWorker * [SecuritySize] {};
//		Workers[4] = new StepWorker * [ScrubWomanSize] {};
//		_incomingCount = _count;
//		_IncomingWorkers = workers;
//		WorkerPlacing(workers);
//	}
//	//Methods
//	//This methods placing all workers by their worknames for example Teachers placing in the index 0
//	//of the StepWorker*** Workers and Reseptionists index 1 and etc.
//	void WorkerPlacing(StepWorker** Incomingworkers) {
//
//		for (size_t i = 0; i < _incomingCount; i++)
//		{
//
//			if (string(_IncomingWorkers[i]->getWorkName()) == "Teacher")
//			{
//				Workers[0][TeachersSize - 1] = _IncomingWorkers[i];
//				++TeachersSize;
//			}
//			if (string(_IncomingWorkers[i]->getWorkName()) == "Reseption")
//			{
//				Workers[1][ReseptionSize - 1] = _IncomingWorkers[i];
//				++ReseptionSize;
//			}
//			if (string(_IncomingWorkers[i]->getWorkName()) == "Marketing")
//			{
//				Workers[2][MarketingSize - 1] = _IncomingWorkers[i];
//				++MarketingSize;
//			}
//			if (string(_IncomingWorkers[i]->getWorkName()) == "Security")
//			{
//				Workers[3][SecuritySize - 1] = _IncomingWorkers[i];
//				++SecuritySize;
//			}
//			if (string(_IncomingWorkers[i]->getWorkName()) == "Scrubwoman")
//			{
//				Workers[4][ScrubWomanSize - 1] = _IncomingWorkers[i];
//				++ScrubWomanSize;
//			}
//
//		}
//	}
//	//printers
//	void printTeachers() {
//		for (size_t i = 0; i < TeachersSize - 1; i++)
//		{
//			Workers[0][i]->printStepWorker();
//		}
//	}
//	void printReseptionists() {
//		for (size_t i = 0; i < ReseptionSize - 1; i++)
//		{
//			Workers[1][i]->printStepWorker();
//		}
//	}
//	void printMarketers() {
//		for (size_t i = 0; i < MarketingSize - 1; i++)
//		{
//			Workers[2][i]->printStepWorker();
//		}
//	}
//	void printSecurities() {
//		for (size_t i = 0; i < SecuritySize - 1; i++)
//		{
//			Workers[3][i]->printStepWorker();
//		}
//	}
//	void printScrubWomans() {
//		for (size_t i = 0; i < ScrubWomanSize - 1; i++)
//		{
//			Workers[4][i]->printStepWorker();
//		}
//	}
//
//	~ITStep()
//	{
//		for (size_t i = 0; i < TeachersSize-1; i++)
//		{
//			delete Workers[0][i];
//		}
//		for (size_t i = 0; i < ReseptionSize - 1; i++)
//		{
//			delete[]Workers[1][i];
//		}
//		for (size_t i = 0; i < MarketingSize-1; i++)
//		{
//			delete[]Workers[2][i];
//		}
//		for (size_t i = 0; i < SecuritySize - 1; i++)
//		{
//			delete[]Workers[3][i];
//		}
//		for (size_t i = 0; i < ScrubWomanSize - 1; i++)
//		{
//			delete[]Workers[4][i];
//		}
//	
//		for (size_t i = 0; i < _incomingCount; i++)
//		{
//			delete[]_IncomingWorkers[i];
//		}
//	}
//};
//
//void main() {
//	// ITSTEP clasinda workerleri ixtisaslarina gore StepWorker*** pointerinde ayri indexlerde saxlamisham
//	// 0daki Stepworker**de teachers-lerin pointer to pointeri
//	//1de reseption 2de marketing 3de security 4de Xadimeler saxlanilir
//	StepWorker* t1 = new StepWorker("Nazim", "Nazimov", 22, "Teacher", "Programming languages C#,C++,Pyton");
//	StepWorker* t2 = new StepWorker("Mazda", "Mazimov", 22, "Teacher", "IT");
//	StepWorker* t3 = new StepWorker("Qazim", "Nazimov", 22, "Marketing", "Virtual marketing");
//	StepWorker* t4 = new StepWorker("Aygun", "Kazimova", 22, "Scrubwoman");
//	StepWorker* t5 = new StepWorker("Ronaldo", "Neymarov", 29, "Reseption");
//	int size = 5;
//	StepWorker** teachers = new StepWorker * [size] {t1, t2, t3, t4, t5};
//	//t1.printStepWorker();
//	//t2.printStepWorker();
//	ITStep academy(teachers, size);
//	academy.printTeachers();
//	academy.printReseptionists();
//	academy.printMarketers();
//	academy.printSecurities();
//	academy.printScrubWomans();
//}
//
