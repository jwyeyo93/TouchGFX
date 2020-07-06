#ifndef MAINMENU_PRESENTER_HPP
#define MAINMENU_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class MainMenuView;

class MainMenuPresenter : public Presenter, public ModelListener
{
public:
    enum DemoID
    {
        CUSTOM_CONTROLS = 0,
        GRAPH_SCREEN,
        EASING_EQUATION,
        PRODUCT_PRESENTER,
        NO_DEMO_SCREEN
    };

    MainMenuPresenter(MainMenuView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~MainMenuPresenter() {};

    void mcuLoadUpdated(uint8_t mcuLoad);
    void demoSelected(DemoID id, uint8_t menuIndex);

private:
    MainMenuPresenter();

    MainMenuView& view;
};

#endif // MAINMENU_PRESENTER_HPP
