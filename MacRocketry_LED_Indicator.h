#ifndef MacRocketry_LED_Indicator_h
#define MacRocketry_LED_Indicator_h

#include <Arduino.h>  //include Arduino library

#define redPin 9
#define greenPin 6
#define bluePin 5

class MacRocketry_LED_Indicator {
  public:
    MacRocketry_LED_Indicator(void); //constructor

    bool setStatusBMP(bool stats);  //check BMP error
    bool setStatusGPS(int fix);     //check GPS error
    bool setStatusSD(bool stats);   //check SD error
    
    void setRGB(char r, char g, char b);
    void displayLED(void);
    
  private:
    bool BMP_Status;
    bool GPS_Status;
    bool SD_Status;
    char error;

};

#endif