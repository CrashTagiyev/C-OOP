////Bir hayvanat bahçesi için bir yazılım tasarlayın.Bu yazılım, hayvanat bahçesindeki farklı hayvan türleri
////için bir arayüz oluşturmalıdır.Her hayvan için, adı, yaşı ve diğer özellikleri içeren bir hayvan sınıfı tanımlayın.
////Ayrıca, soyut bir "hayvan" sınıfı tanımlayın ve bu sınıftan türetilen en az iki sınıf oluşturun(örneğin,
////memeli hayvanlar ve sürüngenler).Her alt sınıf, uygun hayvan nesnelerini içermeli ve hayvanların
////özelliklerine göre uygun işlevlere sahip olmalıdır.
////Ana programda, hayvanat bahçesindeki hayvanların listesini gösterin ve kullanıcıların hayvanları
////seçebilmelerini sağlayın.Polimorfizm kullanarak, kullanıcının seçtiği hayvana göre uygun özelliklerin
////gösterilmesini sağlayın.
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//class animal {
//protected:
//	string _name;
//	string _species;
//	string _color;
//
//public:
//	animal(string name, string species, string color) :_name(name), _species(species), _color(color) {}
//
//	virtual void print() = 0;
//};
//
////memeliler
//class mammals :public animal {
//public:
//	mammals(string name, string color) :animal(name, "Mammals", color) {
//
//	}
//	void print()override {
//		cout << "Name:" << _name << endl;
//		cout << "Species:" << _species << endl;
//		cout << "Color:" << _color << endl;
//	}
//};
//
//
//
////surungenler
//class reptiles :public animal {
//public:
//	reptiles(string name, string color) :animal(name, "Reptiles", color) {
//
//	}
//	void print()override {
//		cout << "Name:" << _name << endl;
//		cout << "Species:" << _species << endl;
//		cout << "Color:" << _color << endl;
//	}
//
//};
//
////kushlar
//class birds :public animal {
//public:
//	birds(string name, string color) :animal(name, "Birds", color) {
//
//	}
//	void print()override {
//		cout << "Name:" << _name << endl;
//		cout << "Species:" << _species << endl;
//		cout << "Color:" << _color << endl;
//	}
//
//};
//
//
//class zoopark {
//	vector<mammals>_mammals;
//	vector<reptiles>_reptiles;
//	vector<birds>_birds;
//public:
//	zoopark() = default;
//	zoopark(mammals mammalSpecie) { _mammals.push_back(mammalSpecie); }
//	zoopark(reptiles reptileSpecie) { _reptiles.push_back(reptileSpecie); }
//	zoopark(birds birdSpecie) { _birds.push_back(birdSpecie); }
//	zoopark(vector<mammals> mammalSpecies) {
//		for (mammals i : mammalSpecies) {
//			_mammals.push_back(i);
//		}
//	}
//	zoopark(vector<reptiles> reptileSpecies) {
//		for (reptiles i : reptileSpecies) {
//			_reptiles.push_back(i);
//		}
//	}
//	zoopark(vector<birds> birdSpecies) {
//		for (birds i : birdSpecies) {
//			_birds.push_back(i);
//		}
//	}
//	//methods
//	void zooAdd(mammals mammalSpecie) { _mammals.push_back(mammalSpecie); }
//	void zooAdd(reptiles reptileSpecie) { _reptiles.push_back(reptileSpecie); }
//	void zooAdd(birds birdSpecie) { _birds.push_back(birdSpecie); }
//	void zooAdd(vector<mammals> mammalSpecies) {
//		for (mammals i : mammalSpecies) {
//			_mammals.push_back(i);
//		}
//	}
//	void zooAdd(vector<reptiles> reptileSpecies) {
//		for (reptiles i : reptileSpecies) {
//			_reptiles.push_back(i);
//		}
//	}
//	void zooAdd(vector<birds> birdSpecies) {
//		for (birds i : birdSpecies) {
//			_birds.push_back(i);
//		}
//	}
//	void printBySpecies() {
//		int choice = 0;
//		cout << "1:Mammals\n2:Reptiles\n3:Birds\n";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:for (mammals i : _mammals) { i.print(); cout << endl;
//		}; break;
//		case 2:for (reptiles i : _reptiles) { i.print(); cout << endl;
//		}; break;
//		case 3:for (birds i : _birds) { i.print(); cout << endl;
//		}; break;
//		}
//
//
//	}
//	void printAnimals() {
//		cout << "-------------------------\n\n";
//		for (mammals i : _mammals) { i.print(); cout << endl; }
//		cout << ":------------------------\n\n";
//		for (reptiles i : _reptiles) { i.print(); cout << endl; }
//		cout << "---------------------------\n\n";
//		for (birds i : _birds) { i.print(); cout << endl; }
//	}
//};
//void main() {
//
//	mammals fil("Fil", "boz");
//	mammals zurafe("Zurafe", "Sari noqteli");
//
//	reptiles Iguana("Iguana", "Green");
//	reptiles Timsah("Timsah", "Green");
//
//	birds Qartal("Qartal", "Black");
//	birds Tqushu("Tovuz Qushu", "Rengareng");
//
//
//	zoopark zoo;
//
//	zoo.zooAdd(fil);
//	zoo.zooAdd(zurafe);
//	zoo.zooAdd(Iguana);
//	zoo.zooAdd(Timsah);
//	zoo.zooAdd(Qartal);
//	zoo.zooAdd(Tqushu);
//
//
//	//zoo.printAnimals();
//
//	//zoo.printBySpecies();
//
//
//
//}