//#include<iostream>
//#include<cassert>
//#include<vector>
//using namespace std;
////------------------------------------------------------------Person class
//class person {
//	char* _name = nullptr;
//	char* _surname = nullptr;
//	unsigned short _age = 0;
//	friend ostream& operator<<(ostream& output, person something);
//public:
//	person() = default;
//	person(const char* name, const char* surname) {
//		setName(name);
//		setSName(surname);
//	}
//	person(const char* name, const char* surname, unsigned short age) {
//		setName(name);
//		setSName(surname);
//		setAge(age);
//	}
//	//modifiers
//	void setName(const char* name);
//	void setSName(const char* surname);
//	void setAge(unsigned short age);
//};
//void person::setName(const char* name) {
//	if (!name)
//	{
//		assert(!"Name did not found error");
//	}
//	if (_name)
//	{
//		delete[]_name;
//	}
//	_name = new char[strlen(name) + 1];
//	strcpy_s(_name, strlen(name) + 1, name);
//}
//void person::setSName(const char* surname) {
//	if (!surname)
//	{
//		assert(!"Name did not found error");
//	}
//	if (_surname)
//	{
//		delete[]_surname;
//	}
//	_surname = new char[strlen(surname) + 1];
//	strcpy_s(_surname, strlen(surname) + 1, surname);
//}
//void person::setAge(unsigned short age) {
//	if (age < 18)
//	{
//		assert(!"People belowe 18 years old cannot be a Vendor(salesman or saleswoman)");
//	}
//	_age = age;
//}
//ostream& operator<<(ostream& output, person person) {
//	output << person._name << " " << person._surname << " ";
//	if (person._age) { output << person._age << " years old\n"; }
//	else output << "\n";
//	return output;
//}
//
////---------------------------------------------------------------- Engine Class
//class engine {
//private:
//	friend ostream& operator<<(ostream& output, engine& something);
//	char* _company = nullptr;
//	short _cylinders = 0;
//	float volume = 0;
//public:
//	engine() = default;
//	engine(const char* company, short cylinders, float volume) {
//		setCompany(company);
//		if (cylinders > 0)this->_cylinders = cylinders;
//		else assert(!"Cylinders must be higher than 0");
//		if (volume > 0.5)this->volume = volume;
//		else assert(!"volume must be higher than 0.5");
//	}
//	//modifiers
//	void setCompany(const char* company);
//	//operators
//	void operator=(const engine& other);
//
//};
//void engine::setCompany(const char* company) {
//	if (!company)
//	{
//		assert(!"Company name did not found error");
//	}
//	if (_company)
//	{
//		delete[]_company;
//	}
//	_company = new char[strlen(company) + 1];
//	strcpy_s(_company, strlen(company) + 1, company);
//}
//ostream& operator<<(ostream& output, engine& engine) {
//	output << engine._company << " " << engine._cylinders << " cc " << engine.volume << "L\n";
//	return output;
//}
//void engine:: operator=(const engine& other) {
//	setCompany(other._company);
//	this->_cylinders = other._cylinders;
//	this->volume = other.volume;
//}
////--------------------------------------------------------------- Vehicle Class
//
//class Vehicle {
//protected:
//	static unsigned short sId;
//	unsigned short id = 0;
//	char* _modelName;
//	person Vendor;
//	engine engineName;
//public:
//	Vehicle() = default;
//	Vehicle(const char* modelName, engine engineName, person Vendor) {
//		id = ++sId;
//		this->Vendor = Vendor;
//		this->engineName = engineName;
//		setModel(modelName);
//	}
//	void setModel(const char* modelName);
//};
//void Vehicle::setModel(const char* modelName) {
//	if (!modelName)
//	{
//		assert(!"Name did not found error");
//	}
//	if (_modelName)
//	{
//		delete[]_modelName;
//	}
//	_modelName = new char[strlen(modelName) + 1];
//	strcpy_s(_modelName, strlen(modelName) + 1, modelName);
//}
//unsigned short Vehicle::sId = 0;
////--------------------------------------------------------------- Car class
//
//class Car :protected Vehicle {
//	friend ostream& operator<<(ostream& output, Car& something);
//	bool hasSpoiler = false;
//public:
//	Car(const char* ModelName, engine engineName, person Vendor) :Vehicle(ModelName, engineName, Vendor) {
//	}
//	Car(const char* ModelName, engine engineName, person Vendor, bool hasSpoiler) :Vehicle(ModelName, engineName, Vendor) {
//		this->hasSpoiler = true;
//	}
//};
//ostream& operator<<(ostream& output, Car& something) {
//	output << "ID:" << something.id << endl;
//	output << "Model:" << something._modelName << endl;
//	output << "Engine name:" << something.engineName;
//	output << "Vendors indentify:" << something.Vendor;
//	if (something.hasSpoiler)
//	{
//		output << "Have a spoiler\n";
//	}
//	return output;
//}
//
////---------------------------------------------------------------- Ship class
//
//class Ship :protected Vehicle {
//	friend ostream& operator<<(ostream& output, Ship& something);
//	bool hasSail = false;
//public:
//	Ship(const char* ModelName, engine engineName, person Vendor) :Vehicle(ModelName, engineName, Vendor) {
//	}
//	Ship(const char* ModelName, engine engineName, person Vendor, bool hasSpoiler) :Vehicle(ModelName, engineName, Vendor) {
//		this->hasSail = true;
//	}
//};
//ostream& operator<<(ostream& output, Ship& something) {
//	output << "ID:" << something.id << endl;
//	output << "Model:" << something._modelName << endl;
//	output << "Engine name:" << something.engineName;
//	output << "Vendors indentify:" << something.Vendor;
//	if (something.hasSail)
//	{
//		output << "Have a sail\n";
//	}
//	return output;
//}
//
////---------------------------------------------------------------- AirPlane class
//
//class AirPlane :protected Vehicle {
//	unsigned short engineCount = 0;
//	friend ostream& operator<<(ostream& output, AirPlane& something);
//public:
//	AirPlane(const char* ModelName, engine engineName, person Vendor, unsigned short EngineCount) :Vehicle(ModelName, engineName, Vendor) {
//		this->engineCount = EngineCount;
//	}
//};
//ostream& operator<<(ostream& output, AirPlane& something) {
//	output << "ID:" << something.id << endl;
//	output << "Model:" << something._modelName << endl;
//	output << "Engine name:" << something.engineName;
//	output << "Vendors indentify:" << something.Vendor;
//	output << "Engines count:" << something.engineCount << endl;
//	return output;
//}
//
////
//template <class T>
//class stack {
//protected:
//	vector<T> v1;
//public:
//	stack() = default;
//	stack(T& something) {
//		cout << something;
//	};
//	void pushT(const T& something);
//	void print();
//};
//
//template<class T>
//void stack<T>::pushT(const T& something) {
//	v1.push_back(something);
//}
//template<class T>
//void stack<T>::print() {
//	for (T i : v1) { cout << i << endl; }
//	cout << endl;
//}
////------------------------------------------------------------------ VehicleDepo class
//template <typename Vehicles>
//Vehicle addNewVehicle(Vehicles vehicle) {
//	if (typeid(vehicle).name == typeid(Car).name)
//	{
//		return vehicle;
//	}
//	else if (typeid(vehicle).name == typeid(Ship).name)
//	{
//
//		return vehicle;
//	}
//	else if (typeid(vehicle).name == typeid(AirPlane).name)
//	{
//
//		return vehicle;
//	}
//	else assert(!"Only Car,Ship and AirPlane types allowed!");
//}
//
//
//class vehicleDepo {
//	friend stack<class T>;
//	stack<Car> _cars;
//	stack<Ship> _ships;
//	stack<AirPlane> _airPlanes;
//public:
//	vehicleDepo() = default;
//	//method
//	void addVehicle(Car vehicleName);
//	void addVehicle(Ship vehicleName);
//	void addVehicle(AirPlane vehicleName);
//
//	void showAllVehicles() {
//		cout << "Cars--------------------------\n";
//		_cars.print();
//		cout << "Ships-------------------------\n";
//		_ships.print();
//		cout << "Airplanes-------------------------\n";
//		_airPlanes.print();
//	}
//
//};
//void vehicleDepo::addVehicle(Car vehicleName) {
//	_cars.pushT(vehicleName);
//}
//void vehicleDepo::addVehicle(Ship vehicleName) {
//	_ships.pushT(vehicleName);
//}
//void vehicleDepo::addVehicle(AirPlane vehicleName) {
//	_airPlanes.pushT(vehicleName);
//}
////------------------------------------------------------------------main
//void main() {
//
//	//Cars-----------------------------
//	person Vendor1("Irfan", "Sahibov");
//	person Vendor2("Sahib", "Samirov");
//	engine engine1("Nissan GTR 12V", 4, 4.5);
//	engine engine2("Nissan 350z 8V ", 4, 1.5);
//	Car car1("Nissan skyline", engine1, Vendor1, true);
//	Car car2("Nissan 350z", engine2, Vendor2);
//
//	//Ships-----------------------------------------
//
//	person Vendor3("Jack", "Roza");
//	person Vendor4("Captain Jack", "Sparrow");
//	engine engine3("Odun pechi", 4, 4.5);
//	engine engine4("Pirates", 4, 1.5);
//	Ship ship1("Titanic", engine3, Vendor3, false);
//	Ship ship2("Black marble", engine4, Vendor4, true);
//
//	//Airplanes---------------------------------------------
//	person Vendor5("Jack in the air", "Roza in the air");
//	person Vendor6("Airplain Captain Jack", "Sparrow");
//	engine engine5("Odun pechi", 4, 4.5);
//	engine engine6("Pirates", 4, 1.5);
//	AirPlane Aplane1("Boing 320", engine5, Vendor5, 12);
//	AirPlane Aplane2("Phantom", engine5, Vendor5, 4);
//
//	//VehicleDepo------------
//
//	vehicleDepo depo;
//	depo.addVehicle(car1);
//	depo.addVehicle(car2);
//	depo.addVehicle(ship1);
//	depo.addVehicle(ship2);
//	depo.addVehicle(Aplane1);
//	depo.addVehicle(Aplane2);
//	depo.showAllVehicles();
//
//}
