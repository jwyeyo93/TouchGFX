#include <gui/main_screen/MainView.hpp>
#include <BitmapDatabase.hpp>

MainView::MainView() :
    xAngle3D(0.0f),
    yAngle3D(0.0f),
    zAngle3D(0.0f),
    deltaXangle3D(0.032f),
    deltaYangle3D(0.029f),
    deltaZangle3D(0.027f),
    zAngle2D(0.0f),
    deltaZangle2D(0.019f)
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

void MainView::handleTickEvent()
{
    // Update angle values
    xAngle3D += deltaXangle3D;
    yAngle3D += deltaYangle3D;
    zAngle3D += deltaZangle3D;

    zAngle2D += deltaZangle2D;

    // Update the images with the new angles
    // The image is automatically invalidated (the optimal minimal area).
    // If any of the set..() methods (e.g. setOrigo, setCamera, setRenderingAlgorithm...) are used
    // remember to manually invalidate the image afterwards (textureMapperImage2D.invalidate()).
    textureMapperImage3D.updateAngles(xAngle3D, yAngle3D, zAngle3D);
    textureMapperImage2D.updateAngles(0.0F, 0.0F, zAngle2D);
}
