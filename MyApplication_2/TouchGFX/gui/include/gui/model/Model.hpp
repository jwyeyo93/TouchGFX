#include <touchgfx/hal/types.hpp>

#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void saveHour(int16_t saveHour)
    {
        hour = saveHour;
	}

    void saveMinute(int16_t saveMinute)
    {
        minute = saveMinute;
	}

    int16_t getHour()
    {
        return hour;
	}

    int16_t getMinute()
    {
        return minute;
	}

protected:
    ModelListener* modelListener;
    int16_t hour;
    int16_t minute;
};

#endif // MODEL_HPP
