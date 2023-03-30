//#include <iostream>
//#include<cassert>
//
//
//using namespace std;
//
//
//class Debtor {
//private:
//	size_t _id;
//	char* _name = nullptr;
//	char* _surname = nullptr;
//	char* _workAddress = nullptr;
//	char* _liveAddress = nullptr;
//	char* _phoneNumber = nullptr;
//	double _salary;
//	bool _hasLatePayment;
//	double _debt;
//	static size_t _staticId;
//public:
//	Debtor(const char* name, const char* surname, const char* phoneNumber, bool hasLatePayment, double debt) {
//		_id = ++_staticId;
//		setName(name);
//		setSurname(surname);
//		setPhoneNumber(phoneNumber);
//		setHasLatePayment(hasLatePayment);
//		SetDebt(debt);
//	}
//	Debtor(const char* name, const char* surname, const char* workAddress, const char* phoneNumber, bool hasLatePayment, double debt)
//		:Debtor(name, surname, phoneNumber, hasLatePayment, debt)
//	{
//		_id = ++_staticId;
//		setWorkAddress(workAddress);
//	}
//	Debtor(const char* name, const char* surname, const char* workAddress, const char* liveAddress, const char* phoneNumber, bool hasLatePayment, double debt)
//		:Debtor(name, surname, workAddress, phoneNumber, hasLatePayment, debt)
//	{
//		_id = ++_staticId;
//		setLiveAddress(liveAddress);
//	}
//	Debtor(const char* name, const char* surname, const char* workAddress, const char* liveAddress, const char* phoneNumber, double salary, bool hasLatePayment, double debt)
//		:Debtor(name, surname, workAddress, liveAddress, phoneNumber, hasLatePayment, debt)
//	{
//		_id = ++_staticId;
//		setSalary(salary);
//	}
//
//	//Modifiers
//	void setName(const char* name) {
//		if (name == nullptr)
//		{
//			assert(!"Name did not found error,Please write the name");
//		}
//		if (_name != nullptr)
//		{
//			delete[]_name;
//		}
//		int len = strlen(name) + 1;
//		_name = new char[len];
//		strcpy_s(_name, len, name);
//	}
//	void setSurname(const char* surname) {
//		if (surname == nullptr)
//		{
//			assert(!"Name did not found error,Please write the name");
//		}
//		if (_surname != nullptr)
//		{
//			delete[]_surname;
//		}
//		int len = strlen(surname) + 1;
//		_surname = new char[len];
//		strcpy_s(_surname, len, surname);
//	}
//	void setWorkAddress(const char* workAddress) {
//		if (workAddress == nullptr)
//		{
//			assert(!"Name did not found error,Please write the name");
//		}
//		if (_workAddress != nullptr)
//		{
//			delete[]_workAddress;
//		}
//		int len = strlen(workAddress) + 1;
//		_workAddress = new char[len];
//		strcpy_s(_workAddress, len, workAddress);
//	}
//	void setLiveAddress(const char* liveAddress) {
//		if (liveAddress == nullptr)
//		{
//			assert(!"Name did not found error,Please write the name");
//		}
//		if (_liveAddress != nullptr)
//		{
//			delete[]_liveAddress;
//		}
//		int len = strlen(liveAddress) + 1;
//		_liveAddress = new char[len];
//		strcpy_s(_liveAddress, len, liveAddress);
//	}
//	void setPhoneNumber(const char* phoneNumber) {
//		if (phoneNumber == nullptr)
//		{
//			assert(!"Name did not found error,Please write the name");
//		}
//		if (_phoneNumber != nullptr)
//		{
//			delete[]_phoneNumber;
//		}
//		int len = strlen(phoneNumber) + 1;
//		_phoneNumber = new char[len];
//		strcpy_s(_phoneNumber, len, phoneNumber);
//	}
//	void setSalary(double salary) {
//		if (salary <= 0)
//		{
//			assert(!"Salary must be higher than 0");
//		}
//		_salary = salary;
//	}
//	void setHasLatePayment(bool hasLatePayment) {
//		hasLatePayment ? _hasLatePayment = true : _hasLatePayment = false;
//	}
//	void SetDebt(double debt) {
//		_debt = debt;
//	}
//	//inspectors
//	double getDebt() { return _debt; }
//	bool getLatePayments() { return _hasLatePayment; }
//	//methods
//	void print() {
//		cout << "\nName:" << _name ? _name : "Null";
//		cout << "\nSurname:" << _surname ? _surname : "Null";
//		cout << "\nWork Addres:" << _workAddress ? _workAddress : "Null";
//		cout << "\nLive Address:" << _liveAddress ? _liveAddress : "NUll";
//		cout << "\nPhone number:" << _phoneNumber ? _phoneNumber : "Null";
//		if (_salary > 0) { cout << "\nSalary:" << _salary << " AZN"; }
//		else cout << "\nSalary did not found";
//		if (_hasLatePayment) { cout << "\nHave a late payment"; }
//		else cout << "\nNo late payment";
//		if (_debt > 0)cout << "\nTotal debt:" << _debt << "AZN";
//		else cout << "\nNo debt";
//	}
//	//copy
//	Debtor& operator=(Debtor& otherDebtor) {
//		setName(otherDebtor._name);
//		setSurname(otherDebtor._surname);
//		setWorkAddress(otherDebtor._workAddress);
//		setLiveAddress(otherDebtor._liveAddress);
//		setPhoneNumber(otherDebtor._phoneNumber);
//		setSalary(otherDebtor._salary);
//		setHasLatePayment(otherDebtor._hasLatePayment);
//		SetDebt(otherDebtor._debt);
//	}
//	~Debtor() {
//		cout << "Detructed ->" << _name << endl;
//		cout << "Detructed ->" << _surname << endl;
//		cout << "Detructed ->" << _workAddress << endl;
//		cout << "Detructed ->" << _liveAddress << endl;
//		cout << "Detructed ->" << _phoneNumber << endl;
//
//		delete[]_name;
//		delete[]_surname;
//		delete[]_workAddress;
//		delete[]_liveAddress;
//		delete[]_phoneNumber;
//	}
//};
//size_t Debtor::_staticId = 1;
//
//class Bank {
//private:
//	char* _BankName = nullptr;
//	Debtor** _debtors = nullptr;
//	size_t _count;
//public:
//	Bank(const char* BankName, Debtor** debtors, size_t count) {
//
//		setBankName(BankName);
//		setDebtors(debtors);
//		setCount(count);
//	}
//	//modifiers
//	void setBankName(const char* BankName) {
//		if (BankName == nullptr)
//		{
//			assert(!"Bank name did not found");
//		}
//		if (_BankName != nullptr)
//		{
//			delete[]_BankName;
//		}
//		size_t len = strlen(BankName) + 1;
//		_BankName = new char[len];
//		strcpy_s(_BankName, len, BankName);
//	}
//	void setDebtors(Debtor** debtors) {
//		_debtors = debtors;
//	}
//	void setCount(size_t count) {
//		if (count > 0)
//		{
//			_count = count;
//		}
//		else
//		{
//			assert(!"count must be higher than 0");
//		}
//	}
//	//methods
//	void printAllDebtors() {
//		for (size_t i = 0; i < _count; i++)
//		{
//			cout << endl;
//			_debtors[i]->print();
//		}
//	}
//	void printDebtGreaterThan(double debt) {
//		for (size_t i = 0; i < _count; i++)
//		{
//			if (_debtors[i]->getDebt() > debt)
//			{
//				_debtors[i]->print();
//			}
//		}
//	}
//	void printDebtorsWithDelay() {
//		for (size_t i = 0; i < _count; i++)
//		{
//			if (_debtors[i]->getLatePayments())
//			{
//				_debtors[i]->print();
//			}
//		}
//	}
//	//destructor
//	~Bank() {
//		cout << "Detructed ->BankName:" << _BankName << endl;
//		cout << "Detructed ->Debtors:" << _debtors << endl;
//		delete[]_BankName;
//		delete[]_debtors;
//	}
//};
//
//void main() {
//	Debtor* d1 = new Debtor("Qazim", "Qazimov", "genclik", "28may", "0502282828", 300, true, 120);
//	Debtor* d2 = new Debtor("Sazim", "Sazimov", "genclik", "28may", "0502282525", 300, false, 0);
//	Debtor* d3 = new Debtor("Nazim", "Nazimov", "genclik", "28may", "0502282323", 300, true, 3000);
//	Debtor* d4 = new Debtor("Vazim", "Vazimov", "genclik", "28may", "0502282020", 300, false, 982);
//
//	//Copy----
//	Debtor* d5 = d1;
//	//-------
//	int count = 4;
//	Debtor** debtors = new Debtor * [4] {d1, d2, d3, d4};
//
//	Bank Bank("WebzulBank", debtors, count);
//	//Bank.printAllDebtors();
//	//Bank.printDebtGreaterThan(100);
//	//Bank.printDebtorsWithDelay();
//}