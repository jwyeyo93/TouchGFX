/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINMENUVIEWBASE_HPP
#define MAINMENUVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/mainmenu_screen/MainMenuPresenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <gui/containers/McuLoadWidget.hpp>

class MainMenuViewBase : public touchgfx::View<MainMenuPresenter>
{
public:
    MainMenuViewBase();
    virtual ~MainMenuViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image backgroundLeft;
    touchgfx::Image backgroundRight;
    touchgfx::Container demoScreensContainer00;
    touchgfx::Image demoScreenBackground00;
    touchgfx::Button demoScreenButton00;
    touchgfx::Container demoScreensContainer01;
    touchgfx::Image demoScreenBackground01;
    touchgfx::Button demoScreenButton01;
    touchgfx::Container demoScreensContainer02;
    touchgfx::Image demoScreenBackground02;
    touchgfx::Button demoScreenButton02;
    touchgfx::Container demoScreensContainer03;
    touchgfx::Image demoScreenBackground03;
    touchgfx::Button demoScreenButton03;
    McuLoadWidget mcuLoad;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<MainMenuViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // MAINMENUVIEWBASE_HPP
