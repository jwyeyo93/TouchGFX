#include <gui/easingequation_screen/EasingEquationView.hpp>
#include <gui/easingequation_screen/EasingEquationPresenter.hpp>

EasingEquationPresenter::EasingEquationPresenter(EasingEquationView& v)
    : view(v)
{
}

void EasingEquationPresenter::activate()
{
}

void EasingEquationPresenter::deactivate()
{
}

void EasingEquationPresenter::mcuLoadUpdated(uint8_t mcuLoadValue)
{
    view.updateProcessorLoad(mcuLoadValue);
}
