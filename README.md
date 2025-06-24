# Traffic-Light-
A traffic Light LED project on Arduino Uno R3
Arduino Traffic Light Simulation
Project Description

This project simulates a basic traffic light system using an Arduino UNO and three LEDs (Red, Yellow, and Green). Each LED is connected to a specific digital pin on the Arduino board and turns on in sequence to mimic how a real traffic light operates. Each light stays on for two seconds before switching to the next.
Components Required

    1 × Arduino UNO (or compatible board)

    3 × LEDs (Red, Yellow, Green)

    3 × Resistors (220Ω – 330Ω)

    Breadboard

    Jumper wires

    Arduino IDE for uploading the code

Circuit Connections
LED Color	Arduino Pin
Red	13
Yellow	12
Green	11

Each LED should be connected in series with a resistor to limit current and prevent damage. The longer leg (anode) of the LED goes to the Arduino pin through the resistor, and the shorter leg (cathode) goes to GND.
Code Explanation

int REDPIN = 13;
int YELLOWPIN = 12;
int GREENPIN = 11;

void setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(YELLOWPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
}

void loop() {
  // Turn on Red LED
  digitalWrite(REDPIN, HIGH);
  digitalWrite(YELLOWPIN, LOW);
  digitalWrite(GREENPIN, LOW);
  delay(2000);

  // Turn on Yellow LED
  digitalWrite(REDPIN, LOW);
  digitalWrite(YELLOWPIN, HIGH);
  digitalWrite(GREENPIN, LOW);
  delay(2000);

  // Turn on Green LED
  digitalWrite(REDPIN, LOW);
  digitalWrite(YELLOWPIN, LOW);
  digitalWrite(GREENPIN, HIGH);
  delay(2000);
}

How it Works:

    The setup() function runs once to configure the pin modes as outputs.

    The loop() function continuously cycles through the LEDs:

        Red LED is turned on for 2 seconds.

        Then Yellow for 2 seconds.

        Then Green for 2 seconds.

    The process repeats indefinitely to simulate a real traffic light pattern.

License

This project is open-source and available under the MIT License.
