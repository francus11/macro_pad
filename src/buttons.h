#include <Arduino.h>
class Buttons
{
    private:
    int ** responce;
    byte xPins;
    byte yPins;
    byte xSize;
    byte ysize;

    public:
    Buttons();
    int clickedButton();

};