//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//
//namespace productName {
//	class product {
//		string brand;
//		string name;
//		float price;
//		friend void operator<<(ostream& output, product pdct);
//	public:
//		product() = default;
//		product(string brand, string name, float price) :brand(brand), name(name), price(price) {
//
//		}
//		void printProduct() {
//			cout << "Brand:" << brand << endl;
//			cout << "Name:" << name << endl;
//			cout << "Price:" << price << "azn" << endl;
//		}
//		string getBrand() { return brand; }
//	};
//	void operator<<(ostream& output, product pdct) {
//		pdct.printProduct();
//	}
//}
//
//namespace DataBase {
//	using namespace productName;
//
//
//	class dataBase {
//		vector<product>products;
//	public:
//		dataBase() = default;
//		dataBase(vector<product>products) :products(products) {
//		}
//		void printProducts() {
//			for (product i : products)
//			{
//				cout << endl << i;
//			}
//		}
//		vector<product>getProducts() { return products; }
//	};
//}
//
//namespace Control {
//	using namespace DataBase;
//	class control {
//
//		dataBase _data;
//	public:
//		control(dataBase data) :_data(data) {}
//
//		void PrintByAlpha(const char& letter) {
//			for (size_t i = 0; i < _data.getProducts().size(); i++)
//			{
//				for (size_t j = 0; j <_data.getProducts()[i].getBrand().size(); j++)
//				{
//					if (_data.getProducts()[i].getBrand()[j]==letter-32 or _data.getProducts()[i].getBrand()[j] == letter)
//					{
//						cout<<endl << _data.getProducts()[i];
//					}
//				}
//			}
//		}
//	};
//
//
//
//}
//
//using namespace productName;
//using namespace DataBase;
//using namespace Control;
//void main() {
//
//	product p1("samsung", "Galaxy", 1333);
//	product p2("Iphone", "s12", 1111);
//	product p3("Toshiba", "Satelite", 333);
//	product p4("Samsung", "Node 7", 222);
//
//	vector<product> products{ p1,p2,p3,p4 };
//
//	dataBase database(products);
//
//	control CTRL(database);
//
//	CTRL.PrintByAlpha('S');
//
//}
//
//
//
