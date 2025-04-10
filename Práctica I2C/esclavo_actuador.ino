#include <Wire.h>
volatile byte x = 0;
volatile bool Recibido = false; // Flag to indicate new data
void setup() {
  pinMode(9,OUTPUT); // Declarar la salida del actuador
  Wire.begin(8);                // Unirse al bus I2C con dirección #8 (esclavo)
  Wire.onReceive(recepcion); // Interrupción de recepción
  Serial.begin(9600);           // Iniciar el puerto serial (Debug)
  delay(30);}
void loop() {
  if (Recibido) {
    Serial.println(x);   // Imprimir el dato recibido
    analogWrite(9,x); //Realizar acción con el actuador
    Recibido = false; // Borrar la bandera
  }
  delay(100);}// Retardo para evitar problemas con la comunicación
void recepcion(int howMany) {   if (Wire.available()) {
    x = Wire.read();     // Lectura de un byte recibido
    Recibido = true; }// Bandera para actuar en el loop
}
