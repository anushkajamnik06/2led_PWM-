#define led1 5
#define led2 6

byte myarray[] = {10,30,50,70,90,110,130,150,200,255};

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  for (int pos = 0; pos < sizeof(myarray); pos++) {
    
    analogWrite(led1, myarray[pos]);  // LED 1
    analogWrite(led2, myarray[pos]);  // LED 2
    
    Serial.print("LED intensity = ");
    Serial.println(myarray[pos]);

    delay(500);
  }
}
