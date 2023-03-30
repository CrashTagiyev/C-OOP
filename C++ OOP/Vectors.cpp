//#include<iostream>
//#include<cassert>
//#include<vector>
//using namespace std;
//
//class car {
//	static size_t Sid;
//	size_t id = 0;
//	string marka;
//	string model;
//	string country;
//	int year;
//	int price;
//public:
//	//consturctors
//	car() = default;
//	car(const char* marka, const char* model, const char* country, int year, int price) {
//		id = ++Sid;
//		this->marka = marka;
//		this->model = model;
//		this->country = country;
//		this->year = year;
//		this->price = price;
//	}
//	//methods
//	void printCar() {
//		cout << "Id:" << id << endl;
//		cout << "Marka:" << marka << endl;
//		cout << "Model:" << model << endl;
//		cout << "Country:" << country << endl;
//		cout << "Year:" << year << endl;
//		cout << "Price:" << price << endl;
//	}
//	//getters
//	size_t getID() { return id; }
//	string getMarka() { return marka; }
//	string getModel() { return model; }
//	string getCountry() { return country; }
//	int getYear() { return year; }
//	int getPrice() { return price; }
//
//};
//size_t car::Sid = 0;
//
//ostream& operator<<(ostream& output, car carname) {
//	carname.printCar();
//	return output;
//}
//
//class CarGalery :public car {
//	vector<car>Cars;
//public:
//	//contructors
//	CarGalery() = default;
//	CarGalery(car carname)
//	{
//		Caradd(carname);
//	}
//	//getter
//	size_t getSize() { return Cars.size(); }
//	//methods
//	void printCars() {
//		for (car i : Cars) {
//			cout << i;
//		}
//	}
//	void Caradd(car carname) {
//		Cars.push_back(carname);
//	}
//	void Caradd(const unsigned int index, car carname) {
//		Cars.insert(Cars.begin() + index, carname);
//	}
//	void removeCar(const unsigned int index) {
//		Cars.erase(Cars.begin() + index);
//	}
//	car findCar(size_t id) {
//		for (car i : Cars) {
//			if (i.getID() == id)
//			{
//				return i;
//			}
//		}
//	}
//
//	//Markalari elifbaya gore siralamaq.
//	void carsSort() {
//		car temp;
//		for (car o : Cars)
//		{
//			for (size_t i = Cars.size() - 1; i > 0; i--)
//			{
//				for (size_t j = 0; j < Cars.at(i).getMarka().size(); j++)
//				{
//					if (Cars.at(i).getMarka()[j] < Cars.at(i - 1).getMarka()[j])
//					{
//						temp = Cars.at(i);
//						Cars.at(i) = Cars.at(i - 1);
//						Cars.at(i - 1) = temp;
//						break;
//					}
//					else if (Cars.at(i).getMarka()[j] == Cars.at(i - 1).getMarka()[j]) {
//
//						continue;
//					}
//					else break;
//				}
//			}
//		}
//	}
//};
//
//
//void main() {
//	car car1("Alfa romeo", "350i", "Germany", 2023, 55555);
//	car car2("Aston martin", "350i", "Germany", 2023, 55555);
//	car car3("Bmw", "555i", "Germany", 2012, 55555);
//	car car4("Bentley", "555i", "Germany", 2012, 55555);
//	car car5("Chevrolet", "577i", "Germany", 2018, 55555);
//	car car6("Crysler", "577i", "Germany", 2018, 55555);
//	car car7("Nissan", "577i", "Germany", 2018, 55555);
//	car car8("Hunday", "577i", "Germany", 2018, 55555);
//	CarGalery cars;
//	cars.Caradd(car2);
//	cars.Caradd(car3);
//	cars.Caradd(car4);
//	cars.Caradd(car5);
//	cars.Caradd(car6);
//	cars.Caradd(car7);
//	cars.Caradd(car8);
//	cars.Caradd(car1);
//	//Markalari Elifba sirasina gore sort eledim.
//	cars.carsSort();
//	cars.printCars();
//}
