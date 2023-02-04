#ifndef AMNavJoyStick_h
#define AMNavJoyStick_h

class AMNavJoyStick {
   public:
    AMNavJoyStick(int pinX, int pinY, int pinSW);
    int readX();
    int readY();
    bool readSW();

   private:
    int _pinX;
    int _pinY;
    int _pinSW;
    int correctJoyStick(int);
};
#endif