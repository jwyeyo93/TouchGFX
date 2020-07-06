#include <gui/screen1_screen/Screen1View.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1View::Screen1View()
{
    // Support of larger displays for this example
    // is handled by showing a black box in the
    // unused part of the display.
    if (HAL::DISPLAY_WIDTH > imgBackground.getWidth() ||
            HAL::DISPLAY_HEIGHT > imgBackground.getHeight())
    {
        boxBackground.setVisible(true);
    }
}

void Screen1View::setupScreen()
{
}

void Screen1View::tearDownScreen()
{
}
