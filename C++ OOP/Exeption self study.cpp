//#include <iostream>
//#include<vector>
//
//using namespace std;
//
//class User {
//	static size_t sID;
//	size_t id = 0;
//	string _username;
//	string _password;
//	string _name;
//	string _surname;
//public:
//	User() = default;
//	User(string username, string password, string name, string surname)
//		:_username(username), _password(password), _name(name), _surname(surname)
//	{
//		id = ++sID;
//	}
//	void show() const {
//		cout << "Name:" << _username << endl;
//		cout << "Password: *****" << endl;
//		cout << "Name:" << _name << endl;
//		cout << "Surame:" << _surname << endl;
//
//	}
//	bool operator==(const User& other) {
//		if (getID() == other.id)
//		{
//			return true;
//		}
//		else return false;
//
//
//	}
//
//	void operator=(const User& other) {
//		_username = other._username;
//		_password = other._password;
//		_name = other._name;
//		_surname = other._surname;
//
//
//	}
//	string getUsername() { return _username; }
//	string getUPass() { return _password; }
//	string getUName() { return _name; }
//	string getSurname() { return _surname; }
//	size_t getID() { return id; }
//
//};
//
//size_t User::sID = 0;
//
//
//class Database {
//protected:
//	vector<User> users;
//	int user_count = 0;
//	
//public:
//	Database() = default;
//	void addUser(const User& user) {
//		users.push_back(user);
//	}
//	User& getUserByID(size_t ID) {
//		for (User i : users) {
//			if (i.getID() == ID)
//			{
//				return i;
//			}
//		}
//		throw "User did not found";
//	}
//	void updateUser(User& olduser, const User& newuser) {
//		for (User i : users) {
//			if (i == olduser)
//			{
//				i = newuser;
//			}
//		}
//	}
//	vector<User> getusers() { return users; }
//};
//
//
//class Registration :public Database {
//	Database _database;
//public:
//	Registration(const Database& database) {
//		_database = database;
//	}
//
//
//	//eger bu username istifadechi yoxdursa error atsin
//	//eger username varsa amma password yanlishdirsa error atsin
//	void signIn(const string& username, const string& password) {
//		try
//		{
//			for (User i : _database.getusers()) {
//				if (username == i.getUsername() and password == i.getUPass())
//				{
//					
//					cout << "Welcome " << i.getUsername() << endl;
//					return;
//				}
//			}
//			throw exception("Username or passwrod is wrong");
//		}
//		catch (const exception& ex)
//		{
//			cout << ex.what();
//		}
//	}
//
//
//	//Eger istifadechi varsa hemen username de throw DatabaseException
//	//Eger username xarakter sayi 6 dan kichikdirse InvalidArgumentException
//	//Eger username ilk herf kichikdirse InvalidArgumentException
//	//Eger password xarakter sayi 6 dan kichikdirse InvalidArgumentException
//	//Eger name xarakter sayi 3 dan kichikdirse InvalidArgumentException
//	//Eger surname xarakter sayi 4 dan kichikdirse InvalidArgumentException
//	void signUp(string username, string password, string name, string surname) {
//
//		try
//		{
//			if (username.size() < 6)
//			{
//				throw invalid_argument("Username must be 6 letter or higher");
//			}
//			if (username[0] > 'a' and username[0] < 'z')
//			{
//				throw invalid_argument("Username`s first letter must be higher");
//			}
//			if (password.size() < 6)
//			{
//				throw invalid_argument("Password must be 6 character or higher");
//
//			}
//			if (name.size() < 3)
//			{
//				throw invalid_argument("Name must contain 3 or more letters");
//			}
//			if (surname.size() < 4)
//			{		
//				throw invalid_argument("Surame must contain 4 or more letters");
//			}
//
//		}
//		catch (const invalid_argument& ex)
//		{
//			cout << ex.what();
//		}
//
//	}
//};
////
////
////class StartUp {
////public:
////	static void Start() {
////		Database db;
////		Registration twitter(db);
////
////		// twitter.getDatabase().addUser(user);
////
////		//mainde yazilacaq her shey burda yazilsin.
////	}
////
////
////
////
////};
////
//
//
//
//
//void main() {
//
//	User u1("Crash", "12345", "Emil", "Tagiyev");
//	Database d1;
//	d1.addUser(u1);
//	Registration registr(d1);
//
//	registr.signUp("Crashbash", "123456", "Emil", "Tagiyev");
//
//
//}