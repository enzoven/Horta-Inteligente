#include <LiquidCrystal_I2C.h>
#include <Wire.h> //Biblioteca utilizada gerenciar a comunicação entre dispositicos através do protocolo I2C
#include <LiquidCrystal_I2C.h> //Biblioteca controlar display 16x2 através do I2C
#define col 16 //Define o número de colunas do display utilizado
#define lin 2 //Define o número de linhas do display utilizado
#define ende 0x27 //Define o endereço do display
LiquidCrystal_I2C lcd(ende, col, lin); //Cria o objeto lcd passando como parâmetros o endereço, o nº de colunas e o nº de linhas

#define pinSensorA A0 //Pino Analogico do Sensor de Umidade na Porta Analogica A0
#define pinSensorD 8  //Pino Digital do Sensor de Umidade na Porta Digital 8
#define pinBomba 13   //Pino que Liga a Bomba 13
#define pinLuz 9      //Pino de luz???

int led = 9; //Atribui a porta digital 10 a variável led
int ldr = A2; //Atribui A0 a variável ldr
int valorldr = 0;//Declara a variável valorldr como inteiro

void setup() {
 pinMode(led, OUTPUT); //Define led LDR(pino digital 9) como saída
 pinMode(ldr, INPUT); //Define ldr (pino analógico A2) como saída
 Serial.begin(9600); //Inicialização da comunicação serial, com velocidade de comunicação de 9600
 
 lcd.init(); //Inicializa a comunicação com o display já conectado
 lcd.clear(); //Limpa a tela do display
 lcd.backlight(); //Aciona a luz de fundo do display
// lcd.setCursor(0, 0); //Coloca o cursor do display na coluna 1 e linha 1
// lcd.print("HORTA DA ETEC"); //Exibe a mensagem na primeira linha do display
 lcd.setCursor(0, 1); //Coloca o cursor do display na coluna 1 e linha 2
// lcd.print("SUPERPODEROSAS"); //Exibe a mensagem na segunda linha do displa
  pinMode(pinSensorD, INPUT);
  Serial.begin(9600);
}

void loop() {
  valorldr = analogRead(ldr);//Lê o valor do sensor ldr e armazena na variável valorldr
  Serial.println(valorldr);//Imprime na serial os dados de valorldr

  if ((valorldr) < 500) { //Se o valor de valorldr for menor que 500:
    lcd.setCursor(0, 1); //Coloca o cursor do display na coluna x e linha x
    lcd.print("LUZ    LIGADA"); //Exibe a mensagem na primeira linha do display
    digitalWrite(led, HIGH);//Coloca led em alto para acioná-lo
  }

  else { //Senão:
    lcd.setCursor(0, 1); //Coloca o cursor do display na coluna x e linha x
    lcd.print("LUZ DESLIGADA"); //Exibe a mensagem na primeira linha do display
    digitalWrite(led, LOW);//Coloca led em baixo para que o mesmo desligue ou permaneça desligado
  }
  Serial.print("Digital:");
  
  if (digitalRead(pinSensorD)) {
     Serial.print("=>        SEM UMIDADE ");
  } else {
     Serial.print("=> COM UMIDADE ");
  }

 Serial.print("                ");
  if (analogRead(pinSensorA) > 700) {
    lcd.setCursor(0, 0); //Coloca o cursor do display na coluna 1 e linha 1
    lcd.print("BOMBA    LIGADA"); //Exibe a mensagem na primeira linha do display
    digitalWrite(pinBomba,HIGH);
  } else {
    lcd.setCursor(0, 0); //Coloca o cursor do display na coluna 1 e linha 1
    lcd.print("BOMBA DESLIGADA"); //Exibe a mensagem na primeira linha do display
    digitalWrite(pinBomba,LOW);
  }
}
