#pragma once
//void clear() {}    Mssivi temizlw sifirla 
	//void appendCar(Car* car) {} massive masin elave etmek
	//void removeCar(Car* car) {} silmek massivden
	//void deleteCarById(size_t id) {} ide elave et id yoxud bize car a elave et id static id
	//Car* getCarById(size_t id) {}  id gopre hemen masini return edir

class avtoSalon
{
private:
	char* _SalonName = nullptr;
	size_t _count;
public:
	Cars** _cars;
	avtoSalon(const char* SalonName, Cars** cars, size_t count);
	void printCars();
	void clear();
	void deleteCarById(size_t id);
	//setters
	void setCount();
	void setSalonName(const char* SalonName);
	void CarAppend();
	//getters
	Cars* getCarById(int id);
	Cars** getCars() { return _cars; }
	//desturctor
	~avtoSalon();

};

avtoSalon::avtoSalon(const char* SalonName, Cars** cars, size_t count)
{
	setSalonName(SalonName);
	_cars = cars;
	_count = count;
}
void avtoSalon::deleteCarById(size_t id) {

	if (id > 0 && id <= _count)
	{
		for (size_t i = 0; i < _count; i++)
		{
			if (_cars[i]->getId() == id)
			{
				Cars* temp = new Cars;
				temp = _cars[_count - 1];
				_cars[_count - 1] = _cars[i];
				_cars[i] = temp;
				temp = nullptr;
				delete[]temp;
				_cars[_count - 1] = nullptr;
				delete[]_cars[_count - 1];
				--_count;
				return;
			}
		}
	}
	else
	{
		assert(!"Wrong id error 404 not found");
	}
}
void avtoSalon::clear() {

	for (size_t i = 0; i < _count; i++)
	{
		_cars[i] = nullptr;
		delete[]_cars[i];
	}
	_count = 0;
	_cars[0]->ClearId();
}
void avtoSalon::CarAppend() {
	int maxsize = 20;
	char* WriteMarka = new char[maxsize] {};
	char* WriteModel = new char[maxsize] {};
	int WriteYear;
	cout << "Marka:";
	cin.getline(WriteMarka, maxsize);
	cout << "Model:";
	cin.ignore();
	cin.getline(WriteModel, maxsize);
	cout << "Year:";
	cin >> WriteYear;
	++_count;
	_cars[_count - 1] = new Cars(WriteMarka, WriteModel, WriteYear);
	cin.ignore();
}
void avtoSalon::printCars() {
	for (size_t i = 0; i < _count; i++)
	{
		cout << endl;
		_cars[i]->ShowCarInfo();
	}
}
void avtoSalon::setSalonName(const char* SalonName) {

	if (SalonName == nullptr)
	{
		assert(!"SalonName did not found error");
	}
	if (_SalonName != nullptr)
	{
		delete[]_SalonName;
	}

	size_t len = strlen(SalonName) + 1;
	_SalonName = new char[len] {};
	strcpy_s(_SalonName, len, SalonName);
}
Cars* avtoSalon::getCarById(int id) {

	for (size_t i = 0; i < _count; i++)
	{
		if (_cars[i]->getId() == id)
		{
			return _cars[i];
		}
	}
}
avtoSalon::~avtoSalon()
{
	cout << "\ndestructor -> " << (_SalonName ? _SalonName : "null") << endl;
	cout << "\ndestructor -> " << (_cars ? "cars" : "null") << endl;

	delete[] _cars;
	delete[] _SalonName;

	_cars = nullptr;
	_SalonName = nullptr;
}