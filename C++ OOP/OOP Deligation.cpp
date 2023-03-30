//#include<iostream>
//#include<cassert>
//using namespace std;
//
//
//class Computer
//{
//private:
//	static size_t _staticId;
//	size_t _id;
//	char* _model = nullptr;
//	char* _color = nullptr;
//	size_t _year = 0;
//	char* _CPU = nullptr; // Intel Core i7-8550U
//	short _RAM = 0;
//	size_t _space = 0; // (Hard disc or SSD)
//public:
//	Computer() {
//
//	}
//	Computer(const char* model, const char* color, const char* CPU, short RAM, int Space, int year) {
//
//		_id = ++_staticId;
//		setModel(model);
//		setColor(color);
//		setCpu(CPU);
//		setRAM(RAM);
//		setSpace(Space);
//		setYear(year);
//	}
//	//operators
//	Computer& operator=(const Computer& other) {
//		/* "Copy Assigment Operator\n";*/
//
//		_id = other._id;
//		setModel(other._model);
//		setColor(other._color);
//		setCpu(other._CPU);
//		setRAM(other._RAM);
//		setSpace(other._space);
//		setYear(other._year);
//	}
//
//	//Modifiers
//	void setModel(const char* model) {
//		if (model == nullptr)
//		{
//
//			assert(!"Model error");
//		}
//
//		if (_model != nullptr) delete[]_model;
//		int len = strlen(model) + 1;
//		_model = new char[len];
//		strcpy_s(_model, len, model);
//	}
//	void setColor(const char* color) {
//		if (color == nullptr)
//		{
//			assert(!"Color error");
//
//		}
//
//		if (_color != nullptr) delete[]_color;
//		int len = strlen(color) + 1;
//		_color = new char[len];
//		strcpy_s(_color, len, color);
//	}
//	void setCpu(const char* CPU) {
//		if (CPU == nullptr)
//		{
//			assert(!"Model error");
//		}
//
//		if (_CPU != nullptr) delete[]_CPU;
//		int len = strlen(CPU) + 1;
//		_CPU = new char[len];
//		strcpy_s(_CPU, len, CPU);
//	}
//	void setRAM(short RAM) {
//		if (RAM < 4)
//		{
//			assert(!"RAM cannot be lower than 4");
//		}
//		_RAM = RAM;
//	}
//	void setSpace(int space) {
//		if (space < 128)
//		{
//			assert(!"SSD CANNOT BE LOWER THAN 128 gb");
//		}
//		_space = space;
//	}
//	void setYear(int year) {
//		if (year < 2020)
//		{
//			assert(!"YEAR CANNOT BE LOWER THAN 2020");
//		}
//		_year = year;
//	}
//	//Inspectors(getters)
//	size_t getid() { return _id; }
//	char* getModel() { return _model; }
//	char* getColor() { return _color; }
//	char* getCPU() { return _CPU; }
//	short getRAM() { return _RAM; }
//	short getYear() { return _year; }
//	size_t GetSpace() { return _space; }
//	//print
//	void print() {
//		cout << "ID:" << _id << endl;
//		cout << "Model:" << _model ? _model : "null";
//		cout << "\nColor:" << _color ? _color : "null";
//		cout << "\nCPU:" << _CPU ? _CPU : "null";
//		cout << "\nRAM:" << _RAM << " GB" << endl;
//		cout << "Space:" << _space << " GB SSD" << endl;
//		cout << "Year:" << _year << endl;
//
//	}
//	//destructor
//	~Computer();
//};
//
//size_t Computer::_staticId = 0;
//
//Computer::~Computer() {
//	cout << "Destructor ->" << _model ? _model : "NUll";
//	cout << "Destructor ->" << _CPU ? _CPU : "NUll";
//	cout << "Destructor ->" << _color ? _color : "NUll";
//	delete[]_model;
//	delete[]_CPU;
//	delete[]_color;
//}
//
//class CompStore
//{
//private:
//	char* _name = nullptr;
//	size_t _count = 0;
//	Computer** _computers = nullptr;
//public:
//	CompStore(const char* name, Computer** computers, int count) {
//
//		setName(name);
//		setComputers(computers);
//		setCount(count);
//	}
//	//operator overloading
//
//	void operator+(const CompStore& otherComputer) {
//		CompStore temp(_name, _computers, _count);
//		_count += otherComputer._count;
//
//		_computers = new Computer * [_count]();
//		for (size_t k = 0; k < temp._count; k++)
//		{
//			_computers[k] = temp._computers[k];
//		}
//		for (size_t j = 0, i = temp._count; i < _count; j++, i++)
//		{
//			_computers[i] = new Computer();
//			_computers[i] = otherComputer._computers[j];
//		}
//	}
//
//
//	//Modifiers
//	void setName(const char* name) {
//		if (name == nullptr)
//		{
//			assert(!"Name did not found error");
//		}
//		if (_name != nullptr) { delete[]_name; }
//
//		int len = strlen(name) + 1;
//		_name = new char[len];
//		strcpy_s(_name, len, name);
//	}
//	void setComputers(Computer** computers) {
//		if (_computers != nullptr) { delete[]_computers; }
//		_computers = computers;
//	}
//	void setCount(int count) {
//		if (count > 0)
//		{
//			_count = count;
//		}
//		else assert(!("Count must be more than 0 error"));
//	}
//	//inspectors
//	int getCount() { return _count; }
//	Computer** getComp() { return _computers; };
//	//prints
//	void print() {
//		for (size_t i = 0; i < _count; i++)
//		{
//			cout << endl;
//			_computers[i]->print();
//		}
//	}
//	void printComputersRAMGreaterThan(short min) {
//		for (size_t i = 0; i < _count; i++)
//		{
//			if (_computers[i]->getRAM() >= min)
//			{
//				_computers[i]->print();
//			}
//		}
//	}
//	void printComputersYearBetween(size_t minYear, size_t maxYear) {
//		if (minYear >= maxYear)
//		{
//			assert(!"Min year cannot be higher than max or equal");
//		}
//
//		for (size_t i = 0; i < _count; i++)
//		{
//			if (_computers[i]->getYear() >= minYear && _computers[i]->getYear() <= maxYear)
//			{
//				_computers[i]->print();
//			}
//		}
//	}
//	Computer* getComputerById(size_t id) {
//		for (size_t i = 0; i < _count; i++)
//		{
//			if (id == _computers[i]->getid())
//			{
//				return _computers[i];
//			}
//		}
//		assert(!"ID did not found");
//	}
//	Computer** getComputersByColor(const char* color) {
//		int tempSize = 1;
//		Computer** temp = new Computer * [tempSize];
//		for (size_t i = 0; i < _count; i++)
//		{
//			if (string(color) == string(_computers[i]->getColor()))
//			{
//				temp[tempSize - 1] = _computers[i];
//				tempSize++;
//			}
//		}
//		return temp;
//	}	
//	//destructor
//	~CompStore();
//};
//
//
//CompStore::	~CompStore() {
//		cout << "Destructor ->" << _name ? _name : "NUll";
//		cout << "Destructor ->" << _computers ? "_computers" : "NUll";
//		delete[]_name;
//		delete[]_computers;
//	}
//
//void main() {
//	Computer* comp1 = new Computer("Acer predator", "black", "Core i7 2500k", 4, 256, 2020);
//	Computer* comp2 = new Computer("Del", "black", "Core i7 2500k", 12, 256, 2022);
//	Computer* comp3 = new Computer("HP", "red", "Core i7 2500k", 4, 256, 2021);
//	Computer* comp4 = new Computer("apple", "black", "Core i7 2500k", 8, 256, 2022);
//
//	int compCount = 2;
//	int compCount2 = 2;
//	Computer** computers = new Computer * [compCount] {comp1, comp2};
//	Computer** computers2 = new Computer * [compCount2] {comp3, comp4};
//
//	CompStore* elseverMal = new CompStore("Elsever", computers, compCount);
//	CompStore* elseverMal2 = new CompStore("Elsever2", computers2, compCount2);
//
//	//computerCopy----------------------------------------------------------------
//	comp1 = comp2;
//	comp1->print();
//
//
//	////Overload operator 2 compStore-u toplama ------------------------------------------------
//
//	//*elseverMal + *elseverMal2;
//	//elseverMal->print();
//
//
//	////getComputerById(size_t id) ----------------------------------------------------
//
//	//elseverMal->getComputerById(1)->print();
//
//	////GetComputersByColor------------------------------------------------------
//	// 
//	//Computer** GetComp = elseverMal->getComputersByColor("black");
//	//GetComp[0]->print();
//	//GetComp[1]->print();
//
//	////printComputersRAMGreaterThan ----------------------------------
//
//	//elseverMal->printComputersRAMGreaterThan(6);
//
//
//	////printComputersYearBetween -------------------------------------
//
//	//elseverMal->printComputersYearBetween(2021, 2022);
//
//}
