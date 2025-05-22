//Se incluye la librería LiquidCrystal contienen todo lo necesario para hacer funcionar la LCD
#include <LiquidCrystal_I2C.h>
//Se inicia la librería y se define la dirección y el tamaño del display  

LiquidCrystal_I2C lcd(0x27, 16, 2);

//Primera función en ejecutarse, solo se ejecuta una vez cada que se energiza el Arduino UNO o se realiza un RESET.

void setup() {
//Se inicializa el LCD
lcd.init(); //Si marca error intenta con lcd.init();
lcd.backlight();
}
//Lógica principal. Se ejecuta una y otra vez. Se define la función que ejecutará la LCD en este caso
//mostrará un mensaje.
void loop() {
//Se define la posición que se mostrará el mensaje con setCursor
//Se muestra un referencia de las columnas y filas 
/*Columnas:    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
             -------------------------------
Filas:    0  # # # # # # # # # # # # # # # #
          1  # # # # # # # # # # # # # # # #
             ------------------------------- */

lcd.setCursor(0, 0);
//Mensaje a mostrar
lcd.print("Paco Elias");
lcd.setCursor(0, 1);
lcd.print("Ruvalcaba Reyes");

  for (int scrollCounter = 0; scrollCounter < 39; scrollCounter++) 
  { 

    lcd.scrollDisplayLeft(); 

    delay(250);
  }

  lcd.clear();
}
/* Como se verá el mensaje en el display 
Columnas:     0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
              -------------------------------
Filas:     0  # # # # # U N I T # # # # # # #
           1  # # E L E C T R O N I C S # # #
              ------------------------------- */