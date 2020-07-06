#ifndef LEGEND_ENTRY_HPP
#define LEGEND_ENTRY_HPP

#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

using namespace touchgfx;

class LegendEntry : public Container
{
public:
    LegendEntry();
    virtual ~LegendEntry();

    void setBitmaps(BitmapId squareNotSelectedBmp, BitmapId squareSelectedBmp);
    void setText(TEXTS textId);
    void setValueText(int value);
    void setSelected(bool selected);

    void setSelectionCallback(GenericCallback<const LegendEntry&>& callback)
    {
        selectionAction = &callback;
    }

private:
    BitmapId squareNotSelected;
    BitmapId squareSelected;

    Image square;

    TextArea text;
    TextAreaWithOneWildcard valueText;
    Unicode::UnicodeChar valueTextBuffer[6];

    Button selectButton;

    Callback<LegendEntry, const AbstractButton&> onButtonPressed;
    void buttonPressedHandler(const AbstractButton& button);

    GenericCallback<const LegendEntry&>* selectionAction;
};

#endif
