const int sensorPin = 2;  // Pin digital donde conectas el cable azul (OUT)

void setup() {
  pinMode(sensorPin, INPUT_PULLUP);  // Activa la resistencia pull-up interna
  Serial.begin(9600);                // Inicia la comunicación serial
}

void loop() {
  int sensorValue = digitalRead(sensorPin);  // Lee el valor del sensor
  
  // Imprime el valor en el monitor serial
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);  
  
  if (sensorValue == LOW) {  // Si el sensor detecta metal, el valor será LOW
    Serial.println("Metal Detectado");
  } else {
    Serial.println("Sin Detección");
  }

  delay(1000);  // Pequeña pausa
}
