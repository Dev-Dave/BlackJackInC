/* Player class */
#include <iostream>
#include <string>

using namespace std;

class Player {
	
	string playerName;
	int playerAge;
	public:
		Player(string, int);
		string getName();
		int getAge();
};

Player::Player(string name, int age) {
	playerName = name;
	playerAge = age;
}

string Player::getName() {
	return playerName;
}

int Player::getAge() {
	return playerAge;
}

int main() {
	Player player ("Dave", 23);
	cout << "Player: " << endl;
	cout << "Name: " << player.getName() << endl;
	cout << "Age: " << player.getAge() << endl;
	return 0;
}
