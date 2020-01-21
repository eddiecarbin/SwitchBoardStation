#include <Arduino.h>
#include <JC_Button.h>

// https://www.pjrc.com/teensy/pinout.html
// 8 Switchs

#define BUTTON0_PIN A0
#define BUTTON1_PIN A1
#define BUTTON2_PIN A2
#define BUTTON3_PIN A3
#define BUTTON4_PIN A4
#define BUTTON5_PIN A5
#define BUTTON6_PIN A6
#define BUTTON7_PIN A7

// 16 lights
#define LED0_PIN 0
#define LED1_PIN 1
#define LED2_PIN 2
#define LED3_PIN 3
#define LED4_PIN 4
#define LED5_PIN 5
#define LED6_PIN 6
#define LED7_PIN 7
#define LED8_PIN 10
#define LED9_PIN 11
#define LED10_PIN 12
#define LED11_PIN 13
#define LED12_PIN 14
#define LED13_PIN 15
#define LED14_PIN 16
#define LED15_PIN 17

enum STATE_ENUM
{
  ON,
  OFF
};

class Light
{
};

class Switch
{
};

ToggleButton           // define the buttons
    btn0(BUTTON0_PIN), // this button's initial state is off
    btn1(BUTTON1_PIN),
    btn2(BUTTON2_PIN),
    btn3(BUTTON3_PIN),
    btn4(BUTTON4_PIN),
    btn5(BUTTON5_PIN),
    btn6(BUTTON6_PIN),
    btn7(BUTTON7_PIN);

void setup()
{
  // put your setup code here, to run once:

  btn0.begin();
  btn1.begin();
  btn2.begin();
  btn3.begin();
  btn4.begin();
  btn5.begin();
  btn6.begin();
  btn7.begin();

  pinMode(LED0_PIN, OUTPUT);
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);
  pinMode(LED4_PIN, OUTPUT);
  pinMode(LED5_PIN, OUTPUT);
  pinMode(LED6_PIN, OUTPUT);
  pinMode(LED7_PIN, OUTPUT);
  pinMode(LED8_PIN, OUTPUT);
  pinMode(LED9_PIN, OUTPUT);
  pinMode(LED10_PIN, OUTPUT);
  pinMode(LED11_PIN, OUTPUT);
  pinMode(LED12_PIN, OUTPUT);
  pinMode(LED13_PIN, OUTPUT);
  pinMode(LED14_PIN, OUTPUT);
  pinMode(LED15_PIN, OUTPUT);

  // show the initial states
  digitalWrite(LED1_PIN, btn1.toggleState());
  digitalWrite(LED2_PIN, btn2.toggleState());
}

void loop()
{
  // put your main code here, to run repeatedly:

  btn0.read();
  btn1.read();
  btn2.read();
  btn3.read();
  btn4.read();
  btn5.read();
  btn6.read();
  btn7.read();

  if (btn1.changed())
    digitalWrite(LED1_PIN, btn1.toggleState());
  if (btn2.changed())
    digitalWrite(LED2_PIN, btn2.toggleState());
}