//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//
//
//
//class product {
//private:
//	static int _iditer;
//	int _id = 0;
//	char* _name = nullptr;
//	char* _description = nullptr;
//	double _price = 0;
//	short _discount = 0;
//	size_t _amount = 1;
//public:
//	//birinci name and price-la sonra name price and descriptionla sonra da name price descript and discountla overloading eledim
//	product(const char* name, double price);
//	product(const char* name, const char* description, double price);
//	product(const char* name, const char* description, double price, short discount);
//	product(const char* name, const char* description, double price, short discount, int amount);
//
//	//Accessors{
//
//	//Inspectors-----Getters
//	const char* getName() { return _name; }
//	const char* getDescription() { return _description; }
//	double getPrice() { return _price; }
//	double getDiscountPrice() { return _price / 100 * _discount; };
//	int getId() { return _id; }
//	int getAmount() { return _amount; }
//	//Modifiers------Setters
//	void setName(const char* name);
//	void setDescript(const char* description);
//	void setPrice(double price);
//	void setDiscount(short discount);
//	void setAmount(int amount);
//	void print();
//	// }
//};
////birinci name and price-la sonra name price and descriptionla sonra da name price descript and discountla overloading eledim
//product::product(const char* name, double price) {
//	_id = ++_iditer;
//	_description = nullptr;
//	setName(name);
//	setPrice(price);
//}
//product::product(const char* name, const char* description, double price) {
//	_id = ++_iditer;
//	size_t Namelen = strlen(name) + 1;
//	size_t Descriptlen = strlen(description) + 1;
//	_name = new char[Namelen] {};
//
//
//	setName(name);
//	setDescript(description);
//	setPrice(price);
//}
//product::product(const char* name, const char* description, double price, short discount)
//{
//	_id = ++_iditer;
//
//	setName(name);
//	setDescript(description);
//	setPrice(price);
//	setDiscount(discount);
//}
//product::product(const char* name, const char* description, double price, short discount, int amount)
//{
//	_id = ++_iditer;
//
//	setName(name);
//	setDescript(description);
//	setPrice(price);
//	setDiscount(discount);
//	setAmount(amount);
//
//}
//int product::_iditer = 0;
//void product::setName(const char* name) {
//	size_t Namelen = strlen(name) + 1;
//	if (strlen(name) > 2 && strlen(name) <= 20)
//	{
//		_name = new char[Namelen] {};
//		strcpy_s(_name, Namelen, name);
//	}
//	else assert(!"Error:Name must be between 2 and 20 letters\n");
//}
//void product::setDescript(const char* description) {
//	size_t Descriptlen = strlen(description) + 1;
//
//	if (strlen(description) > 2 && strlen(description) <= 20)
//	{
//		_description = new char[Descriptlen] {};
//		strcpy_s(_description, Descriptlen, description);
//	}
//	else assert(!"Error:Description must be between 2 and 20 letters\n");
//}
//void product::setPrice(double price) {
//	if (price > 0)
//	{
//		_price = price;
//		return;
//	}
//	else assert(!"Error: Price must be higher than 0\n");
//}
//void product::setDiscount(short discount) {
//	if (discount > 0 && discount <= 100)
//	{
//		_discount = discount;
//		return;
//	}
//	else assert(!"Error:Discount must be between 1 and 100%\n");
//}
//void product::setAmount(int amount) {
//	_amount = amount;
//}
//void product::print() {
//	cout << "\nId:" << getId() << endl;
//	cout << "Name:" << (_name ? _name : "null") << endl;
//	cout << "Description:" << (_description ? _description : "null") << endl;
//	cout << "Price:" << _price << endl;
//	cout << "Discount:";
//	_discount > 0 ? cout << _discount << "%" << endl : cout << "null\n";
//	cout << "Discounted price:";
//	_discount > 0 ? cout << getDiscountPrice() << endl : cout << "null\n";
//	cout << "Amount:" << getAmount();
//}
//
//
//class Stock {
//private:
//	char* _name = nullptr;
//	product** _products = nullptr; //dynamic array(Heap)
//	size_t _count = 0;
//
//public:
//	Stock(const char* stockName, product** productName, int& count);
//	void print();//show all products in Stock
//	void SetStockName(const char* stockName);
//	product* getProductById(int id);
//};
//
//Stock::Stock(const char* stockName, product** productName, int& count) {
//	SetStockName(stockName);
//	_products = productName;
//	_count = count;
//
//}
//void Stock::SetStockName(const char* stockName) {
//	size_t Namelen = strlen(stockName) + 1;
//	if (strlen(stockName) > 2 && strlen(stockName) < 20)
//	{
//		_name = new char[Namelen] {};
//		strcpy_s(_name, Namelen, stockName);
//	}
//	else assert(!"Error:Name must be between 2 and 20 letters\n");
//}
//void Stock::print() {
//	for (size_t i = 0; i < _count; i++)
//	{
//		cout << endl;
//		_products[i]->print();
//	}
//}
//product* Stock::getProductById(int id) {
//
//	for (size_t i = 0; i < _count; i++)
//	{
//		if (_products[i]->getId() == id)
//		{
//			return _products[i];
//		}
//	}
//	assert(!"\nProduct did not found.\n");
//}
//
//void main() {
//	//name, descript,price ,discount,amount;
//	product* tea1 = new product("Beta-tea", "Earl grey", 1.80, 50);
//	product* tea2 = new product("beta-tea", "White grey", 2.40, 30, 5);
//	product* tea3 = new product("beta-tea", "golden", 1.90, 20, 3);
//	int teaSize = 3;
//	product** BetaTea = new product * [teaSize] {tea1, tea2, tea3};
//	Stock TeaStock("Beta", BetaTea, teaSize);
//	TeaStock.getProductById(1)->print();
//
//
//}