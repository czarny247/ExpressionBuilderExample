#ifndef UNICORN_BUILDER_H
#define UNICORN_BUILDER_H

#include "../HorseBuilderBase.h"
#include "Unicorn.h"

#include <memory>

namespace horse
{
namespace unicorn
{
class UnicornBuilder : public HorseBuilderBase<UnicornBuilder>
{
public:
	UnicornBuilder() = default;
	~UnicornBuilder();

	UnicornBuilder& hornColor(HornColor hornColor);

	std::shared_ptr<Horse> build() override;

private:
	HornColor hornColor_;
};
}
}

#endif //UNICORN_BUILDER_H