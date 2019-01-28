#pragma once
#include "horse/Horse.hpp"

#include <string>

namespace horse
{

enum class HornColor;

template <> 
std::string toString(HornColor hornColor);

namespace unicorn
{ 

enum class HornColor
{
	Black = 0,
	Pale,
	Perl,
	Pink,
	Rainbow
};

class UnicornBuilder;

class Unicorn : public Horse
{
public:

	Unicorn(std::string name, CoatColor coatColor, HairColor maneColor, HairColor tailColor, HornColor hornColor);
	~Unicorn();

	void showInfo();

private:

	HornColor hornColor_;
};

}
}