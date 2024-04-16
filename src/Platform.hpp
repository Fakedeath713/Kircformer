#ifndef __Platform_H__
#define __Platform_H__

class Platform 
{
public:

	Platform();
	Platform(const Platform&) = default;
	Platform(Platform&&) = default;
	Platform& operator=(const Platform&);
	Platform& operator=(Platform&&);

	~Platform();

	int m_x, m_y;

};

#endif // __Platform_H__