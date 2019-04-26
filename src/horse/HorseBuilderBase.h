#ifndef HORSE_BUILDER_BASE_H
#define HORSE_BUILDER_BASE_H

#include "Horse.h"
#include "IHorseBuilder.h"

#include <memory>
#include <string>

namespace horse
{

struct HorseElements
{
	std::string name_;
	CoatColor coatColor_;
	HairColor maneColor_;
	HairColor tailColor_;
};

template <typename TBuilderType>
class HorseBuilderBase : public IHorseBuilder
{
public:
	HorseBuilderBase();
	virtual ~HorseBuilderBase();

	TBuilderType& name(std::string name);
	TBuilderType& coatColor(CoatColor coatColor);
	TBuilderType& maneColor(HairColor maneColor);
	TBuilderType& tailColor(HairColor tailColor);

	virtual std::shared_ptr<Horse> build() = 0;

protected:
	//todo store in horse parameters structure and keep it as pointer or optional
	HorseElements horseElements_;

private:
	TBuilderType& builder();
};

}

namespace horse
{

template <typename TBuilderType>
HorseBuilderBase<TBuilderType>::HorseBuilderBase()
{
}

template <typename TBuilderType>
HorseBuilderBase<TBuilderType>::~HorseBuilderBase()
{
}

template<typename TBuilderType>
TBuilderType & HorseBuilderBase<TBuilderType>::name(std::string name)
{
	horseElements_.name_ = name;
	return builder();
}

template<typename TBuilderType>
TBuilderType & HorseBuilderBase<TBuilderType>::coatColor(CoatColor coatColor)
{
	horseElements_.coatColor_ = coatColor;
	return builder();
}

template<typename TBuilderType>
TBuilderType & HorseBuilderBase<TBuilderType>::maneColor(HairColor maneColor)
{
	horseElements_.maneColor_ = maneColor;
	return builder();
}

template<typename TBuilderType>
TBuilderType & HorseBuilderBase<TBuilderType>::tailColor(HairColor tailColor)
{
	horseElements_.tailColor_ = tailColor;
	return builder();
}

template<typename TBuilderType>
TBuilderType& HorseBuilderBase<TBuilderType>::builder()
{
	return *(static_cast<TBuilderType*>(this));
}

}

#endif //HORSE_BUILDER_BASE_H