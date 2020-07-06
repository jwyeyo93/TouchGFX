#ifndef THREE_WAY_PROGRESS_BAR_CIRCLE_HPP
#define THREE_WAY_PROGRESS_BAR_CIRCLE_HPP

#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

using namespace touchgfx;

class ThreeWayProgressBarCircle : public Container
{
public:
    ThreeWayProgressBarCircle();
    virtual ~ThreeWayProgressBarCircle();

    void setIcon(BitmapId newIconBmp, BitmapId newIconActiveBmp);
    void setActive(bool active);

    void setPercentage(int percentage);

private:
    BitmapId iconBmp;
    BitmapId iconActiveBmp;

    Image background;
    Image icon;
    TextAreaWithOneWildcard text;
    Unicode::UnicodeChar textBuffer[5];
};

#endif /* THREE_WAY_PROGRESS_BAR_CIRCLE_HPP */
