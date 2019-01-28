#include "horse/unicorn/Unicorn.hpp"

#include <iostream>

#include "horse/unicorn/UnicornBuilder.hpp"

namespace horse
{

template <>
std::string toString(unicorn::HornColor hornColor)
{
	switch (hornColor)
	{
	case unicorn::HornColor::Black:
		return "Black";
	case unicorn::HornColor::Pale:
		return "Pale";
	case unicorn::HornColor::Perl:
		return "Perl";
	case unicorn::HornColor::Pink:
		return "Pink";
	case unicorn::HornColor::Rainbow:
		return "Rainbow";
	default:
		return "Unknown";
	}
}

namespace unicorn
{

Unicorn::Unicorn(std::string name, CoatColor coatColor, HairColor maneColor, HairColor tailColor, HornColor hornColor)
: Horse(name, coatColor, maneColor, tailColor)
, hornColor_(hornColor)
{
}

Unicorn::~Unicorn()
{
}

void Unicorn::showInfo()
{
	Horse::showInfo();
	std::cout << "HornColor: " << toString(hornColor_) << std::endl;
}

}
}