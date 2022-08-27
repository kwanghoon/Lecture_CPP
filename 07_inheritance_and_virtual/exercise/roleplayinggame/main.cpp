#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Creature.h"
#include "Human.h"
#include "Elf.h"
#include "Balrog.h"
#include "Cyberdemon.h"
// #include "HumanAuto.h"
// #include "ElfAuto.h"
// #include "BalrogAuto.h"
// #include "CyberdemonAuto.h"

using namespace std;

void print(Creature* creatures[], int num) {
	cout << endl;
	for (int i = 0; i < num; i++)
		cout << creatures[i]->getSpecies() << " is at " <<
		creatures[i]->getX() << "," <<
		creatures[i]->getY() << "." <<
		" hitpoints=" << creatures[i]->getHitpoints() << ", " << 
		" strength=" << creatures[i]->getStrength() << endl;
	cout << endl;
}

bool isGameOver(Creature* creatures[], int num) {
	// creature[0] is Human and the rest are monsters
	bool meDie = creatures[0]->getHitpoints() <= 0;

	bool allMonstersDie = true;
	for (int i = 1; i < num; i++)
		allMonstersDie = 
			allMonstersDie && (creatures[i]->getHitpoints() <= 0);

	return meDie || allMonstersDie;
}

void moveAll(Creature* creatures[], int num) {
	for (int i = 0; i < num; i++)
		creatures[i]->move(5, 5);  // 5x5 board
}

void battleArena(Creature& c1, Creature& c2) {
	int hit1 = c1.getHitpoints();
	int hit2 = c2.getHitpoints();

	int damageBy1 = c1.getDamage();
	hit2 = hit2 - damageBy1;
	cout << c2.getSpecies() << " has "
		<< hit2 << " hit points." << endl;

	int damageBy2 = c2.getDamage();
	hit1 = hit1 - damageBy2;
	cout << c1.getSpecies() << " has "
		<< hit2 << " hit points." << endl;

	c1.setHitpoints(hit1);
	c2.setHitpoints(hit2);
}

void playGame(Creature* creatures[], int num) {
	while (isGameOver(creatures, num) == false) {
		print(creatures, num);

		moveAll(creatures, num);

		for(int i=1; i<num; i++) {
			if (creatures[0]->getX() == creatures[i]->getX()
				&& creatures[0]->getY() == creatures[i]->getY()) {
				battleArena(*creatures[0], *creatures[i]);
			}
		} 
	}
	print(creatures, num);
}

/*
void replay(Creature* creatures[], int num) {
	for (int i = 0; i < num; i++)
		creatures[i]->initializeAutoplay();

	Creature::setAutoplay(true);

	playGame(creatures, num);
}
*/

int main() {
	srand(static_cast<int>(time(NULL)));

	Human h(50, 50, 3, 3);
	Elf e(50, 50, 0, 3);
	Balrog b(50, 50, 3, 0);
	Cyberdemon c(50, 50, 4, 3);

	// creature[0] is Human and the rest are monsters
	Creature* creatures[] = { &h, &e, &b, &c };
	playGame(creatures, 4);

	// 	replay(creatures, 4);
}
