const int sensorIR = 2;
const int ledStatus =  13;
int sensorIR_State = 0;
int count_c = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Micro Project Thailand ~^.^~ ");
  pinMode(ledStatus, OUTPUT);
  pinMode(sensorIR, INPUT);
}

void loop() {
  sensorIR_State = digitalRead(sensorIR);
  if (sensorIR_State == HIGH) {
    digitalWrite(ledStatus, HIGH);
    count_c = 0;
  } else {
    digitalWrite(ledStatus, LOW);
    count_c ++ ;
    Serial.print("Sensor Active : ");
    Serial.println(count_c);

  }
}
