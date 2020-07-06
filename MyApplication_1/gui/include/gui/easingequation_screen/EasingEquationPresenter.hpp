#ifndef EASINGEQUATION_PRESENTER_HPP
#define EASINGEQUATION_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class EasingEquationView;

class EasingEquationPresenter : public Presenter, public ModelListener
{
public:
    EasingEquationPresenter(EasingEquationView& v);
    virtual ~EasingEquationPresenter() {};

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

    void mcuLoadUpdated(uint8_t mcuLoadValue);

private:
    EasingEquationPresenter();

    EasingEquationView& view;
};

#endif // EASINGEQUATION_PRESENTER_HPP
