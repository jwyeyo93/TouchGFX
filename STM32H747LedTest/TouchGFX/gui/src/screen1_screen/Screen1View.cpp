#include <gui/screen1_screen/Screen1View.hpp>
#include "stm32h747i_discovery.h"

Screen1View::Screen1View()
{
    BSP_LED_Init(LED1);
    BSP_LED_Init(LED2);
    BSP_LED_Init(LED3);
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}
