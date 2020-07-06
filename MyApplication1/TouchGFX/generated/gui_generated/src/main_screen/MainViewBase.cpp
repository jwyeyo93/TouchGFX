/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

MainViewBase::MainViewBase() :
    buttonCallback(this, &MainViewBase::buttonCallbackHandler)
{

    backgroundImage.setXY(0, -1);
    backgroundImage.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));

    buttonUp.setXY(40, 59);
    buttonUp.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_UP_RELEASED_ID), touchgfx::Bitmap(BITMAP_BUTTON_UP_PRESSED_ID));
    buttonUp.setAction(buttonCallback);

    buttonDown.setXY(40, 152);
    buttonDown.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_DOWN_RELEASED_ID), touchgfx::Bitmap(BITMAP_BUTTON_DOWN_PRESSED_ID));
    buttonDown.setAction(buttonCallback);

    textBackground.setXY(250, 58);
    textBackground.setBitmap(touchgfx::Bitmap(BITMAP_COUNTER_BOX_ID));

    textCounter.setPosition(250, 90, 152, 90);
    textCounter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textCounter.setLinespacing(0);
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID2).getText());
    textCounter.setWildcard(textCounterBuffer);
    textCounter.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));

    add(backgroundImage);
    add(buttonUp);
    add(buttonDown);
    add(textBackground);
    add(textCounter);
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonUp)
    {
        //InteractionButtonUp
        //When buttonUp clicked call virtual function
        //Call buttonUpClicked
        buttonUpClicked();
    }
    else if (&src == &buttonDown)
    {
        //InteractionButtonDown
        //When buttonDown clicked call virtual function
        //Call buttonDownClicked
        buttonDownClicked();
    }
}
