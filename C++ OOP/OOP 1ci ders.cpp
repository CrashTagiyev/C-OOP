//#include<iostream>
//
//using namespace std;
//
////task 1.
//
//class Fraction
//{
//private:
//	int _numenator;
//	int _denominator;
//public:
//	Fraction(int num, int don) {
//		_numenator = num;
//		_denominator = don;
//	}
//	Fraction multiply(Fraction& other) {
//		int otherNum = other._numenator;
//		int otherDon = other._denominator;
//		if (_numenator > otherDon)
//		{
//			for (size_t i = 2; i <= otherDon; i++)
//			{
//				if (_numenator % i == 0 && otherDon % i == 0)
//				{
//					_numenator /= i;
//					otherDon /= i;
//					break;
//				}
//			}
//		}
//		else if (otherDon > _numenator)
//		{
//			for (size_t i = 2; i <= _numenator; i++)
//			{
//				if (_numenator % i == 0 && otherDon % i == 0)
//				{
//					_numenator /= i;
//					otherDon /= i;
//					break;
//				}
//			}
//		}
//		else if (otherDon == _numenator)
//		{
//			int temp = otherDon;
//			_numenator /= temp;
//			otherDon /= temp;
//		}
//		if (_denominator > otherNum)
//		{
//			for (size_t i = 2; i <= otherNum; i++)
//			{
//				if (_denominator % i == 0 && otherNum % i == 0)
//				{
//					_denominator /= i;
//					otherNum /= i;
//					break;
//				}
//			}
//		}
//		else if (otherNum > _denominator)
//		{
//			for (size_t i = 2; i <= _denominator; i++)
//			{
//				if (_denominator % i == 0 && otherNum % i == 0)
//				{
//					_denominator /= i;
//					otherNum /= i;
//					break;
//				}
//			}
//		}
//		else if (otherNum == _denominator)
//		{
//			int temp = otherNum;
//			_denominator /= temp;
//			otherNum /= temp;
//
//		}
//		_numenator *= otherNum;
//		_denominator *= otherDon;
//		return Fraction(_numenator, _denominator);
//	}
//	Fraction summary(const Fraction& other) {
//		if (_denominator == other._denominator)
//		{
//			_numenator += other._numenator;
//			return Fraction(_numenator, _denominator);
//		}
//		else
//		{
//			int ortaqmexrec = _denominator * other._denominator;
//			int otherNum = other._numenator;
//			_numenator = (ortaqmexrec / _denominator) * _numenator;
//			otherNum = (ortaqmexrec / other._denominator) * other._numenator;
//			_denominator = ortaqmexrec;
//			_numenator += otherNum;
//			return Fraction(_numenator, _denominator);
//		}
//
//	}
//	Fraction minus(const Fraction& other) {
//
//		if (_denominator == other._denominator)
//		{
//			_numenator -= other._numenator;
//			return Fraction(_numenator, _denominator);
//		}
//		else
//		{
//			int ortaqmexrec = _denominator * other._denominator;
//			int otherNum = other._numenator;
//			_numenator = (ortaqmexrec / _denominator) * _numenator;
//			otherNum = (ortaqmexrec / other._denominator) * other._numenator;
//			_denominator = ortaqmexrec;
//			_numenator -= other._numenator;
//			return Fraction(_numenator, _denominator);
//		}
//
//
//	}
//	Fraction Divide(Fraction& other) {
//		int otherNum = other._numenator;
//		int otherDon = other._denominator;
//		if (_numenator > otherNum)
//		{
//			for (size_t i = 2; i <= otherNum; i++)
//			{
//				if (_numenator % i == 0 && otherNum % i == 0)
//				{
//					_numenator /= i;
//					otherNum /= i;
//					break;
//				}
//			}
//		}
//		else if (otherNum > _numenator)
//		{
//			for (size_t i = 2; i <= _numenator; i++)
//			{
//				if (_numenator % i == 0 && otherNum % i == 0)
//				{
//					_numenator /= i;
//					otherNum /= i;
//					break;
//				}
//			}
//		}
//		else if (otherNum == _numenator)
//		{
//			int temp = otherNum;
//			_numenator /= temp;
//			otherNum /= temp;
//
//		}
//
//		if (_denominator > otherDon)
//		{
//			for (size_t i = 2; i <= otherDon; i++)
//			{
//				if (_denominator % i == 0 && otherDon % i == 0)
//				{
//					_denominator /= i;
//					otherDon /= i;
//					break;
//				}
//			}
//		}
//		else if (otherDon > _denominator)
//		{
//			for (size_t i = 2; i <= _denominator; i++)
//			{
//				if (_denominator % i == 0 && otherDon % i == 0)
//				{
//					_denominator /= i;
//					otherDon /= i;
//					break;
//				}
//			}
//		}
//		else if (otherDon == _denominator)
//		{
//			int temp = otherDon;
//			_denominator /= temp;
//			otherDon /= temp;
//		}
//		_numenator *= otherDon;
//		_denominator *= otherNum;
//		return Fraction(_numenator, _denominator);
//	}
//	int getNum() { return _numenator; }
//	int getDon() { return _denominator; }
//	void Simplify() {
//		int countSimplify = 0;
//		if (_numenator > _denominator)
//		{
//			countSimplify = _denominator;
//		}
//		else if (_numenator < _denominator)
//		{
//			countSimplify = _numenator;
//		}
//		while (countSimplify > 1)
//		{
//			if (_numenator % countSimplify == 0 && _denominator % countSimplify == 0)
//			{
//				_numenator /= countSimplify;
//				_denominator /= countSimplify;
//			}
//			countSimplify--;
//		}
//	}
//
//};
//
////task 2
//
//class point {
//private:
//	int x;
//	int y;
//
//public:
//	point() {
//		x = 5;
//		y = 5;
//	}
//	point(int x, int y) {
//		setX(x);
//		setY(y);
//	}
//	int getX() { return x; }
//	int getY() { return y; }
//	void setX(int x) {
//		this->x = x;
//	}
//	void setY(int Y) {
//		this->y = Y;
//	}
//};
//
////task 3
//
//class Counter
//{
//private:
//	int _min;
//	int _max;
//	int _currentValue;
//public:
//	Counter() {
//		_min - 0;
//		_max = 100;
//		_currentValue = 0;
//	}
//	Counter(int min, int max) {
//		_min = min;
//		_max = max;
//		_currentValue = min;
//	}
//	void increment() {
//		if (_currentValue < _max)
//		{
//			_currentValue++;
//		}
//	}
//	void decrement() {
//		if (_currentValue > _min)
//		{
//			_currentValue--;
//		}
//	}
//	int getCurrent() { return _currentValue; }
//};
//
//void main() {
//	//////task1
//	////  27 . 35 
//	////	40 ` 18
//	//Fraction f1(27, 40);
//	//Fraction f2(18, 35);
//	//Fraction result1 = f1.Divide(f2);
//	//cout << result1.getNum() << "/" << result1.getDon() << endl;
//	//result1.Simplify();
//	//cout << result1.getNum() << "/" << result1.getDon() << endl;
//
//
//	////	//task2
//	//	int x = 3;
//	//	int y = 2;
//	//	point XY(x, y);
//	//	XY.setX(4);
//	//	cout << XY.getX();
//	//
//	////	//task3
//	//
//	//  Counter counterStrike(4, 66);
//	//	counterStrike.increment();
//	//	counterStrike.increment();
//	//	cout<<counterStrike.getCurrent()<<endl;
//	//  counterStrike.decrement();
//	//  cout<<counterStrike.getCurrent()<<endl;
//}