#ifndef __Player_H__
#define __Player_H__

class Player 
{
public:

	Player();
	Player(const Player&) = default;
	Player(Player&&) = default;
	Player& operator=(const Player&);
	Player& operator=(Player&&);

	~Player();

	int m_x, m_y;

};

#endif // __Player_H__