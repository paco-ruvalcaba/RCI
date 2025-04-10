#include <Wire.h>
volatile byte x = 0;  // Datos a recibir en el programa
void setup() {
  Wire.begin(10);               // Unirse al bus I2C con dirección #10
  Wire.onRequest(transmision); // Interrupción para mandar datos
  delay(30);
  x = (byte)(analogRead(A0) >> 2);} // El dato del sensor se inicializa con datos válidos
  /*El ADC del arduino tiene una resolución de 10 bits. Pero sólo queremos mandar un bye (8 bits)
  El corrimiento en dos lugares analogRead(A0)(A0)>>2 asegura que sólo tengamos 8 bits
  El cast a byte (byte) es una medida de seguridad para evitar casos extremos
  */
void loop() {
  x = (byte)(analogRead(A0) >> 2); //Ver el comentario en el Setup
  delay(70);  }// Retardo para evitar problemas en la comunicación
void transmision() {
  Wire.write(x);}// Transmisión de datos
