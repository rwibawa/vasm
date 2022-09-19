const char DATA[] = {39, 41, 43, 45, 47, 49, 51, 53};
#define CLOCK 2
#define READ_WRITE 3

void setup() {
  for (int n = 0; n < 8; n += 1) {
    pinMode(DATA[n], INPUT);
  }
  
  pinMode(CLOCK, INPUT);
  // pinMode(READ_WRITE, INPUT);

  attachInterrupt(digitalPinToInterrupt(CLOCK), onClock, RISING);
  
  Serial.begin(57600);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void onClock() {

//  unsigned int address = 0;
//  for (int n = 0; n < 16; n += 1) {
//    int bit = digitalRead(ADDR[n]) ? 1 : 0;
//    Serial.print(bit);
//    address = (address << 1) + bit;
//  }
//  
//  Serial.print("   ");
  
  unsigned int data = 0;
  for (int n = 0; n < 8; n += 1) {
    int bit = digitalRead(DATA[n]) ? 1 : 0;
    Serial.print(bit);
    data = (data << 1) + bit;
  }

  char output[15];
  sprintf(output, "   %02x", data);
  Serial.println(output);  
}