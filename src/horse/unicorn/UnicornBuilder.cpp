#include "horse/unicorn/UnicornBuilder.hpp"

namespace horse
{
namespace unicorn
{

UnicornBuilder::~UnicornBuilder()
{
}

UnicornBuilder & horse::unicorn::UnicornBuilder::hornColor(HornColor hornColor)
{
	hornColor_ = hornColor;
	return *this;
}

std::shared_ptr<Horse> UnicornBuilder::build()
{
	return std::make_shared<Unicorn>(
		horseElements_.name_, 
		horseElements_.coatColor_, 
		horseElements_.maneColor_, 
		horseElements_.tailColor_, 
		hornColor_);
}

}
}