#ifndef GAME_H
#define GAME_H

class game{
public:
	game();
	~game();
	void newGame();
	void continueGame();
	void options();
	void endGame();
	void credits();
	void startScreen();
	void newLogin();
	void login();
	void introduction();
	void story();
	void player();
	void playerHealth();
	void enemy();
	void enemyHealth();
	void lostHealth();
	void gameOver();
	double eHealth;
	double damage;
	double remainingHealth;
	double pHealth;
	bool lost;
	bool monsterEncounter;
	int attack;
	std::string rulez;
	std::string logQ;
	std::string lUser;
	std::string lPass;
	std::string playerName;
	std::string choice;
	std::string bigChoiceOne;
	std::string choiceTwo;
};
#endif