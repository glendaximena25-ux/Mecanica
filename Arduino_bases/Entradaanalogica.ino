//
/*
    Analog Input
    Lee un potenciómetro conectado a A0 y controla
    el LED integrado del Arduino.

    También muestra en el Monitor Serial:
    0 = LED apagado
    1 = LED encendido
*/

int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);

  // Iniciar comunicación con el Monitor Serial
  Serial.begin(9600);
}

void loop()
{
  // Leer el valor del potenciómetro
  sensorValue = analogRead(A0);

  // Encender el LED
  digitalWrite(LED_BUILTIN, HIGH);

  // Mostrar 1 en el Monitor Serial
  

  // Esperar según el valor del potenciómetro
  delay(sensorValue);

  // Apagar el LED
  digitalWrite(LED_BUILTIN, LOW);

  // Mostrar 0 en el Monitor Serial
  Serial.println(sensorValue);

  // Esperar según el valor del potenciómetro
  delay(sensorValue);
  
}
