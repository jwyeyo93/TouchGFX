#include <gui/productpresenter_screen/ProductPresenterView.hpp>
#include <gui/productpresenter_screen/ProductPresenterPresenter.hpp>

ProductPresenterPresenter::ProductPresenterPresenter(ProductPresenterView& v)
    : view(v)
{
}

void ProductPresenterPresenter::activate()
{
}

void ProductPresenterPresenter::deactivate()
{
    // Reset language to be GBR as is used in
    // the rest of the demo
    Texts::setLanguage(GBR);
}

void ProductPresenterPresenter::mcuLoadUpdated(uint8_t mcuLoadValue)
{
    view.updateProcessorLoad(mcuLoadValue);
}
