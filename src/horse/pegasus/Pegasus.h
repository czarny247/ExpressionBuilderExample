#ifndef PEGASUS_H
#define PEGASUS_H

#include "../Horse.h"

#include <string>

namespace horse
{

enum class WingsType;

std::string toString(WingsType wingsType);

namespace pegasus
{

enum class WingsType
{
	Bird = 0,
	Bat,
	Butterfly
};

class Pegasus : public Horse
{
public:

	Pegasus(std::string name, CoatColor coatColor, HairColor maneColor, HairColor tailColor, WingsType wingsType);
	~Pegasus();

	void showInfo() override;

private:
	WingsType wingsType_;
};

}
}

#endif //PEGASUS_H