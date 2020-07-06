/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

MainViewBase::MainViewBase() :
    buttonCallback(this, &MainViewBase::buttonCallbackHandler)
{

    backgroundBox.setPosition(0, 0, 800, 480);
    backgroundBox.setVisible(false);
    backgroundBox.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    backgroundImage.setXY(0, 0);
    backgroundImage.setBitmap(touchgfx::Bitmap(BITMAP_BG_ID));

    counterBackgroundImage.setXY(293, 59);
    counterBackgroundImage.setBitmap(touchgfx::Bitmap(BITMAP_COUNTER_BOX_ID));

    countTxt.setPosition(293, 87, 152, 89);
    countTxt.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    countTxt.setLinespacing(0);
    Unicode::snprintf(countTxtBuffer, COUNTTXT_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID1).getText());
    countTxt.setWildcard(countTxtBuffer);
    countTxt.setTypedText(touchgfx::TypedText(T_TEXTID1));

    buttonUp.setXY(52, 59);
    buttonUp.setBitmaps(touchgfx::Bitmap(BITMAP_UP_BTN_ID), touchgfx::Bitmap(BITMAP_UP_BTN_PRESSED_ID));
    buttonUp.setAction(buttonCallback);

    buttonDown.setXY(52, 157);
    buttonDown.setBitmaps(touchgfx::Bitmap(BITMAP_DOWN_BTN_ID), touchgfx::Bitmap(BITMAP_DOWN_BTN_PRESSED_ID));
    buttonDown.setAction(buttonCallback);

    button1.setXY(218, 6);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));

    add(backgroundBox);
    add(backgroundImage);
    add(counterBackgroundImage);
    add(countTxt);
    add(buttonUp);
    add(buttonDown);
    add(button1);
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonUp)
    {
        //IncreaseValue
        //When buttonUp clicked call virtual function
        //Call increaseValue
        increaseValue();
    }
    else if (&src == &buttonDown)
    {
        //DecreaseValue
        //When buttonDown clicked call virtual function
        //Call decreaseValue
        decreaseValue();
    }
}
