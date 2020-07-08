#include <gui/main_screen/MainView.hpp>
#include <gui/main_screen/MainPresenter.hpp>

MainPresenter::MainPresenter(MainView& v)
    : view(v)
{
}

void MainPresenter::activate()
{
    // ensure the timeliness of the animations
    HAL::getInstance()->setFrameRateCompensation(true);
}

void MainPresenter::deactivate()
{
    HAL::getInstance()->setFrameRateCompensation(false);
}
