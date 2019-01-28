#include "horse/pegasus/Pegasus.hpp"

#include "horse/pegasus/PegasusBuilder.hpp"

#include <iostream>

namespace horse
{

std::string toString(pegasus::WingsType wingsType)
{
	switch (wingsType)
	{
	case pegasus::WingsType::Bird:
		return "Bird";
	case pegasus::WingsType::Bat:
		return "Bat";
	case pegasus::WingsType::Butterfly:
		return "Butterfly";
	default:
		return "Unknown";
	}
}

namespace pegasus
{

Pegasus::Pegasus(std::string name, CoatColor coatColor, HairColor maneColor, HairColor tailColor, WingsType wingsType)
: Horse(name, coatColor, maneColor, tailColor)
, wingsType_(wingsType)
{
}

Pegasus::~Pegasus()
{
}

void Pegasus::showInfo()
{
	Horse::showInfo();
	std::cout << "WingsType: " << toString(wingsType_) << std::endl;
}

}
}