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
	double eHealth,damage,remainingHealth,pHealth;
	bool lost,monsterEncounter;
	int attack;
	std::string rulez, logQ,lUser,lPass,playerName,choice,bigChoiceOne,choiceTwo;
};
#endif