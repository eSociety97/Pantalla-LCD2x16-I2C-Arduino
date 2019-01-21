/**********************************************Capitulo 10 - Pantalla LCD 2x16*****************************************************
*                                                                                                                                 *
*     En este decimo capitulo aprenderemos a utilizar una pantalla LCD 2x16 acompañada de un modulo I2C. Este modulo nos brinda   *
*  la facilidad de utilizar nuestra pantalla utilizando tan solo 2 pines (SDA y SCL). En dado caso no despliega los mensajes      *
*  ajusten el potenciometro de precision que trae nuestra modulo por la parte de atras.                                           *
*                                                                                                                                 *
*  Para lograr esto necesitaremos:                                                                                                *
*                                                                                                                                 *
*  -Placa arduino Uno                                                                                                             *
*  -1 Modulo Adaptador I2C.                                                                                                       *
*  -1 LCD 2x16                                                                                                                    *
*  -Protoboard                                                                                                                    *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                              Facebook: ESociety *
*                                                                                                              GitHub: eSociety97 *
*                                                                                                                                 *
*                                                         #NuncaDejenDeCrear                                                      *
***********************************************************************************************************************************/ 


#include <Wire.h>  
#include <LiquidCrystal_I2C.h> //Declaramos la libreria del controlador I2C

//En dado caso no despliegue los mensajes cambiar el 0x3f por 0x27 o 0x20 intentar con cada uno hasta que funcione
LiquidCrystal_I2C lcd(0x3f,16,2); //Declaramos nuestro objeto LCD

void setup(){ 
lcd.init();  // //Inicializamos la pantalla LCD
lcd.backlight();  //Activamos el brillo 
lcd.clear();  //Limpiamos la pantalla 
lcd.setCursor(0,0);  //Inicializamos el cursor en la columna 0 casilla 0
Serial.begin(9600);
}
void loop(){
  lcd.print(" Holii ");  //Escrimos el mensaje a mostrar
  delay(1000); //Hacemos una pausa en el programa
  lcd.clear();  //Limpiamos la pantalla 
  }
}
