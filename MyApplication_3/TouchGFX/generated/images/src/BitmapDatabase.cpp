// 4.13.0 dither_algorithm=2 alpha_dither=yes layout_rotation=0 opaque_image_format=RGB565 non_opaque_image_format=ARGB8888 section=ExtFlashSection extra_section=ExtFlashSection generate_png=no 0x9b3d72c3
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <platform/driver/lcd/LCD16bpp.hpp>

extern const unsigned char _background[]; // BITMAP_BACKGROUND_ID = 0, Size: 390x390 pixels
extern const unsigned char _icon00[]; // BITMAP_ICON00_ID = 1, Size: 36x36 pixels
extern const unsigned char _icon01[]; // BITMAP_ICON01_ID = 2, Size: 36x36 pixels
extern const unsigned char _icon02[]; // BITMAP_ICON02_ID = 3, Size: 36x36 pixels
extern const unsigned char _icon03[]; // BITMAP_ICON03_ID = 4, Size: 36x36 pixels
extern const unsigned char _icon04[]; // BITMAP_ICON04_ID = 5, Size: 36x36 pixels
extern const unsigned char _icon05[]; // BITMAP_ICON05_ID = 6, Size: 36x36 pixels
extern const unsigned char _icon06[]; // BITMAP_ICON06_ID = 7, Size: 36x36 pixels
extern const unsigned char _overlay[]; // BITMAP_OVERLAY_ID = 8, Size: 800x480 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { _background, 0, 390, 390, 0, 0, 390, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 390, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { _icon00, 0, 36, 36, 6, 5, 24, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 26, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _icon01, 0, 36, 36, 6, 5, 24, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 26, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _icon02, 0, 36, 36, 6, 5, 24, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 26, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _icon03, 0, 36, 36, 6, 5, 24, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 26, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _icon04, 0, 36, 36, 6, 5, 24, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 26, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _icon05, 0, 36, 36, 6, 5, 24, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 26, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _icon06, 0, 36, 36, 6, 5, 24, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 26, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _overlay, 0, 800, 480, 595, 0, 205, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 480, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}