#include "horse/pegasus/PegasusBuilder.hpp"

namespace horse
{
namespace pegasus
{

PegasusBuilder::~PegasusBuilder()
{
}

PegasusBuilder& horse::pegasus::PegasusBuilder::wingsType(WingsType wingsType)
{
	wingsType_ = wingsType;
	return *this;
}

std::shared_ptr<Horse> PegasusBuilder::build()
{
	return std::make_shared<Pegasus>(
		horseElements_.name_, 
		horseElements_.coatColor_, 
		horseElements_.maneColor_, 
		horseElements_.tailColor_, 
		wingsType_);
}

}
}