
#include <Bounce.h>

// Action buttons 
Bounce button0 = Bounce(0, 10);
Bounce button1 = Bounce(1, 10);  
Bounce button2 = Bounce(2, 10); 
Bounce button3 = Bounce(3, 10);

// Shoulder buttons 
Bounce button4 = Bounce(4, 10);
Bounce button5 = Bounce(5, 10);  
Bounce button6 = Bounce(6, 10); 
Bounce button7 = Bounce(7, 10);

// Select
Bounce button8 = Bounce(8, 10);

// Start
Bounce button9 = Bounce(9, 10);

// Thumb/Stick Buttons
Bounce button10 = Bounce(10, 10);
Bounce button11 = Bounce(11, 10);

// D-Pad
Bounce button12 = Bounce(20, 10);
Bounce button13 = Bounce(21, 10);  
Bounce button14 = Bounce(22, 10);  
Bounce button15 = Bounce(23, 10);

void setup() {
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(20, INPUT_PULLUP);
  pinMode(21, INPUT_PULLUP);
  pinMode(22, INPUT_PULLUP);
  pinMode(23, INPUT_PULLUP);

  //  Set all axes to defaults
  Joystick.X(512);
  Joystick.Y(512);
  Joystick.Z(512);
  Joystick.Zrotate(512);
}

void loop() {

  Joystick.X(analogRead(0));
  Joystick.Y(analogRead(1));
  Joystick.Z(analogRead(2));
  Joystick.Zrotate(analogRead(3));
  
  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();
  button8.update();
  button9.update();
  button10.update();
  button11.update();
  button12.update();
  button13.update();
  button14.update();
  button15.update();
  
  if (button0.fallingEdge()) {
    Joystick.button(1, 1);
  }
  if (button1.fallingEdge()) {
    Joystick.button(2, 1);
  }
  if (button2.fallingEdge()) {
    Joystick.button(3, 1);
  }
  if (button3.fallingEdge()) {
    Joystick.button(4, 1);
  }
  if (button4.fallingEdge()) {
    Joystick.button(5, 1);
  }
  if (button5.fallingEdge()) {
    Joystick.button(6, 1);
  }
  if (button6.fallingEdge()) {
    Joystick.button(7, 1);
  }
  if (button7.fallingEdge()) {
    Joystick.button(8, 1);
  }
  if (button8.fallingEdge()) {
    Joystick.button(9, 1);
  }
  if (button9.fallingEdge()) {
    Joystick.button(10, 1);
  }
  if (button10.fallingEdge()) {
    Joystick.button(11, 1);
  }
  if (button11.fallingEdge()) {
    Joystick.button(12, 1);
  }
  if (button12.fallingEdge()) {
    Joystick.button(13, 1);
  }
  if (button13.fallingEdge()) {
    Joystick.button(14, 1);
  }
  if (button14.fallingEdge()) {
    Joystick.button(15, 1);
  }
  if (button15.fallingEdge()) {
    Joystick.button(16, 1);
  }


  if (button0.risingEdge()) {
    Joystick.button(1, 0);
  }
  if (button1.risingEdge()) {
    Joystick.button(2, 0);
  }
  if (button2.risingEdge()) {
    Joystick.button(3, 0);
  }
  if (button3.risingEdge()) {
    Joystick.button(4, 0);
  }
  if (button4.risingEdge()) {
    Joystick.button(5, 0);
  }
  if (button5.risingEdge()) {
    Joystick.button(6, 0);
  }
  if (button6.risingEdge()) {
    Joystick.button(7, 0);
  }
  if (button7.risingEdge()) {
    Joystick.button(8, 0);
  }
  if (button8.risingEdge()) {
    Joystick.button(9, 0);
  }
  if (button9.risingEdge()) {
    Joystick.button(10, 0);
  }
  if (button10.risingEdge()) {
    Joystick.button(11, 0);
  }
  if (button11.risingEdge()) {
    Joystick.button(12, 0);
  }
  if (button12.risingEdge()) {
    Joystick.button(13, 0);
  }
  if (button13.risingEdge()) {
    Joystick.button(14, 0);
  }
  if (button14.risingEdge()) {
    Joystick.button(15, 0);
  }
  if (button15.risingEdge()) {
    Joystick.button(16, 0);
  }
}
