/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler),
    animationEndedCallback(this, &Screen1ViewBase::animationEndedCallbackHandler)
{

    boxBackground.setPosition(0, 0, 800, 480);
    boxBackground.setVisible(false);
    boxBackground.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    imgBackground.setXY(0, 0);
    imgBackground.setBitmap(touchgfx::Bitmap(BITMAP_BG_ID));

    animation.setXY(161, 18);
    animation.setBitmaps(BITMAP_ANI_01_ID, BITMAP_ANI_14_ID);
    animation.setUpdateTicksInterval(2);
    animation.setDoneAction(animationEndedCallback);

    btnToggle.setXY(175, 195);
    btnToggle.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_ID), touchgfx::Bitmap(BITMAP_BTN_PRESSED_ID));
    btnToggle.setLabelText(touchgfx::TypedText(T_TEXTSTART));
    btnToggle.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(213, 115, 0));
    btnToggle.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(213, 115, 0));
    btnToggle.setAction(buttonCallback);

    add(boxBackground);
    add(imgBackground);
    add(animation);
    add(btnToggle);
}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &btnToggle)
    {
        //buttonClicked
        //When btnToggle clicked execute C++ code
        //Execute C++ code
        if(animation.isRunning())
        {
            animation.pauseAnimation();
            btnToggle.setLabelText(TypedText(T_TEXTSTART));
        }
        else
        {
            animation.startAnimation(animation.isReverse(), false, true);
            btnToggle.setLabelText(TypedText(T_TEXTSTOP));
        }
    }
}

void Screen1ViewBase::animationEndedCallbackHandler(const touchgfx::AnimatedImage& src)
{
    if (&src == &animation)
    {
        //animationEnded
        //When animation animation ended execute C++ code
        //Execute C++ code
        animation.startAnimation(!animation.isReverse(), false, true);
    }
}