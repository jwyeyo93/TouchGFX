#include <gui/customcontrols_screen/CustomControlsView.hpp>
#include <gui/customcontrols_screen/CustomControlsPresenter.hpp>

CustomControlsPresenter::CustomControlsPresenter(CustomControlsView& v)
    : view(v)
{
}

void CustomControlsPresenter::activate()
{
}

void CustomControlsPresenter::deactivate()
{
}

void CustomControlsPresenter::screenSaverMinorTick()
{
    view.screenSaverMinorTick();
}

void CustomControlsPresenter::screenSaverMajorTick()
{
    // Override default behaviour (from ModelListener.hpp)
    return;
}

void CustomControlsPresenter::mcuLoadUpdated(uint8_t mcuLoadValue)
{
    view.updateProcessorLoad(mcuLoadValue);
}
