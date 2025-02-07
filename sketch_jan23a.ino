float limit1 = 12.0;
float limit2 = 0.0;
float summa = 0.0;
int count = 0;

void setup() {
  Serial.begin(250000);
}

void loop() {
  float value = analogRead(0);
  float voltage = (value*57)/1023;
  if (count<=100){
    summa+=voltage;
    count+=1;
  }else{
    Serial.print(summa/12.2);
    Serial.println(" %");
    count = 0;
    summa = 0.0;
  }

  Serial.print("ШИМ_1:");
  Serial.print(limit1);
  Serial.print(",");
  Serial.print("ШИМ_2:");
  Serial.print(limit2);
  Serial.print(",");
  Serial.print("НАПРЯЖЕНИЕ:");
  Serial.println(voltage);
}

