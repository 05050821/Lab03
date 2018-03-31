float Analogin = 0,i,Vin;
void setup() {
  Serial.begin(9600);
  pinMode(14,OUTPUT);

}

void loop() {

  Analogin = analogRead(14);
  for(i=0;i<=5;i++)
  {
    Analogin = 0.7*Analogin + 0.3*analogRead(14);
  }
  Vin = Analogin * 2.5 / 4095;
  Serial.print(Analogin);
  Serial.print(" ");
  Serial.print(Vin);
  Serial.print("\n");
  delay(500);
}
