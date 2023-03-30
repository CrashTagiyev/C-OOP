//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//using namespace std;
//
//class fhine {
//	friend void operator<<(ostream output, fhine  fhine);
//	string madde;
//	string tarix;
//public:
//	fhine() = default;
//	fhine(string madde, string tarix) :madde(madde), tarix(tarix) {}
//
//	string getMadde() { return madde; };
//	string getTarix() { return tarix; };
//};
//
//void operator<<(ostream output, fhine  fhine) {
//	output << fhine.madde << endl;
//	output << fhine.tarix << endl;
//}
//
//
//class car {
//
//	friend void operator<<(ostream& output, const car& carname);
//	string marka;
//	string model;
//	vector<fhine> cerimeler;
//	int year;
//public:
//	car() = default;
//	car(string marka, string model, vector<fhine>cerimeler,int year) :marka(marka), model(model), cerimeler(cerimeler),year(year) {}
//
//};
//void operator<<(ostream& output, const car& carname) {
//	output <<"Marka:" << carname.marka << endl;
//	output << "Model:" << carname.model << endl;
//	output <<"Year:" << carname.year << endl;
//	for (fhine i : carname.cerimeler) {
//		cout << endl;
//		output<<"Madde:" << i.getMadde() << endl;
//		output <<"Tarix:" << i.getTarix() << endl;
//	}
//}
//
//void main() {
//
//	vector<fhine> fhines{ fhine("1ci madde","11.04.2023"),fhine("3ci madde","30.01.2022") };
//
//	car c1("vaz", "2107", fhines, 2005);
//
//	map<string, car> map1;
//	
//	map1["10-GA-210"] = c1;
//	cout << map1["10-GA-210"];
//
//}