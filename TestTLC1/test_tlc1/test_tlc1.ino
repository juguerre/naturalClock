#include <Tlc5940.h>

#define  RED_CHANNEL  0
#define  GREEN_CHANNEL  1
#define  BLUE_CHANNEL  2


void setup() {
  /* Call Tlc.init() to setup the tlc.
     You can optionally pass an initial PWM value (0 - 4095) for all channels.*/
  Tlc.init();

}

void loop() {
  // put your main code here, to run repeatedly:

  /* Tlc.clear() sets all the grayscale values to zero, but does not send
       them to the TLCs.  To actually send the data, call Tlc.update() */
  Tlc.clear();

  Tlc.set(0, 4095);
  Tlc.set(1, 4095);
  Tlc.set(2, 4095);
  Tlc.update();

  delay(1000);


//  Tlc.set(RED_CHANNEL, 0);
//  Tlc.set(GREEN_CHANNEL, 4095);
//  Tlc.set(BLUE_CHANNEL, 0);
//  Tlc.update();
//
//  delay(1000);
//
//  Tlc.set(RED_CHANNEL, 4095);
//  Tlc.set(GREEN_CHANNEL, 0);
//  Tlc.set(BLUE_CHANNEL, 0);
//  Tlc.update();
//
//  delay(1000);
}
