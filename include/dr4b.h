#include "ports.h"
#include "subsystem.h"

#ifndef DR4B_H
#define DR4B_H

class DR4B : Subsystem{
    public:
      DR4B(const char *name, int motors[10], int revField[10],
  		const int num, int sensors[10], const char id);
      void moveTo();
  		void debug();
  		void iterateCtl();
      void backup();
  		int eStop();
      void init();
      bool safe();
      int getHeight(char h);
      bool safety;

    private:


      //Starting potentiometer values for each side of the lift
      int startLiftL;
      int startLiftR;

      int liftSpeedL;
      int liftSpeedR;

      int desiredLift; //desired position (as a zeroed potentiometer value)
      int prevTime;

      //lift port
      int _r;
      int _l;

      //sensors
      Encoder _le;
      Encoder _re;

      int prevErrorL;
      int prevErrorR;
};
#endif
