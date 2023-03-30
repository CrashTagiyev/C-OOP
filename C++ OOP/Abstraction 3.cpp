//#include<iostream>
//
//
//using namespace std;
//
//
//
//class provider {
//protected:
//	short prefix;
//	int number;
//public:
//	provider(short prefix, int number) :prefix(prefix), number(number) {}
//	virtual void printNumber() = 0;
//	virtual void calculateCallPrice(short sec = 0, short min = 0, short hour = 0) = 0;
//	virtual void calculateNetworkPrice(double megabyte) = 0;
//};
//
//
//class azercell :public provider {
//public:
//	azercell(short prefix, int number) :provider(prefix, number) {}
//
//	void printNumber()override{ cout << prefix << number << endl; }
//	//deqiqesi 9 qepik
//	void calculateCallPrice( short sec = 0, short min = 0,short hour = 0)override { cout << (((hour * 3600) + (min * 60) + sec) / 60+1) * 9<< " qepik chixildi"; }
//	//100 mb 50 qepik
//	void calculateNetworkPrice(double megabyte)override {
//		cout << megabyte/100 * 50<<" qepik";
//	}
//};
//class Bakcell :public provider {
//public:
//	Bakcell(short prefix, int number) :provider(prefix, number) {}
//
//	void printNumber()override { cout << prefix << number << endl; }
//	//deqiqesi 10 qepik
//	void calculateCallPrice(short sec = 0, short min = 0, short hour = 0)override { cout << (((hour * 3600) + (min * 60) + sec) / 60 + 1) * 10 << " qepik chixildi"; }
//	//100 mb 70 qepik
//	void calculateNetworkPrice(double megabyte)override {
//		cout << megabyte / 100 * 70 << " qepik";
//	}
//};
//
//
//void main() {
//	azercell az1(50, 4525458);
//	Bakcell bak1(55, 4525458);
//
//	//az1.calculateCallPrice(90);
//	//bak1.calculateCallPrice(90);
//	//az1.calculateNetworkPrice(50);
//	bak1.calculateNetworkPrice(50);
//}