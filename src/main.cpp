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
//RED LED BANK
#define LED0_PIN 0
#define LED1_PIN 1
#define LED2_PIN 2
#define LED3_PIN 3
#define LED4_PIN 4
#define LED5_PIN 5
#define LED6_PIN 6
#define LED7_PIN 7

// GREEN LED BANK
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
  GREEN,
  RED
};

class LightGroup
{

public:
  LightGroup(ToggleButton *button, int greenPin, int redPin)
  {
    this->button = button;
    this->greenPin = greenPin;
    this->redPin = redPin;
  };

  void init()
  {
    button->begin();
    pinMode(greenPin, OUTPUT);
    pinMode(redPin, OUTPUT);
  };

  void update()
  {
    button->read();

    if (button->isPressed() == true)
    {
      digitalWrite(greenPin, HIGH);
      digitalWrite(redPin, LOW);
    }
    else
    {
      digitalWrite(greenPin, LOW);
      digitalWrite(redPin, HIGH);
    }
  };

  void scramble()
  {
  }

private:
  ToggleButton *button;
  int greenPin = 0;
  int redPin = 0;
};

ToggleButton btn0(BUTTON0_PIN, 25, true);
ToggleButton btn1(BUTTON1_PIN, 25, true);
ToggleButton btn2(BUTTON2_PIN, 25, true);
ToggleButton btn3(BUTTON3_PIN, 25, true);
ToggleButton btn4(BUTTON4_PIN, 25, true);
ToggleButton btn5(BUTTON5_PIN, 25, true);
ToggleButton btn6(BUTTON6_PIN, 25, true);
ToggleButton btn7(BUTTON7_PIN, 25, true);

LightGroup group0(&btn0, LED0_PIN, LED8_PIN);
LightGroup group1(&btn1, LED1_PIN, LED9_PIN);
LightGroup group2(&btn2, LED2_PIN, LED10_PIN);
LightGroup group3(&btn3, LED3_PIN, LED11_PIN);
LightGroup group4(&btn4, LED4_PIN, LED12_PIN);
LightGroup group5(&btn5, LED5_PIN, LED13_PIN);
LightGroup group6(&btn6, LED6_PIN, LED14_PIN);
LightGroup group7(&btn7, LED7_PIN, LED15_PIN); 

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(3000);
  Serial.println("Start switchboard activity");

  group0.init();
  group1.init();
  group2.init();
  group3.init();
  group4.init();
  group5.init();
  group6.init();
  group7.init(); 

  pinMode(A0, INPUT_PULLUP);
}
// A0 A6
void loop()
{
 group0.update();
  group1.update();
  group2.update();
  group3.update();
  group4.update();
  group5.update();
  group6.update();
  group7.update(); 

  //delay(1000 / 60);
  delay(300);
}