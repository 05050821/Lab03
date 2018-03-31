int k;
void setup() {
   Serial.begin(9600);
  pinMode(8,OUTPUT);
  Serial.print("Hello, World!");

}

void loop() {
  if(Serial.available())
  {
    k = Serial.read();
    if(k=='1')
    {
     digitalWrite(8,HIGH);
     Serial.print("\nLED ON");
    }
    else if(k=='0')
    {
      digitalWrite(8,LOW);
      Serial.print("\nLED OFF");
    }
  }

}
