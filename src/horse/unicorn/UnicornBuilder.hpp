#pragma once
#include "horse/HorseBuilderBase.hpp"

#include "horse/unicorn/Unicorn.hpp"

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