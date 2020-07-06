#include <gui/main_screen/MainView.hpp>

MainView::MainView()
{

}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();
}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}

void MainView::buttonUpClicked()
{
    touchgfx_printf("buttonUpClicked\n");

    counter++;
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
    textCounter.invalidate();
}

void MainView::buttonDownClicked()
{
  touchgfx_printf("buttonDownClicked\n");

  counter--;
  if(counter < 0)
  {
      counter = 0;
  }
  Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
  textCounter.invalidate();
}
