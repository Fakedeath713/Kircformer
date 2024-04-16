#ifndef __Game_H__
#define __Game_H__

#include <vector>
#include "Player.hpp"
#include "Platform.hpp"

class Game 
{
public:
	void start();

private:
	Player* m_player;
	std::vector<Platform> m_platforms;
};

#endif // __Game_H__