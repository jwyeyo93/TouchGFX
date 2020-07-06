#ifndef GRAPH_PRESENTER_HPP
#define GRAPH_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class GraphView;

class GraphPresenter : public Presenter, public ModelListener
{
public:
    GraphPresenter(GraphView& v);
    virtual ~GraphPresenter() {};

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
    GraphPresenter();

    GraphView& view;
};

#endif // GRAPH_PRESENTER_HPP
