/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef CUSTOMCONTROLSVIEWBASE_HPP
#define CUSTOMCONTROLSVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/customcontrols_screen/CustomControlsPresenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <gui/containers/McuLoadWidget.hpp>
#include <touchgfx/widgets/Button.hpp>

class CustomControlsViewBase : public touchgfx::View<CustomControlsPresenter>
{
public:
    CustomControlsViewBase();
    virtual ~CustomControlsViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void menuUpClickedHandler()
    {
        // Override and implement this function in CustomControls
    }

    virtual void menuDownClickedHandler()
    {
        // Override and implement this function in CustomControls
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image menuBackground;
    touchgfx::Image background;
    McuLoadWidget mcuLoad;
    touchgfx::Button menuUp;
    touchgfx::Button menuDown;
    touchgfx::Button gotoMenu;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<CustomControlsViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // CUSTOMCONTROLSVIEWBASE_HPP