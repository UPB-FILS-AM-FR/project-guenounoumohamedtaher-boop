#include <Key.h>
#include <Keypad.h>

#include <Keypad.h>
#include <Servo.h>

Servo myServo;

const String password = "1234";
String input = "";

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9,8,7,6};
byte colPins[COLS] = {5,4,3,2};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {

  Serial.begin(9600);

  myServo.attach(10);

  myServo.write(0);

  Serial.println("Smart Door Lock Ready");
}

void loop() {

  char key = keypad.getKey();

  if (key) {

    Serial.print("Pressed: ");
    Serial.println(key);

    if (key == '#') {

      if (input == password) {

        Serial.println("Correct Password");

        myServo.write(90);

        delay(5000);

        myServo.write(0);

      } else {

        Serial.println("Wrong Password");

      }

      input = "";

    }

    else if (key == '*') {

      input = "";

      Serial.println("Cleared");

    }

    else {

      input += key;

    }
  }
}