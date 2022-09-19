const char DATA[] = {39, 41, 43, 45, 47, 49, 51, 53};
#define CLOCK 2

unsigned int index = 0;

void setup() {
  for (int n = 0; n < 8; n += 1) {
    pinMode(DATA[n], OUTPUT);
  }
  
  pinMode(CLOCK, INPUT);

  attachInterrupt(digitalPinToInterrupt(CLOCK), onClock, RISING);
  
  Serial.begin(57600);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void onClock() {
  digitalWrite(DATA[index], LOW);

  index += 1;
  if (index == 8) {
    index = 0;
  }

  digitalWrite(DATA[index], HIGH);
}