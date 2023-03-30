//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class person {
//protected:
//	string _name;
//	string _surname;
//	size_t _age;
//public:
//	person(string name, string surname, size_t age) :_name(name), _surname(surname), _age(age) {
//	}
//	virtual void saySomething() = 0;
//};
//
//class enginner :public person {
//
//public:
//	enginner(string name, string surname, size_t age) :person(name, surname, age) {
//	}
//
//	void saySomething() {
//		cout << "i`m enginner\n";
//	}
//
//};
//
//class security :public person {
//public:
//	security(string name, string surname, size_t age) :person(name, surname, age) {
//	}
//
//	void saySomething() {
//		cout << "i`m security\n";
//	}
//};
//
//
//
//
//void main() {
//
//	enginner e1("irfan", "azimov", 24);
//
//	security s1("nazim", "nazimov", 19);
//
//	person** p1 = new person * [2] {&e1, &s1};
//
//	for (size_t i = 0; i < 2; i++)
//	{
//		p1[i]->saySomething();
//	}
//
//}
//
//
