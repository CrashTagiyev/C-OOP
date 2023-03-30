//#include<iostream>
//#include<cassert>
//
//using namespace std;
//
//class BankCard {
//
//	char* _BankName = nullptr;
//	char* _PAN = nullptr;
//	char* _PIN = nullptr;
//	char* _CVC = nullptr;
//	char* _ExpireDate = nullptr;
//	double _balans = 0;
//public:
//	BankCard() {}
//	BankCard(const char* BankName, const char* PAN, const char* PIN, const char* CVC, const char* ExpireDate)
//	{
//		setName(BankName);
//		setPan(PAN);
//		setPin(PIN);
//		setCVC(CVC);
//		setExpireDate(ExpireDate);
//	}
//	void setName(const char* BankName) {
//		if (BankName == nullptr)
//		{
//			assert(!"BAnk name did not found");
//		}
//
//		if (_BankName != nullptr)
//		{
//			delete[]_BankName;
//		}
//		int len = strlen(BankName) + 1;
//		_BankName = new char[len] {};
//		strcpy_s(_BankName, len, BankName);
//	}
//	void setPan(const char* PAN) {
//		if (PAN == nullptr)
//		{
//			assert(!"PAN did not found");
//		}
//		if (strlen(PAN) != 16)
//		{
//			assert(!"PAN must be 16 number");
//		}
//		for (size_t i = 0; i < strlen(PAN); i++)
//		{
//			if (!(PAN[i] >= '0' and PAN[i] <= '9'))
//			{
//				assert(!"PAN must be only numbers");
//			}
//		}
//		if (_PAN != nullptr)
//		{
//			delete[]_PAN;
//		}
//		int len = strlen(PAN) + 1;
//		_PAN = new char[len] {};
//		strcpy_s(_PAN, len, PAN);
//	}
//	void setPin(const char* PIN) {
//		if (PIN == nullptr)
//		{
//			assert(!"BAnk name did not found");
//		}
//		if (strlen(PIN) != 4)
//		{
//			assert(!"PIN must be 4 number");
//		}
//		for (size_t i = 0; i < strlen(PIN); i++)
//		{
//			if (!(PIN[i] >= '0' and PIN[i] <= '9'))
//			{
//				assert(!"PIN must be  only numbers");
//			}
//		}
//		if (_PIN != nullptr)
//		{
//			delete[]_PIN;
//		}
//		int len = strlen(PIN) + 1;
//		_PIN = new char[len] {};
//		strcpy_s(_PIN, len, PIN);
//	}
//	void setCVC(const char* CVC) {
//		if (CVC == nullptr)
//		{
//			assert(!"BAnk name did not found");
//		}
//		if (strlen(CVC) != 3)
//		{
//			assert(!"CVC must be 3 number");
//		}
//		for (size_t i = 0; i < strlen(CVC); i++)
//		{
//			if (!(CVC[i] >= '0' and CVC[i] <= '9'))
//			{
//				assert(!"CVC must be  only numbers");
//			}
//		}
//		if (_CVC != nullptr)
//		{
//			delete[]_CVC;
//		}
//		int len = strlen(CVC) + 1;
//		_CVC = new char[len] {};
//		strcpy_s(_CVC, len, CVC);
//	}
//	void setExpireDate(const char* ExpireDate) {
//		if (ExpireDate == nullptr)
//		{
//			assert(!"BAnk name did not found");
//		}
//		for (size_t i = 0; i < strlen(ExpireDate); i++)
//		{
//			if (ExpireDate[i] >= '0' and ExpireDate[i] <= '9' or ExpireDate[i] == '/')
//			{
//				continue;
//			}
//			else
//			{
//				assert(!"wrong data type");
//			}
//		}
//		if (_ExpireDate != nullptr)
//		{
//			delete[]_ExpireDate;
//		}
//		int len = strlen(ExpireDate) + 1;
//		_ExpireDate = new char[len] {};
//		strcpy_s(_ExpireDate, len, ExpireDate);
//	}
//
//	const char* GetPin() { return _PIN; }
//	double getBalans() { return _balans; }
//	void print() {
//
//		cout << "\nBank name:" << _BankName ? _BankName : "Null";
//		cout << "\nPAN:" << _PAN ? _PAN : "Null";
//		cout << "\nPIN:" << _PIN ? _PIN : "NUll";
//		cout << "\nCVC:" << _CVC ? _CVC : "NUll";
//		cout << "\nExpireDate:" << _ExpireDate ? _ExpireDate : "NUll";
//		cout << "\nBalans:" << _balans << " AZN";
//	}
//};
//
//class client {
//
//	static int _StaticID;
//	size_t _id = 0;
//	char* _Name = nullptr;
//	char* _Surname = nullptr;
//	size_t _age = 0;
//	double _salary = 0;
//	BankCard* _BankAccount;
//public:
//	client(const char* Name, const char* Surname, size_t age, double salary, BankCard* BankAccount)
//	{
//		_id = ++_StaticID;
//		setName(Name);
//		setSName(Surname);
//		setAccount(BankAccount);
//		setAge(age);
//		setSalary(salary);
//
//	}
//
//	//Modifiers
//	void setName(const char* Name) {
//		if (Name == nullptr)
//		{
//			assert(!"BAnk name did not found");
//		}
//		for (size_t i = 0; i < strlen(Name); i++)
//		{
//			if (Name[i] >= '0' && Name[i] <= '9')
//			{
//				assert(!"Name cannot have a number inside");
//			}
//		}
//		if (_Name != nullptr)
//		{
//			delete[]_Name;
//		}
//		int len = strlen(Name) + 1;
//		_Name = new char[len] {};
//		strcpy_s(_Name, len, Name);
//	}
//	void setSName(const char* Surname) {
//		if (Surname == nullptr)
//		{
//			assert(!"BAnk name did not found");
//		}
//
//		if (_Surname != nullptr)
//		{
//			delete[]_Surname;
//		}
//		int len = strlen(Surname) + 1;
//		_Surname = new char[len] {};
//		strcpy_s(_Surname, len, Surname);
//	}
//	void setAccount(BankCard* BankAccount) {
//		_BankAccount = BankAccount;
//	}
//	void setAge(size_t age) {
//		if (age < 18)
//		{
//			assert(!"Only 18 year or older people can register");
//		}
//		else
//		{
//			_age = age;
//		}
//
//	}
//	void setSalary(double salary) {
//		if (salary < 300)
//		{
//			assert(!"Minimum emek Haqqi must be higher than 300");
//		}
//	}
//
//	//Inspectors
//	BankCard* getCard() { return _BankAccount; }
//	size_t getID() { return _id; }
//
//};
//
//int client::_StaticID = 0;
//
//class Bank {
//	client** _clients;
//	size_t _clientCount;
//	char* pin = 0;
//	size_t currentID = 0;
//public:
//	Bank(client** clients, size_t clientCount) {
//		_clients = clients;
//		_clientCount = clientCount;
//		Bankomat();
//	}
//	void Bankomat() {
//		char* WritePin = new char[5];
//		cout << "Write PIN code:";
//		cin.getline(WritePin, 4);
//		bool provePin = false;
//		for (size_t i = 0; i < _clientCount; i++)
//		{
//			for (size_t j = 0; j < 4; j++)
//			{
//				if (WritePin[j] == _clients[i]->getCard()->GetPin()[j])
//				{
//					provePin = true;
//				}
//				else
//				{
//					provePin = false;
//					break;
//				}
//			}
//			if (WritePin)
//			{
//				currentID = _clients[i]->getID();
//				strcpy_s(pin, 4, WritePin);
//				break;
//			}
//		}
//		if (provePin)
//		{
//
//			cout << "Pin is right";
//			showCardBalance();
//
//		}
//		else
//		{
//			assert(!"Wrong PIN");
//		}
//	}
//	void BankomatChoises() {
//
//	}
//	void showCardBalance() {
//		cout << _clients[currentID]->getCard()->getBalans() << " AZN";
//	}
//};
//
//void main() {
//
//	BankCard* card1 = new BankCard("StepBank", "1234567891234567", "1234", "123", "11/06/2023");
//	BankCard* card2 = new BankCard("StepBank2", "1789456123123456", "4321", "321", "11/06/2025");
//
//	client client1("Nazim", "Nazimov", 19, 333, card1);
//	client client2("Qazim", "Qazimov", 69, 600, card2);
//
//	int size = 2;
//	client** clients = new client * [size] {&client1, & client2};
//
//	Bank walvarBank(clients, size);
//}