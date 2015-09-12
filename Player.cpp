/* Player class */
#include <iostream>
#include <string>

using namespace std;

class Player {
	
	string playerName;
<<<<<<< HEAD
	int playerAge;
	int playerNum;

	public:
		Player(string, int, int);
		string getName();
		int getAge();
		int getNum();
};

Player::Player(string name, int age, int num) {
	playerName = name;
	playerAge = age;
	playerNum = num;
=======
>>>>>>> parent of 312b9fe... Add age value and getAge() method to Player class.
}

string Player::getName() {
	return playerName;
}

<<<<<<< HEAD
int Player::getAge() {
	return playerAge;
}

int Player::getNum() {
	return playerNum;
}

int main() {
	Player player ("Dave", 23, 1);
	cout << "Player: " << endl;
	cout << "Name: " << player.getName() << endl;
	cout << "Age: " << player.getAge() << endl;
	cout << "Number: " << player.getNum() << endl;
=======
>>>>>>> parent of 312b9fe... Add age value and getAge() method to Player class.
	return 0;
}
