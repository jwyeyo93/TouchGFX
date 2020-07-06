#ifndef CUSTOMCONTROLS_PRESENTER_HPP
#define CUSTOMCONTROLS_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class CustomControlsView;

class CustomControlsPresenter : public Presenter, public ModelListener
{
public:
    CustomControlsPresenter(CustomControlsView& v);

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

    virtual ~CustomControlsPresenter() {};

    virtual void screenSaverMinorTick();
    virtual void screenSaverMajorTick();

    void mcuLoadUpdated(uint8_t mcuLoadValue);
private:
    CustomControlsPresenter();

    CustomControlsView& view;
};

#endif // CUSTOMCONTROLS_PRESENTER_HPP
