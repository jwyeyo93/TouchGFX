#ifndef EASINGEQUATIONSELECTOR_HPP
#define EASINGEQUATIONSELECTOR_HPP

#include <touchgfx/containers/Container.hpp>
#include <touchgfx/containers/ScrollableContainer.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/containers/ListLayout.hpp>
#include <touchgfx/widgets/RadioButtonGroup.hpp>
#include <gui/easingequation_screen/EasingEquationButton.hpp>

using namespace touchgfx;

/* Class that represents the scrolling list of EasingEquations
*/
class EasingEquationSelector : public Container
{
public:
    EasingEquationSelector();
    void setEasingEquationSelectedCallback(GenericCallback<const EasingEquationSelection&>& callback);
    void select(int index);

private:
    static const int NUMBER_OF_EQUATION_TYPES = 11;

    ListLayout easings;
    ScrollableContainer scrollable;
    RadioButtonGroup<NUMBER_OF_EQUATION_TYPES> equationsGroup;
    EasingEquationButton buttons[NUMBER_OF_EQUATION_TYPES];

    Callback<EasingEquationSelector, const AbstractButton&> onSelected;
    void selected(const AbstractButton& btn);

    GenericCallback<const EasingEquationSelection&>* easingEquationSelected;
};

#endif /* EASINGEQUATIONSELECTOR_HPP */
