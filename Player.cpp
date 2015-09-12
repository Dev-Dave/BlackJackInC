/* Player class */
#include <iostream>
#include <string>

using namespace std;

class Player {
	
	string playerName;
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
}

string Player::getName() {
	return playerName;
}

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
	return 0;
}
