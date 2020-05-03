int soundpin=8;
int dt=1;
int dt1=2;
int j;
void setup() {
  // put your setup code here, to run once:
  pinMode(soundpin,OUTPUT);
}

void loop() {
  for (j=1;j<=100;j=j+1){
    digitalWrite(soundpin,HIGH);
    delay(dt);
    digitalWrite(soundpin,LOW);
    delay(dt);
    }
  for (j=1;j<=100;j=j+1){
      digitalWrite(soundpin,HIGH);
      delay(dt1);
      digitalWrite(soundpin,LOW);
      delay(dt1);
    }
}
