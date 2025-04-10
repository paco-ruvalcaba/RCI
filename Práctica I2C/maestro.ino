#include <Wire.h>
volatile bool TransmitirDatos = false;
volatile bool RecibirDatos = false;
volatile byte x = 0;	 	 	  	

void transmitir() {
  TransmitirDatos = true;  // Bandera para transmitir
}
void recibir() {
  RecibirDatos = true;  // Bandera para recibir
}
void setup() {
  Wire.begin();  // Unirse al bus I2C
  attachInterrupt(digitalPinToInterrupt(2), recibir, FALLING); // Recibimos datos en el flanco de bajada del pin 2
  attachInterrupt(digitalPinToInterrupt(3), transmitir, FALLING); //Enviamos datos en el flanco de bajada del pin 3
}
void loop() {
  if (TransmitirDatos) {
    TransmitirDatos = false;  // Borrar la bandera
    Wire.beginTransmission(8); // Transmitir al dispositivo #8
    Wire.write(x);              // Mandar un byte
    Wire.endTransmission();     // Detener la transmisión
  }
  if (RecibirDatos) {
    RecibirDatos = false;  // Borrar bandera
    Wire.requestFrom(10, 1);  // Pedirle 1 byte al dispositivo #10
    if (Wire.available()) {
      x = Wire.read();// Leer la transmisión
    }
  }
  delay(100); // Dar tiempo a la comunicación
}
