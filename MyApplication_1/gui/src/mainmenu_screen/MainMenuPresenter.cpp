#include <gui/mainmenu_screen/MainMenuView.hpp>
#include <gui/mainmenu_screen/MainMenuPresenter.hpp>

MainMenuPresenter::MainMenuPresenter(MainMenuView& v)
    : view(v)
{
}

void MainMenuPresenter::activate()
{
    view.setSelectedMenuIndex(model->getSelectedMenuIndex());
}

void MainMenuPresenter::deactivate()
{
}

void MainMenuPresenter::mcuLoadUpdated(uint8_t mcuLoad)
{
    view.updateProcessorLoad(mcuLoad);
}

void MainMenuPresenter::demoSelected(DemoID id, uint8_t menuIndex)
{
    model->setSelectedMenuIndex(menuIndex);
}
