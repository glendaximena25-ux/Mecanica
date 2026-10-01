int estadoBoton = 0;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop()
{
  estadoBoton = digitalRead(2);

  Serial.println(estadoBoton);

  delay(500);
}