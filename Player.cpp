/* Player class */
#include <iostream>
#include <string>

using namespace std;

class Player {
	
	string playerName;

	public:
		Player(string);
		string getName();
};

Player::Player(string name) {
	playerName = name;
}

string Player::getName() {
	return playerName;
}

int main() {
	Player player ("Dave");
	cout << player.getName() << endl;
	return 0;
}
