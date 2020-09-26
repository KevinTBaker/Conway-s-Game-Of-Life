#include "game.h"
#include "life.h"
#include "ring.h"
#include "toad.h"
#include "world.h"
#include "utils.h"

void report()
{
	std::string msg = "Hello World!"; // Replace Hello World with your answer.
	std::cout << msg << std::endl;
}

int main()
{

	Life **population = new Life*[2];

	//population[0] = new Toad(4, 5); //toad alone
	//int numLife = 1;

	//population[0] = new Ring(1,1); //glider alone
	//int numLife = 1;


	population[0] = new Ring(4, 4); // Toad and Glider
	population[1] = new Toad(14, 14);
	int numLife = 2;

	//Create the game
	Game g(population, numLife);
	//runs the game
	g.game_loop();
	// Report
	report();
	//Clean up
	delete population[0];
	delete population[1];
	delete[] population;
	return (0);
}
