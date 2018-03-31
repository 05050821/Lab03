int val,i;
float sensorValue = 0;
float sensorVoltage = 0;
float R = 1130000;
float R1;
float R2;
int Vin;

void setup() {
  Serial.begin(9600);
  pinMode(15,INPUT);
}
    
void loop() {
  val = analogRead(15);
  
  for(i=0;i<=5;i++)
    sensorValue =0.7*sensorValue+0.3*analogRead(15);
  sensorVoltage = sensorValue*5/4095;
  
  R1 = sensorVoltage*(R1+R2)/5;
  R2 = R-R1;
  
  Serial.print("sensorValue:");
  Serial.println(sensorValue);
  Serial.print("sensorVoltage:");
  Serial.println(sensorVoltage);
  //Serial.print("R1:");
  //Serial.println(R1);
  Serial.print("R2:");
  Serial.println(R2);
  Serial.println(" ");
  delay(500);

}
