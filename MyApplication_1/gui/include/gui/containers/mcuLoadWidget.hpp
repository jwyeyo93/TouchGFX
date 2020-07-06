#ifndef MCULOADWIDGET_HPP
#define MCULOADWIDGET_HPP

#include <gui_generated/containers/mcuLoadWidgetBase.hpp>
#include <touchgfx/Color.hpp>

class McuLoadWidget : public McuLoadWidgetBase
{
public:
    McuLoadWidget();
    virtual ~McuLoadWidget() {}

    void updateProcessorLoad(uint8_t mcuLoad);

    void setTextColor(colortype color);
protected:
};

#endif // MCULOADWIDGET_HPP
