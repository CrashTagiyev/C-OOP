//#include <iostream>
//#include<cassert>
//using namespace std;
//
//
//class saat
//{
//	short _hours = 0;
//	short _minutes = 0;
//	short _seconds = 0;
//
//public:
//	saat();
//	saat(short hours, short minutes, short seconds);
//	int getHour() { return _hours; }
//	int getMin() { return _minutes; }
//	int getSec() { return _seconds; }
//	//overload operators
//	// () - print
//	void operator()() {
//		cout << endl;
//		if (_hours < 10)
//		{
//			cout << "0";
//		}
//		cout << _hours;
//		cout << ":";
//		if (_minutes < 10)
//		{
//			cout << "0";
//		}
//		cout << _minutes;
//		cout << ":";
//		if (_seconds < 10)
//		{
//			cout << "0";
//		}
//		cout << _seconds;
//	}
//	//increment and decrement;
//	void operator++() {
//
//		++_seconds;
//		if (_seconds == 60)
//		{
//			_seconds = 0;
//			++_minutes;
//		}
//		if (_minutes == 60)
//		{
//			_minutes = 0;
//			++_hours;
//		}
//		if (_hours == 24)
//		{
//			_hours = 0;
//		}
//	}
//	void operator--() {
//
//		if (_hours == 0 && _seconds == 0 && _minutes == 0)
//		{
//			_hours = 24;
//			_minutes = 59;
//			_seconds = 59;
//			return;
//		}
//		--_seconds;
//		if (_seconds < 0 && !(_minutes < 0))
//		{
//			--_minutes;
//			if (_seconds < 0)
//			{
//				_seconds = 59;
//			}
//		}
//
//		if (_minutes < 0 && !(_hours < 0))
//		{
//			--_hours;
//			if (_minutes < 0)
//			{
//				_minutes = 59;
//			}
//		}
//	}
//	//Relation operators
//	bool operator<(saat& other) {
//		int Releation1 = (_hours * 3600) + (_minutes * 60) + _seconds;
//		int Releation2 = (other._hours * 3600) + (other._minutes * 60) + other._seconds;
//		if (Releation1 < Releation2)
//		{
//			return true;
//		}
//		else return false;
//	}
//	bool operator>(saat& other) {
//		int Releation1 = (_hours * 3600) + (_minutes * 60) + _seconds;
//		int Releation2 = (other._hours * 3600) + (other._minutes * 60) + other._seconds;
//		if (Releation1 > Releation2)
//		{
//			return true;
//		}
//		else return false;
//	}
//	bool operator>=(saat& other) {
//		int Releation1 = (_hours * 3600) + (_minutes * 60) + _seconds;
//		int Releation2 = (other._hours * 3600) + (other._minutes * 60) + other._seconds;
//		if (Releation1 >= Releation2)
//		{
//			return true;
//		}
//		else return false;
//	}
//	bool operator<=(saat& other) {
//		int Releation1 = (_hours * 3600) + (_minutes * 60) + _seconds;
//		int Releation2 = (other._hours * 3600) + (other._minutes * 60) + other._seconds;
//		if (Releation1 <= Releation2)
//		{
//			return true;
//		}
//		else return false;
//	}
//	bool operator==(saat& other) {
//		int Releation1 = (_hours * 3600) + (_minutes * 60) + _seconds;
//		int Releation2 = (other._hours * 3600) + (other._minutes * 60) + other._seconds;
//		if (Releation1 == Releation2)
//		{
//			return true;
//		}
//		else return false;
//	}
//	bool operator!=(saat& other) {
//		int Releation1 = (_hours * 3600) + (_minutes * 60) + _seconds;
//		int Releation2 = (other._hours * 3600) + (other._minutes * 60) + other._seconds;
//		if (Releation1 != Releation2)
//		{
//			return true;
//		}
//		else return false;
//	}
//	//assaign
//	saat operator+(saat& other) {
//		int temphrs = 0;
//		int tempmin = 0;
//		int tempsec = 0;
//
//		if ((_hours + other._hours) >= 24)temphrs = (_hours + other._hours) - 24;
//		else temphrs = _hours + other._hours;
//		if ((_minutes + other._minutes) >= 60)
//		{
//			tempmin = (_minutes + other._minutes) - 60;
//			++temphrs;
//		}
//		else tempmin = _minutes + other._minutes;
//		if ((_seconds + other._seconds) >= 60)
//		{
//			tempsec = (_seconds + other._seconds) - 60;
//			++tempmin;
//		}
//		else tempsec = _seconds + other._seconds;
//
//		if (_seconds == 60)
//		{
//			_seconds = 0;
//			++_minutes;
//		}
//		if (_minutes == 60)
//		{
//			_minutes = 0;
//			++_hours;
//		}
//		if (_hours == 24) _hours = 0;
//
//		return saat(temphrs, tempmin, tempsec);
//	}
//};
//saat::saat() {}
//saat::saat(short hours, short minutes, short seconds)
//{
//	if (hours >= 0 && hours < 25 && minutes >= 0 && minutes < 60 && seconds >= 0 && seconds < 60)
//	{
//		_hours = hours;
//		_minutes = minutes;
//		_seconds = seconds;
//	}
//	else assert(!"Wrong data!");
//}
//
//
//
//
//void main() {
//	saat t1(13, 30, 55);
//	saat t2(12, 33, 11);
//	//arihmetic
//	saat t3 = t1 + t2;
//	t3(); // print  with this operator -> ()
//	//relation
//
//	/*cout<<(t1 > t2);*/
//
//	////Increment
//
//	//t1();
//	//++t2;
//
//	////with loop
//	//for (size_t i = 0; i < 95; i++)
//	//{
//	//	t1();
//	//	++t2;
//	//}
//	
//	////Decrement
//	
//	//	t1();
//	//	--t2;
//	
//	//// with loop
//	//for (size_t i = 0; i < 95; i++)
//	//{
//	//	t1();
//	//	--t2;
//	//}
//}