/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <fonts/ApplicationFontProvider.hpp>
#include <fonts/GeneratedFont.hpp>
#include <texts/TypedTextDatabase.hpp>

touchgfx::Font* ApplicationFontProvider::getFont(touchgfx::FontId typography)
{
    switch (typography)
    {
    case Typography::DEMOVIEW_MCULOAD_TEXT:
        // Asap_Regular_12_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[0]);
    case Typography::DEMOVIEW_MCULOAD_TEXT_SMALL:
        // Asap_Regular_11_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[1]);
    case Typography::POSTERTEXT:
        // Asap_Regular_12_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[0]);
    case Typography::POSTERHEADLINE:
        // Asap_Regular_18_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[2]);
    case Typography::POSTERTEXTJAPANESE:
        // ipaexg_12_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[3]);
    case Typography::POSTERHEADLINEJAPANESE:
        // ipaexg_18_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[4]);
    case Typography::POSTERTEXTUKR:
        // NotoSans_Regular_12_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[5]);
    case Typography::POSTERHEADLINEUKR:
        // NotoSans_Regular_18_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[6]);
    case Typography::THREEWAYPROGRESSBARPERCENTAGE:
        // Asap_Bold_otf_12_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[7]);
    case Typography::THREEWAYPROGRESSBARBUTTON:
        // Asap_Bold_otf_18_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[8]);
    case Typography::CUSTOMCONTROLSSTATUS:
        // Asap_Regular_12_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[0]);
    case Typography::PERCENTAGEBARREADOUT:
        // Asap_Bold_otf_46_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[9]);
    case Typography::PERCENTAGEBARHEADLINE:
        // Asap_Regular_15_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[10]);
    case Typography::DATEPICKER:
        // Asap_Bold_otf_15_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[11]);
    case Typography::EASINGEQUATION:
        // Asap_Bold_otf_18_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[8]);
    case Typography::EASINGEQUATIONBUTTON:
        // Asap_Regular_15_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[10]);
    case Typography::GRAPH_Y_VALUE:
        // Asap_Regular_15_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[10]);
    case Typography::GRAPH_LEGEND:
        // Asap_Regular_12_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[0]);
    case Typography::GRAPH_LEGEND_VALUE:
        // Asap_Bold_otf_12_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[7]);
    default:
        return 0;
    }
}
