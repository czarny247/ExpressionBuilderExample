#pragma once
#include <string>

namespace horse
{ 

enum class CoatColor
{
	Black = 0,
	Brown,
	CreamyGolden,
	RichGolden,
	Ginger,
	Pale,
	Grey
};

enum class HairColor
{
	Black = 0,
	Brown,
	Pale,
	Grey,
	Ginger
};

template <typename EnumClass>
std::string toString(EnumClass);

template <>
std::string toString(CoatColor coatColor);

template <>
std::string toString(HairColor hairColor);

class Horse
{
public:
	Horse(std::string name, CoatColor coatColor, HairColor maneColor, HairColor tailColor);
	virtual ~Horse();
	
	std::string getName();
	CoatColor getCoatColor();
	HairColor getManeColor();
	HairColor getTailColor();

	virtual void showInfo();

private:
	std::string name_;
	CoatColor coatColor_;
	HairColor maneColor_;
	HairColor tailColor_;
};

}