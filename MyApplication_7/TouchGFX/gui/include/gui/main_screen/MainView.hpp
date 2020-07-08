#ifndef MAIN_VIEW_HPP
#define MAIN_VIEW_HPP

#include <gui_generated/main_screen/MainViewBase.hpp>
#include <gui/main_screen/MainPresenter.hpp>
#include <touchgfx/widgets/TextureMapper.hpp>

class MainView : public MainViewBase
{
public:
    MainView();
    virtual ~MainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void handleTickEvent();
protected:

private:
    float xAngle3D;
    float yAngle3D;
    float zAngle3D;

    float deltaXangle3D;
    float deltaYangle3D;
    float deltaZangle3D;

    float zAngle2D;

    float deltaZangle2D;
};

#endif // MAIN_VIEW_HPP
