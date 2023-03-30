//#include <iostream>
//#include<vector>
//
//using namespace std;
//
////shape clasimiz var name-i eni uzunlugu var
////torenmishleri rectangle and circle;
//
////circle perimetr olmur
//
////rectanglede uzunluq olmur
//
//
//
//class shape {
//protected:
//	string _name;
//	double _withdraw;
//	double  _height;
//	double _radius;
//	double trianglesLenght;
//public:
//	shape(string rectangle, double withdraw, double height) {
//		_name = rectangle;
//		_withdraw = withdraw;
//		_height = height;
//	}
//	shape(string circle,double radius) {
//		_name = circle;
//		_radius = radius;
//	}
//	shape(string triangle, double lenght1, double lenght2, double lenght3) { _name = triangle; }
//	virtual double areaFind() {return 0;}
//	virtual double perimetr() {return 0;}
//	virtual double lenght() { return 0; }
//};
//
//class rectangle :public shape {
//
//public:
//	rectangle(double withdraw, double height) :shape(typeid(this).name(), withdraw, height) {}
//
//	double areaFind()override {return _withdraw * _height;}
//	double perimetr()override {return _withdraw + _height + _withdraw + _height;}
//	double lenght()override { return areaFind() / _withdraw;}
//
//};
//class triangle:public shape {
//
//	//triangle(){}
//
//};
//
//
//class circle :public shape {
//
//public:
//	circle(double radius) :shape(typeid(this).name(),radius) {}
//
//	double areaFind()override {return 3.14*(_radius*_radius);}
//	double lenght()override { return 2 * (3.14 * _radius); }
//
//
//};
//void main() {
//
//	shape* r1=new rectangle(15, 12);
//	shape* c1=new circle(10);
//	
//	shape** shapes = new shape * [2] {r1, c1};
//
//	for (size_t i = 0; i < 2; i++)
//	{
//		cout<<shapes[i]->areaFind()<<endl;
//	}
//
//}