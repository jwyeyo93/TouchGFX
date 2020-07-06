#ifndef EASINGEQUATIONSENUM_HPP
#define EASINGEQUATIONSENUM_HPP

#include <touchgfx/EasingEquations.hpp>

using namespace touchgfx;

struct EasingEquationSelection
{
    EasingEquation in;
    EasingEquation out;
    EasingEquation inOut;

    TypedTextId EasingEquationName;
    TypedTextId EasingEquationShortName;
};

typedef enum
{
    EASING_EQUATION_IN,
    EASING_EQUATION_OUT,
    EASING_EQUATION_IN_OUT
} EasingEquationsInOrOut;

#endif
