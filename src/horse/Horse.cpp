#include "Horse.h"
#include "HorseBuilder.h"

#include <iostream>

namespace horse
{

template <>
std::string toString(CoatColor coatColor)
{
	switch (coatColor)
	{
	case CoatColor::Black:
		return "Black";
	case CoatColor::Brown:
		return "Brown";
	case CoatColor::CreamyGolden:
		return "CreamyGolden";
	case CoatColor::Ginger:
		return "Ginger";
	case CoatColor::Grey:
		return "Grey";
	case CoatColor::Pale:
		return "Pale";
	case CoatColor::RichGolden:
		return "RichGolden";
	default:
		return "Unknown";
	}
}

template <>
std::string toString(HairColor hairColor)
{
	switch(hairColor)
	{
	case HairColor::Black:
		return "Black";
	case HairColor::Brown:
		return "Brown";
	case HairColor::Pale:
		return "Pale";
	case HairColor::Grey:
		return "Grey";
	case HairColor::Ginger:
		return "Ginger";
	default:
		return "Unknown";
	}
}

Horse::Horse(std::string name, CoatColor coatColor, HairColor maneColor, HairColor tailColor)
: name_(name)
, coatColor_(coatColor)
, maneColor_(maneColor)
, tailColor_(tailColor)
{
}

Horse::~Horse()
{
}

std::string Horse::getName()
{
	return name_;
}

CoatColor Horse::getCoatColor()
{
	return coatColor_;
}

HairColor Horse::getManeColor()
{
	return maneColor_;
}

HairColor Horse::getTailColor()
{
	return tailColor_;
}

void Horse::showInfo()
{
	std::cout << "Name: " << name_ << std::endl
		<< "CoatColor: " << toString(coatColor_) << std::endl
		<< "ManeColor: " << toString(maneColor_) << std::endl
		<< "TailColor: " << toString(tailColor_) << std::endl;
}

}