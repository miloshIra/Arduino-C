#define outputA 6
#define outputB 7

int counter = 0
int aState;
int aLaststate;
float meters;

void setup() {

  pinMode (outputA, INPUT);
  pinMode (outputB, INPUT);

  Serial.begin (9600);

  aLaststate = digitalRead(outputA);
}

void loop () {
  aState = digitalRead(outputA);
  if (aState != aLaststate) {
    if (digitalRead(outputB) != aState) {
      counter ++;
    } else {
      counter --
    }
    meters = counter * 0.49612
    Serial.print("Position: ");
    Serial.println(counter);
  }
  aLaststate = aState;
}
