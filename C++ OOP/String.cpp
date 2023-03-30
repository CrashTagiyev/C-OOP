//#include<iostream>
//#include<cassert>
//using namespace std;
//
//
//class myString {
//private:
//	size_t _length = 0;
//	size_t _capacity = 15;
//	void setText(const char* text);
//	char* _text = nullptr;
//	friend ostream& operator<<(ostream& output, myString& mstring);
//	friend istream& operator>>(istream& intput, myString& mstring);
//public:
//	myString& operator+(myString& mstring) {
//		myString temp(_text);
//		temp.append(mstring._text);
//		return temp;
//	}
//	size_t mystrLen(const char* txt);
//	myString() = default; // Default Constructor
//	myString(const char* text); // Constructor with Param
//	myString(const myString& other); // Copy Constructor
//	// Constructor with Param
//	myString(const size_t count, const char text);
//	// Copy Assignment operator
//	//myString& operator=(const myString& other);
//	//getters
//	char& front() { return _text[0]; };
//	char& back() { return _text[mystrLen(_text) - 1]; }
//	char& at(size_t index);
//	size_t capacity() const { return _capacity; }
//	size_t size() const { return _length; }
//	size_t find(char chr) const;
//	size_t rfind(char chr) const;
//	//setters
//	void clear();
//	void resize(size_t newSize);
//	void reserve(size_t newCapacity);
//	void shrink_to_fit() { _capacity = size(); }
//	bool empty() const;
//	void append(const char* text); // "a".append("b") => "ab"
//	int compared1(const myString& right) {
//		bool prove = false;
//		if (right._length < _length) { return 1; }
//		if (right._length > _length) { return -1; }
//		if (right._length == _length)
//		{
//
//			for (size_t i = 0; _text[i] != '\0'; i++)
//			{
//				if (_text[i] == right._text[i])
//				{
//					prove = true;
//				}
//				else {
//					prove = false;
//					break;
//				}
//			}
//			if (prove == true)
//			{
//				return 0;
//			}
//		}
//	} // -1, 0, 1
//	const char* print() const { return _text; }
//};
////parametr ctor
//myString::myString(const char* text) {
//	_length = mystrLen(text);
//	setText(text);
//}
//myString::myString(const size_t count, const char text) {
//	char* temp = new char[count + 1] {};
//	for (size_t i = 0; i < count; i++)
//	{
//		temp[i] = text;
//	}
//	_length = mystrLen(_text);
//	setText(temp);
//}
////inspectors (getters)
//size_t myString::mystrLen(const char* txt) {
//	unsigned long long count = 0;
//	for (size_t i = 0; txt[i] != '\0'; i++)
//	{
//		++count;
//	}
//	return count;
//}
//char& myString::at(size_t index) {
//	if (index > _length)assert(!"Out of range.");
//	return(_text[index]);
//}
//size_t myString::find(const char letter)const {
//	for (size_t i = 0; _text[i] != '\0'; i++)
//	{
//		if (_text[i] == letter)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//size_t myString::rfind(const char letter)const {
//	for (size_t i = size() - 1; _text[i] != _text[0]; i--)
//	{
//		if (_text[i] == letter)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
////modifiers(setters)
//void myString::setText(const char* text) {
//	if (text == nullptr) { assert(!"text did not found!"); }
//	if (_text != nullptr)(delete[]_text);
//	if (strlen(text) > _capacity) { _capacity = _capacity * (mystrLen(text) / _capacity + 1); }
//	_text = new char[_capacity];
//	strcpy_s(_text, mystrLen(text) + 1, text);
//}
//void myString::clear() {
//
//	_capacity = 15;
//	_length = 0;
//	delete[]_text;
//	_text = new char[1] {};
//}
//void myString::resize(size_t newSize) {
//	//setText(_text, newSize);
//	if (newSize > mystrLen(_text))
//	{
//		//if (newSize > _capacity) { _capacity = _capacity * newSize / _capacity + 1; }
//		char* temp = new char[mystrLen(_text) + 1];
//		for (size_t i = 0; _text[i] != '\0'; i++)
//		{
//			temp[i] = _text[i];
//		}
//		temp[mystrLen(_text)] = '\0';
//
//		for (size_t i = 0; temp[i] != '\0'; i++)
//		{
//			_text[i] = temp[i];
//		}
//		delete[]temp;
//		temp = nullptr;
//		_length = newSize;
//	}
//	else if (newSize <= mystrLen(_text))
//	{
//		char* temp = new char[newSize];
//		for (size_t i = 0; i < newSize; i++)
//		{
//			temp[i] = _text[i];
//		}
//		delete[]_text;
//		_text = new char[newSize];
//		for (size_t i = 0; i < newSize; i++)
//		{
//			_text[i] = temp[i];
//		}
//		_text[newSize] = '\0';
//		_length = newSize;
//	}
//	else if (newSize <= 0) { clear(); }
//}
//void myString::reserve(size_t newCapacity) {
//	if (newCapacity > _capacity) { _capacity = _capacity * newCapacity / _capacity + 1; }
//	else _capacity = newCapacity;
//}
//bool myString::empty()const {
//	if (_length == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void myString::append(const char* text) {
//	if (strlen(text) > _capacity) { _capacity = _capacity * (mystrLen(text) / _capacity + 1); }
//	char* temp = new char[_length + mystrLen(text)];
//	for (size_t i = 0; i < _length; i++)
//	{
//		temp[i] = _text[i];
//	}
//	for (size_t j = 0, i = _length; i < _length + mystrLen(text); j++, i++)
//	{
//		temp[i] = text[j];
//	}
//	temp[_length + mystrLen(text)] = '\0';
//	_length += _capacity;
//	delete[]_text;
//	_text = new char[_length];
//
//	for (size_t i = 0; temp[i] != '\0'; i++)
//	{
//		_text[i] = temp[i];
//		if (temp[i + 1] == '\0')
//		{
//			_text[i + 1] = '\0';
//		}
//	}
//}
////operator overloadings
//ostream& operator<<(ostream& output, myString& mstring) {
//	output << mstring._text;
//	return output;
//}
//istream& operator>>(istream& input, myString& mstring) {
//	cout << "write:";
//	char* txt = new char[mstring._capacity];
//	input.getline(txt, mstring._capacity);
//	mstring.setText(txt);
//	return input;
//}
//
//void main() {
//	myString s1("salam");
//	myString s2("sagol");
//
//}
