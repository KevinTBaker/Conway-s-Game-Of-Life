#ifndef game_h
#define game_h

class Life;
class World;

class Game {
public:
	// Constructor/destructor
	Game(Life **life, int numLife);
	~Game();

	void game_loop();
private:
	World * m_world;
	int m_steps;
	bool m_automate;
};

#endif
