//#include<iostream>
//#include<cassert>
//
//
//using namespace std;
//
////1. Default constructor which allows creating a string of 80 characters;
////2. Constructor that allows creating a string of the arbitrary size;
////3. Constructor that creates a string and initializes it by the string obtained from the user.
////4. Copy constructor.
//
////The class should contain the methods for inputting the strings from the keyboard and
////outputting the strings to the screen.
//
//class sstring {
//public:
//	char* _string=nullptr;
//	int _size = 80;
//	sstring() {
//		_string = new char[_size] {};
//	}
//	sstring(int size) {
//		_size = size;
//		_string = new char[_size] {};
//	}
//	sstring(const char* writeSomething){
//	
//		setString(writeSomething);
//	}
//	sstring& Copy(sstring& other) {
//		setString(other._string);
//	}
//	//modifiers
//	void setString(const char* writeSomething){
//	
//		if (writeSomething == nullptr)
//		{
//			assert(!"String did not found write something");
//		}
//		if (_string != nullptr)
//		{
//			delete[]_string;
//		}
//		int len = strlen(writeSomething) + 1;
//		_string = new char[_size] {};
//		strcpy_s(_string, len, writeSomething);
//	}
//
//	//input/output methods
//	void input() {
//		
//		char* Input = new char[80];
//		cout << "Write Something:";
//		cin.getline(Input,80);
//		setString(Input);
//		output();
//	}
//	void output() {
//		cout <<endl<< _string<<endl;
//	}
//
//};
//
//
//
//void main() {
//	sstring a;
//
//	a.input();
//}