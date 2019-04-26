#include "HorseBuilder.h"

namespace horse
{

HorseBuilder::~HorseBuilder()
{
}

std::shared_ptr<Horse> HorseBuilder::build()
{
	return std::make_shared<Horse>(
		horseElements_.name_, 
		horseElements_.coatColor_, 
		horseElements_.maneColor_, 
		horseElements_.tailColor_);
}

}