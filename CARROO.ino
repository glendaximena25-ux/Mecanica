int ENA = 9;
int IN1 = 8;
int IN2 = 7;
int IN3 = 5;
int IN4 = 4;
int ENB = 3;
int vel=0;
int tiempo = 500;
void setup() {

    pinMode(ENA, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    pinMode(ENB, OUTPUT);

    Serial.begin(9600);
    Serial.println("Prueba de velocidad y aceleracion");
    delay(3000);


}
void loop(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, vel);
  analogWrite(ENB, vel);
  vel = vel+10;
  if (vel>355) 
      vel=355;
    delay(tiempo);

Serial.println("Velocidad: "+ vel);
}
