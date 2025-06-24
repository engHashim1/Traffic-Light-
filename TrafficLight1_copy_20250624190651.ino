//Create the variables and assign the pins to them.
int REDPIN=13;
int YELLOWPIN=12;
int GREENPIN=11;
void setup() {
// put the setup code here, to run once:
pinMode(REDPIN, OUTPUT);
pinMode(YELLOWPIN, OUTPUT);
pinMode(GREENPIN, OUTPUT);
}
void loop() {
//Turn on the red led:
digitalWrite(REDPIN, HIGH);
digitalWrite(YELLOWPIN, LOW);
digitalWrite(GREENPIN, LOW);
delay(2000);

//turn on the yellow led:
digitalWrite(REDPIN, LOW);
digitalWrite(YELLOWPIN, HIGH);
digitalWrite(GREENPIN, LOW);
delay(2000);

//turn on the green led:
digitalWrite(REDPIN, LOW);
digitalWrite(YELLOWPIN, LOW);
digitalWrite(GREENPIN, HIGH);
delay(2000); 
}