#ifndef VERTICAL_SLIDE_MENU_HPP_
#define VERTICAL_SLIDE_MENU_HPP_

#include <touchgfx/containers/Container.hpp>
#include <touchgfx/containers/ZoomAnimationImage.hpp>

using namespace touchgfx;

class VerticalSlideMenu : public Container
{
public:
    VerticalSlideMenu();
    virtual ~VerticalSlideMenu();

    void animateUp();
    void animateDown();
    void setup(int numberOfElements, int selectedElementIndex, Bitmap smallBmp, Bitmap largeBmp);
    void setBitmapsForElement(int elementIndex, BitmapId smallBmp, BitmapId largeBmp);

    void setAnimationDuration(int duration)
    {
        animationDuration = duration;
    }
    int getAnimationDuration()
    {
        return animationDuration;
    }

    void setElementSelectedCallback(touchgfx::GenericCallback<const VerticalSlideMenu&>& callback)
    {
        elementSelectedAction = &callback;
    }
    int getSelectedElementIndex()
    {
        return currentSelected;
    }

    int getSize()
    {
        return size;
    }
private:
    static const uint8_t MAX_SIZE = 10;

    GenericCallback<const VerticalSlideMenu&>* elementSelectedAction;

    ZoomAnimationImage images[MAX_SIZE];

    uint8_t size;
    uint8_t currentSelected;

    int animationDuration;

    int largeImageY;
    int smallImageWidth;
    int largeImageWidth;
    int imagesYPositionDelta;
    int largeImageHeight;
    int smallImageX;
    int smallImageHeight;
    int largeImageX;
    int fixedCenterCorrection;

    Callback<VerticalSlideMenu, const ZoomAnimationImage&> animationEndedCallback;
    void animationEndedHandler(const ZoomAnimationImage& image);
    bool animating();
};

#endif /* VERTICAL_SLIDE_MENU_HPP_ */
