//#include<iostream>
//#include<vector>
//#include<Windows.h>
//#include<string>
//using namespace std;
//
//class Question {
//protected:
//	string _question;
//	vector<string>answers;
//	vector<string>RandomAnswers;
//	string trueAnswer;
//	vector<int> randomlocker{ -1,-1,-1,-1 };
//public:
//	Question() = default;
//	Question(string question, string TrueAnswer, string answer1, string answer3, string answer4) :_question(question) {
//		this->trueAnswer = TrueAnswer;
//		answers.push_back(answer1);
//		answers.push_back(trueAnswer);
//		answers.push_back(answer3);
//		answers.push_back(answer4);
//	}
//	void print() {
//		cout << _question << endl;
//		cout << " 1:" << answers[0] << endl;
//		cout << " 2:" << answers[1] << endl;
//		cout << " 3:" << answers[2] << endl;
//		cout << " 4:" << answers[3] << endl;
//	}
//	void printRandomly() {
//		cout << _question << endl;
//		int i = 0;
//		while (true)
//		{
//
//			int random = 0 + rand() % (3 - 0 + 1);
//
//			if (randomlocker[0] > -1 && randomlocker[1] > -1 && randomlocker[2] > -1 && randomlocker[3] > -1) {
//				break;
//			}
//			else if (random == randomlocker[0] or random == randomlocker[1] or random == randomlocker[2] or random == randomlocker[3])
//			{
//				continue;
//			}
//			else
//			{
//				randomlocker[i] = random;
//				i++;
//			}
//
//		}
//		for (size_t i = 0; i < 4; i++) {
//
//			cout << i + 1 << ":" << answers[randomlocker[i]] << endl;
//			RandomAnswers.push_back(answers[randomlocker[i]]);
//		}
//
//
//	}
//	string getTrueAnswer() { return trueAnswer; }
//	vector<string> getRandomAnswers() { return RandomAnswers; }
//};
//
//
//
//
//class quizz :public Question {
//	vector<Question>_questions;
//	vector<int> randomlocker;
//
//public:
//
//	quizz(const vector<Question> questions) {
//		_questions = questions;
//
//	}
//	void printQuestions() {
//		for (Question i : _questions) {
//			i.print();
//			cout << endl;
//		}
//	}
//	//Questions only random
//	void printQuestionsRandomly() {
//		for (size_t i = 0; i < _questions.size(); i++)
//		{
//			randomlocker.push_back(-1);
//		}
//
//		bool prove = true;
//		int random = 0;
//		bool infiniteProve = false;
//		while (prove == true)
//		{
//			random = 0 + rand() % ((_questions.size() - 1) - 0 + 1);
//			for (size_t i = 0; i < _questions.size(); i++)
//
//			{
//				if (randomlocker[i] < 0)
//				{
//					infiniteProve = true;
//					for (size_t k = 0; k < i; k++)
//					{
//						if (randomlocker[k] == random)
//						{
//							infiniteProve = false;
//						}
//					}
//					if (infiniteProve)
//					{
//						randomlocker[i] = random;
//					}
//					break;
//				}
//				for (int j : randomlocker) {
//					if (j == randomlocker.back() and j > -1)
//					{
//						prove = false;
//					}
//				}
//
//			}
//		}
//
//		for (size_t i = 0; i < _questions.size(); i++) {
//
//			cout << i + 1 << ":";
//			_questions[randomlocker[i]].print();
//			cout << endl;
//		}
//	}
//
//	//Questions and answers random
//	void printQuestionsAnswersRandomly() {
//		for (size_t i = 0; i < _questions.size(); i++)
//		{
//			randomlocker.push_back(-1);
//		}
//
//		bool prove = true;
//		int random = 0;
//		bool infiniteProve = false;
//		while (prove == true)
//		{
//			random = 0 + rand() % ((_questions.size() - 1) - 0 + 1);
//			for (size_t i = 0; i < _questions.size(); i++)
//
//			{
//				if (randomlocker[i] < 0)
//				{
//					infiniteProve = true;
//					for (size_t k = 0; k < i; k++)
//					{
//						if (randomlocker[k] == random)
//						{
//							infiniteProve = false;
//						}
//					}
//					if (infiniteProve)
//					{
//						randomlocker[i] = random;
//					}
//					break;
//				}
//				for (int j : randomlocker) {
//					if (j == randomlocker.back() and j > -1)
//					{
//						prove = false;
//					}
//				}
//
//			}
//		}
//		int choice = 0;
//		int rights = 0;
//		int wrongs = 0;
//		for (size_t i = 0; i < _questions.size(); i++) {
//
//			cout << "Sual no." << i + 1 << endl;;
//			cout << "Choice:";
//			cout << i + 1 << ":";
//			_questions[randomlocker[i]].printRandomly();
//			cout << endl;
//			try
//			{
//				cin >> choice;
//				if (!(choice < 1 and choice >4))
//				{
//					throw out_of_range("You must choice between 1 and 4");
//				}
//				if (_questions[i].getRandomAnswers()[choice - 1] == _questions[i].getTrueAnswer())
//				{
//					cout << "Right answer"<<endl;
//					++rights;
//				}
//				else 
//				{ 
//					cout << "Wrong answer,true answer is"<<_questions[i].getTrueAnswer() << endl;
//					++wrongs;
//				}
//			}
//			catch (const out_of_range& ex)
//			{
//				cout << "Wrong choice:";
//			}
//		}
//	}
//
//	void addQuestion(Question& newQuestion) {
//		_questions.push_back(newQuestion);
//	}
//
//
//};
//
//
//
//
//void main() {
//	srand(time(0));
//	Question q1("Bakinin paytaxti hansi sheherdi?", "baki", "qebele", "naxchivan", "zaqatala");
//	Question q2("Yaponyanin paytaxti hansi sheherdi?", "tokyo", "qebele", "naxchivan", "zaqatala");
//	Question q3("Ukraynanin paytaxti hansi sheherdi?", "kiev", "qebele", "naxchivan", "zaqatala");
//	vector<Question> quests{ q1,q2,q3 };
//	quizz quizz(quests);
//	quizz.printQuestionsAnswersRandomly();
//
//
//}