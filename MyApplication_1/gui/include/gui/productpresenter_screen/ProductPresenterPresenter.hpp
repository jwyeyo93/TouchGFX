#ifndef PRODUCTPRESENTER_PRESENTER_HPP
#define PRODUCTPRESENTER_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ProductPresenterView;

class ProductPresenterPresenter : public Presenter, public ModelListener
{
public:
    ProductPresenterPresenter(ProductPresenterView& v);
    virtual ~ProductPresenterPresenter() {};

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
    ProductPresenterPresenter();

    ProductPresenterView& view;
};

#endif // PRODUCTPRESENTER_PRESENTER_HPP
