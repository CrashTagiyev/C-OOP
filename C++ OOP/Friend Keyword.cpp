//#include <iostream>
//#include<cassert>
//
//using namespace std;
//
//enum choices {
//	Balance = 1, Cash, MoneyTransfer, UserChange, UserInfo, Exit
//};
//
//
//class BankCard {
//
//	char* _BankName = nullptr;
//	char* _PAN = nullptr;
//	char* _PIN = nullptr;
//	char* _CVC = nullptr;
//	char* _ExpireDate = nullptr;
//	double _balans = 0;
//	friend class Bankomat;
//public:
//	BankCard() {}
//	BankCard(const char* BankName, const char* PAN, const char* PIN, const char* CVC, const char* ExpireDate, double balans)
//	{
//		setName(BankName);
//		setPan(PAN);
//		setPin(PIN);
//		setCVC(CVC);
//		setExpireDate(ExpireDate);
//		_balans = balans;
//	}
//	//Modifiers
//	void setName(const char* BankName) {
//		if (BankName == nullptr)
//		{
//			assert(!"BAnk name did not found");
//		}
//		for (size_t i = 0; i < strlen(BankName); i++)
//		{
//			if (!(BankName[i] >= 'a' && BankName[i] <= 'z' || BankName[i] >= 'A' && BankName[i] <= 'Z'))
//			{
//				assert(!"Name must have only letters");
//			}
//		}
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
//	//Inspectors
//	const char* getBankName() { return _BankName; }
//	const char* getPan() { return _PAN; }
//	const char* GetPin() { return _PIN; }
//	const char* getCVC() { return _CVC; }
//	const char* getEDate() { return _ExpireDate; }
//	double getBalans() { return _balans; }
//	//Methods
//	void print() {
//
//		cout << "\nBank name:" << _BankName ? _BankName : "Null";
//		cout << "\nPAN:" << _PAN ? _PAN : "Null";
//		cout << "\nPIN:" << _PIN ? _PIN : "NUll";
//		cout << "\nCVC:" << _CVC ? _CVC : "NUll";
//		cout << "\nExpireDate:" << _ExpireDate ? _ExpireDate : "NUll";
//		cout << "\nBalans:" << _balans << " AZN";
//	}
//	//Operator overloads
//	void operator=(BankCard& other) {
//		setName(other._BankName);
//		setPan(other._PAN);
//		setPin(other._PIN);
//		setCVC(other._CVC);
//		setExpireDate(other._ExpireDate);
//		_balans = other._balans;
//	}
//	~BankCard() {
//		//cout << "Destructed->";
//		_BankName = _PAN = _PIN = _CVC = _ExpireDate = nullptr;
//		delete[]_BankName;
//		delete[]_PAN;
//		delete[]_PIN;
//		delete[]_CVC;
//		delete[]_ExpireDate;
//
//	}
//};
//
//class User {
//private:
//	char* _name;
//	char* _surname;
//	void setName(const char* name);
//	void setSname(const char* surname);
//public:
//	BankCard _CreditCard;
//	User() = default;
//	User(const char* name, const char* surname, BankCard CreditCard) {
//		setName(name);
//		setSname(surname);
//		_CreditCard = CreditCard;
//
//	}
//	void printCardInfo();
//	const char* getName() { return _name; }
//	const char* getSName() { return _surname; }
//
//};
//
//void User::setName(const char* name) {
//	if (name == nullptr)
//	{
//		assert(!" name did not found");
//	}
//	for (size_t i = 0; i < strlen(name); i++)
//	{
//		if (!(name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z'))
//		{
//			assert(!"Name must have only letters");
//		}
//	}
//	if (_name != nullptr)
//	{
//		delete[]_name;
//	}
//	int len = strlen(name) + 1;
//	_name = new char[len] {};
//	strcpy_s(_name, len, name);
//}
//
//void User::setSname(const char* surname) {
//	if (surname == nullptr)
//	{
//		assert(!"Bank name did not found");
//	}
//	for (size_t i = 0; i < strlen(surname); i++)
//	{
//		if (!(surname[i] >= 'a' && surname[i] <= 'z' || surname[i] >= 'A' && surname[i] <= 'Z'))
//		{
//			assert(!"SurName must have only letters inside");
//		}
//	}
//	if (_surname != nullptr)
//	{
//		delete[]_surname;
//	}
//	int len = strlen(surname) + 1;
//	_surname = new char[len] {};
//	strcpy_s(_surname, len, surname);
//}
//
//void User::printCardInfo() {
//	cout << endl << _name << endl;
//	cout << _surname << endl;
//	_CreditCard.print();
//}
//
//class Bankomat {
//	User** _users;
//	size_t _usersCount;
//	int _IndexUser = 0;
//	bool loop = true;
//public:
//	Bankomat(User** users, size_t usersCount)
//	{
//		_users = users;
//		_usersCount = usersCount;
//		_IndexUser = pinCheck();
//		while (loop)
//		{
//			Choices(_IndexUser);
//		}
//	}
//	//Methods
//private:
//	int pinCheck() {
//		char* writePiN = new char[5] {};
//
//
//
//		int wrongtry = 3;
//		int pingrab = 0;
//		for (size_t i = 0; i < 4; i++)
//		{
//			cout << "Write the pin:";
//			cin.getline(writePiN, 5);
//
//
//			if (!pinIsNumeric(writePiN)) { assert(!"PIN must be numberic error"); }
//			if (strlen(writePiN) > 4 || strlen(writePiN) < 4) { assert(!"PIN must be a 4 number"); }
//			pingrab = pinCompare(writePiN);
//			if (pingrab >= 0)
//			{
//				cout << "Welcome " << _users[pingrab]->getName() << " " << _users[pingrab]->getSName() << endl << "saaa";
//				return pingrab;
//			}
//			else
//			{
//				--wrongtry;
//
//				if (wrongtry == 0)
//				{
//					assert(!"Card is blocked");
//				}
//				cout << "Wrong pin you have " << wrongtry << " tries left";
//				continue;
//			}
//		}
//
//
//	}
//	int panCheck() {
//		char* writePAN = new char[17] {};
//
//
//
//		int wrongtry = 3;
//		int pangrab = 0;
//
//		cout << "Write the 16 numbered PAN code:";
//		cin.getline(writePAN, 17);
//
//
//		pangrab = panCompare(writePAN);
//		if (!panIsNumeric(writePAN)) { assert(!"PAN must be numberic error"); }
//		if (strlen(writePAN) > 16 || strlen(writePAN) < 16) { assert(!"PAN must 16 number only"); }
//		if (pangrab >= 0)
//		{
//			return pangrab;
//		}
//		else
//		{
//			cout << "Pan did not found";
//
//		}
//
//	}
//	bool pinIsNumeric(const char* WritePIN) {
//		int PinLen = strlen(WritePIN);
//		for (size_t i = 0; i < PinLen; i++)
//		{
//			if ((WritePIN[i] >= '0' && WritePIN[i] <= '9'))
//			{
//				continue;
//			}
//			else
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//	bool panIsNumeric(const char* WritePAN) {
//
//		int PanLen = strlen(WritePAN);
//		for (size_t i = 0; i < PanLen; i++)
//		{
//			if ((WritePAN[i] >= '0' && WritePAN[i] <= '9'))
//			{
//				continue;
//			}
//			else
//			{
//				return false;
//			}
//		}
//		return true;
//
//	}
//	//pin and pan compare return index of the user that write true pin or pancode
//	int pinCompare(const char* writePIN) {
//
//		bool prove = false;
//		for (size_t i = 0; i < _usersCount; i++)
//		{
//			for (size_t j = 0; j < 4; j++)
//			{
//				if (_users[i]->_CreditCard.GetPin()[j] == writePIN[j])
//				{
//					prove = true;
//				}
//				else
//				{
//					prove = false;
//					break;
//				}
//			}
//			if (prove)
//			{
//				return i;
//			}
//		}
//		return -1;
//
//	}
//	int panCompare(const char* writePAN) {
//
//		bool prove = false;
//		for (size_t i = 0; i < _usersCount; i++)
//		{
//			for (size_t j = 0; j < 16; j++)
//			{
//				if (_users[i]->_CreditCard.getPan()[j] == writePAN[j])
//				{
//					prove = true;
//				}
//				else
//				{
//					prove = false;
//					break;
//				}
//			}
//			if (prove)
//			{
//				return i;
//			}
//		}
//		return -1;
//	}
//	//choices
//	void Choices(int indexUser) {
//		int choice = 0;
//
//		cout << "\n1.Balans:";
//		cout << "\n2.Cash money:";
//		cout << "\n3.Money transfer to another user:";
//		cout << "\n4.User change(log in to another user):";
//		cout << "\n5.User info";
//		cout << "\n6.Exit:";
//		cin >> choice;
//		switch (choice)
//		{
//		case Balance:cout << _users[indexUser]->_CreditCard.getBalans() << " AZN"; break;
//		case Cash:cashMoney(_users[indexUser]->_CreditCard); break;
//		case MoneyTransfer:moneyTransfer(); break;
//		case UserChange:changeUser(); break;
//		case UserInfo:_users[indexUser]->printCardInfo(); break;
//		case Exit:loop = false; return;
//		}
//	}
//	void cashMoney(BankCard& user) {
//		int choiceMoney;
//		int howMuch;
//		cout << "\n1:10 azn" << endl;
//		cout << "\n2:20 azn" << endl;
//		cout << "\n3:50 azn" << endl;
//		cout << "\n4:100 azn" << endl;
//		cout << "\n5:Istedeyiniz meblej" << endl;
//		cin >> choiceMoney;
//		switch (choiceMoney)
//		{
//		case 1:cout << "10 azn chekildi."; user._balans -= 10; break;
//		case 2:cout << "20 azn chekildi."; user._balans -= 20; break;
//		case 3:cout << "50 azn chekildi."; user._balans -= 50; break;
//		case 4:cout << "100 azn chekildi."; user._balans -= 100; break;
//		case 5:
//			cout << "How much money do you want to cash";
//			cin >> howMuch;
//			if (howMuch > user._balans)
//			{
//				cout << "not enough money";
//				return;
//			}
//			else if (howMuch < 1)
//			{
//				cout << "write number higher than 0";
//				return;
//			}
//			else
//			{
//				cout << "Chekildi:" << howMuch << " azn";
//				return;
//			}
//		}
//
//	}
//	void moneyTransfer() {
//		int indexToTransfer = -1;
//		int howmuch = 0;
//		cin.ignore();
//		indexToTransfer = panCheck();
//		if (indexToTransfer > -1)
//		{
//			cout << "\nhow much money do you want to transfer:";
//			cin >> howmuch;
//			if (howmuch > _users[_IndexUser]->_CreditCard._balans)
//			{
//				cout << "\nnot enough money";
//				Choices(_IndexUser);
//			}
//			else
//			{
//				cout << "\nmonmey is transferred successfully";
//				_users[_IndexUser]->_CreditCard._balans -= howmuch;
//				_users[indexToTransfer]->_CreditCard._balans += howmuch;
//			}
//		}
//	}
//	void changeUser() {
//		cin.ignore();
//		_IndexUser = pinCheck();
//		Choices(_IndexUser);
//	}
//
//	//destructor problem verir daha etrafli basha dushmeliyem.
//};
//void main() {
//	                 //bankname     16 number PAN   PIN      CVC  expire date balance
//	BankCard capcart("capital", "1234123412341234", "3214", "123", "2023/07", 50000);
//	BankCard Tamkart("abb", "1234123412341236", "1234", "123", "2023/07", 300);
//	BankCard royalcart("royal", "1234123412341235", "1212", "123", "2023/07", 1000);
//		// Username  userSurname cardName
//	User u1("Nazim", "Nazimov", capcart);
//	User u2("Qazim", "Qazimov", Tamkart);
//	User u3("Sazim", "Sazimov", royalcart);
//	size_t userCount = 3;
//	User** users = new User * [userCount] {&u1, & u2, & u3};
//	Bankomat GlobalBankomat(users, userCount);
//
//
//
//}