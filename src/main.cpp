#include <Arduino.h>
#include <JC_Button.h>

// https://www.pjrc.com/teensy/pinout.html
// 8 Switchs

#define BUTTON0_PIN PIN_D0
#define BUTTON1_PIN PIN_D1
#define BUTTON2_PIN PIN_D2
#define BUTTON3_PIN PIN_D3
#define BUTTON4_PIN PIN_D4
#define BUTTON5_PIN PIN_D5
#define BUTTON6_PIN PIN_D6
#define BUTTON7_PIN PIN_D7

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
  GREEN,
  RED
};

class LightGroup
{
};

class Switch
{
};

ToggleButton btn0(PIN_D0);
ToggleButton btn1(PIN_D1);
ToggleButton btn2(PIN_D2);
ToggleButton btn3(BUTTON3_PIN);
ToggleButton btn4(BUTTON4_PIN);
ToggleButton btn5(BUTTON5_PIN);
ToggleButton btn6(BUTTON6_PIN);
ToggleButton btn7(BUTTON7_PIN);

//LightGroup lightGroup0(LED0_PIN, LED10_PIN);
// the setup function runs once when you press reset or power the board
/* void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
} */

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

  /*  pinMode(LED0_PIN, OUTPUT);
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
  pinMode(LED15_PIN, OUTPUT); */

  // show the initial states
  /* digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, LOW);
  digitalWrite(LED11_PIN, LOW);
  digitalWrite(LED12_PIN, LOW);
  digitalWrite(LED6_PIN, LOW);
  digitalWrite(LED7_PIN, LOW);
  digitalWrite(LED14_PIN, LOW);
  digitalWrite(LED15_PIN, LOW); */
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

  if (btn3.changed())
    Serial.println("why - " + String(BUTTON3_PIN));
  //Serial.println(digitalRead(BUTTON0_PIN));
  Serial.println(digitalRead(BUTTON4_PIN));
  /* if (btn1.changed())
    digitalWrite(LED1_PIN, btn1.toggleState() ? 1 : 0);
  if (btn2.changed())
    digitalWrite(LED2_PIN, btn2.toggleState() ? 1 : 0); */
}