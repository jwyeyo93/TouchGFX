// 4.13.0 dither_algorithm=2 alpha_dither=yes layout_rotation=0 opaque_image_format=RGB565 non_opaque_image_format=ARGB8888 section=ExtFlashSection extra_section=ExtFlashSection generate_png=no 0x565d4644
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <platform/driver/lcd/LCD16bpp.hpp>

extern const unsigned char _background[]; // BITMAP_BACKGROUND_ID = 0, Size: 480x272 pixels
extern const unsigned char _button_down_pressed[]; // BITMAP_BUTTON_DOWN_PRESSED_ID = 1, Size: 130x56 pixels
extern const unsigned char _button_down_released[]; // BITMAP_BUTTON_DOWN_RELEASED_ID = 2, Size: 130x56 pixels
extern const unsigned char _button_up_pressed[]; // BITMAP_BUTTON_UP_PRESSED_ID = 3, Size: 130x56 pixels
extern const unsigned char _button_up_released[]; // BITMAP_BUTTON_UP_RELEASED_ID = 4, Size: 130x56 pixels
extern const unsigned char _counter_box[]; // BITMAP_COUNTER_BOX_ID = 5, Size: 152x154 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { _background, 0, 480, 272, 0, 0, 480, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 272, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { _button_down_pressed, 0, 130, 56, 3, 0, 124, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 55, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _button_down_released, 0, 130, 56, 3, 0, 124, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 55, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _button_up_pressed, 0, 130, 56, 3, 0, 124, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 55, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _button_up_released, 0, 130, 56, 3, 0, 124, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 55, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _counter_box, 0, 152, 154, 0, 0, 152, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 154, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 }
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
