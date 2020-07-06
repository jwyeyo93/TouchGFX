#ifndef MAINMENU_VIEW_HPP
#define MAINMENU_VIEW_HPP

#include <gui_generated/mainmenu_screen/MainMenuViewBase.hpp>
#include <gui/mainmenu_screen/MainMenuPresenter.hpp>
#include <gui/common/SwipeContainer.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

class MainMenuView : public MainMenuViewBase
{
public:
    MainMenuView();
    virtual ~MainMenuView();
    virtual void setupScreen();
    virtual void tearDownScreen();

    void setSelectedMenuIndex(uint8_t demoIndex);

    virtual void afterTransition();

    void updateProcessorLoad(uint8_t mcuLoadValue);

protected:
    static const int NUMBER_OF_DEMO_SCREENS = 4;

    MainMenuPresenter::DemoID demoScreenIndex[NUMBER_OF_DEMO_SCREENS];

    Image backgroundLeft;
    Image backgroundRight;

    SwipeContainer menuContainer;

    Callback<MainMenuView, const SwipeContainer&> menuStateChangeInitiatedCallback;
    Callback<MainMenuView, const SwipeContainer&> menuStateChangeEndedCallback;

    void menuStateChangeInitiatedHandler(const SwipeContainer& sc);
    void menuStateChangeEndedHandler(const SwipeContainer& sc);
};

#endif // MAINMENU_VIEW_HPP
