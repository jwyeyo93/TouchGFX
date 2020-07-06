#ifndef EASING_EQUATION_GRAPH_HPP
#define EASING_EQUATION_GRAPH_HPP

#include <gui/graph_screen/graph_widget/GraphLine.hpp>
#include <touchgfx/containers/Container.hpp>
#if !defined(USE_BPP) || USE_BPP==16
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#elif USE_BPP==24
#include <touchgfx/widgets/canvas/PainterRGB888.hpp>
#elif defined(LCD8BPP_ABGR2222)
#include <touchgfx/widgets/canvas/PainterABGR2222.hpp>
#elif defined(LCD8BPP_RGBA2222)
#include <touchgfx/widgets/canvas/PainterRGBA2222.hpp>
#elif defined(LCD8BPP_BGRA2222)
#include <touchgfx/widgets/canvas/PainterBGRA2222.hpp>
#elif defined(LCD8BPP_ARGB2222) || USE_BPP==8
#include <touchgfx/widgets/canvas/PainterARGB2222.hpp>
#elif USE_BPP==4
#include <touchgfx/widgets/canvas/PainterGRAY4.hpp>
#elif USE_BPP==2
#include <touchgfx/widgets/canvas/PainterGRAY2.hpp>
#else
#error Unknown USE_BPP
#endif
#include <BitmapDatabase.hpp>

using namespace touchgfx;

/* Class that represents the graph displaying easing equations
*/
class EasingEquationGraph : public Container
{
public:

    EasingEquationGraph();
    virtual ~EasingEquationGraph() { }

    void setup(int newWidth, int newHeight, colortype lineColor, uint16_t lineWidth);

    template <class T>
    bool addValue(T x, T y)
    {
        return graphLine.addValue(x, y);
    }

    template <class T>
    bool deleteValue(T x)
    {
        return graphLine.deleteValue(x);
    }

    void clear()
    {
        graphLine.clearGraph();
    }

    void setRange(int left, int right, int top, int bottom);

protected:
    static const int NUMBER_OF_POINTS = 52;

    GraphLine graphLine;

    GraphLine::GraphPoint graphBuffer[NUMBER_OF_POINTS];

#if !defined(USE_BPP) || USE_BPP==16
    PainterRGB565 graphLinePainter;
#elif USE_BPP==24
    PainterRGB888 graphLinePainter;
#elif defined(LCD8BPP_ABGR2222)
    PainterABGR2222 graphLinePainter;
#elif defined(LCD8BPP_RGBA2222)
    PainterRGBA2222 graphLinePainter;
#elif defined(LCD8BPP_BGRA2222)
    PainterBGRA2222 graphLinePainter;
#elif defined(LCD8BPP_ARGB2222) || USE_BPP==8
    PainterARGB2222 graphLinePainter;
#elif USE_BPP==4
    PainterGRAY4 graphLinePainter;
#elif USE_BPP==2
    PainterGRAY2 graphLinePainter;
#else
#error Unknown USE_BPP
#endif
};

#endif
