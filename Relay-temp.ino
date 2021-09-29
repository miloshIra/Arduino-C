int sensorPin = 11; // pin for the temp sensor
int switchPin = 3; // pin for switch button
int increasePin = 4; // pin for increse value
int decreasePin = 5; // pin for decrease value

// Swicth and switch state variables

boolean oldSwitchState = LOW;
boolean newSwitchState = LOW;
int state = 0;


// Sensor read and set values variables

int read_value; // sensor value
int set_val1, set_val2, set_val3, set_val_4; // set temperature values

void setup() {

  // LCD and Serial variables
  Serial.begin(115200);
  pinMode(switchPin, INPUT);

}

void loop() {

  {
    newSwitchState = digitalRead(switchPin);
    if ( newSwitchState != oldSwitchState )
    {
      // has the button switch been closed?
      if ( newSwitchState == HIGH )
      {
        // increase the value of state
        state++;
        if (state > 4) {
          state = 0;
        }
      }
    }
  }
  if (state = 0){
    Serial.println("State is 0");
  }
  if (state = 1) {
    Serial.println("Set value 1");
  }
  if (state = 2) {
    Serial.println("Set value 2");
  }
  if (state = 3) {
    Serial.println("Set value 3");
  }
  if (state = 4) {
    Serial.println("Set value 4");
    {
      if (state > 4) {
        state = 0;
      }
    }
  }
}
