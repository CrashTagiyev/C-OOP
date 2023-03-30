////#pragma once
////
////class Cars {
////	static int _idIter;
////	int _id;
////	char* _Marka = nullptr;
////	char* _Model = nullptr;
////	size_t _year;
////public:
////	Cars() {
////		_id = _idIter;
////	};
////	Cars(const char* Marka, const char* model, int year)
////	{
////		++_idIter;
////		_id = _idIter;
////		setmarka(Marka);
////		setModel(model);
////		setYear(year);
////	}
////	//setters
////	void setmarka(const char* Marka);
////	void setModel(const char* Model);
////	void setYear(int Year);
////	void ClearId();
////	//getters
////	void ShowCarInfo() {
////		cout << "\nId:" << _id << endl;
////		cout << "Marka:" << (_Marka ? _Marka : "null") << endl;
////		cout << "Model:" << (_Model ? _Model : "null") << endl;
////		cout << "Year:" << _year;
////	}
////	int getId() { return _id; }
////	const char* getMarka() { return _Marka; }
////	const char* getModel() { return _Model; }
////	int getYear() { return _year; }
////	//Destructor
////	~Cars();
////};
////
////int Cars::_idIter = 0;
////void Cars::ClearId(){
////
////	_idIter = 0;
////}
////void Cars::setmarka(const char* Marka) {
////	if (Marka == nullptr)
////	{
////		assert(!"Marka did not found error");
////	}
////	if (_Marka != nullptr)
////	{
////		delete[]_Marka;
////	}
////
////	size_t len = strlen(Marka) + 1;
////	_Marka = new char[len] {};
////	strcpy_s(_Marka, len, Marka);
////}
////void Cars::setModel(const char* Model) {
////	if (Model == nullptr)
////	{
////		assert(!"Marka did not found error");
////	}
////	if (_Model != nullptr)
////	{
////		delete[]_Model;
////	}
////
////	size_t len = strlen(Model) + 1;
////	_Model = new char[len] {};
////	strcpy_s(_Model, len, Model);
////}
////void Cars::setYear(int Year) {
////	if (Year >= 1990 && Year <= 2023)
////	{
////		_year = Year;
////	}
////	else
////	{
////		assert(!"Year must be between 1990 and 2023");
////	}
////}
////	Cars::~Cars() {
////		cout << "\nDestructor -> " << (_Marka ? _Marka : "null") << endl;
////		cout << "\nDestructor -> " << (_Model ? _Model : "null") << endl;
////
////		delete[] _Model;
////		delete[] _Marka;
////
////		_Model = _Marka = nullptr;
////	}