#include <SharpIR.h>

#define ir A2 //PINO ANALÓGICO EM QUE O SENSOR ESTÁ CONECTADO
#define model 1080 //DETERMINA O MODELO DO SENSOR (1080 PARA O MODELO 2Y0A21Y OU 20150 PARA O MODELO 2Y0A02Y)


SharpIR SharpIR(ir, model); //PASSA OS PARÂMETROS PARA A FUNÇÃO (PINO ANALÓGICO, MODELO DO SENSOR)

void setup() {

  Serial.begin(9600); //INICIALIZA A SERIAL
  
}

void loop() {

  int distancia = SharpIR.distance();  //VARIÁVEL RECEBE A DISTÂNCIA MEDIDA
  
  Serial.print("Distância medida: "); //IMPRIME O TEXTO NA SERIAL
  Serial.print(distancia); //IMPRIME NA SERIAL A DISTÂNCIA MEDIDA PELO SENSOR
  Serial.println("cm"); //IMPRIME O TEXTO NA SERIAL
  delay(500); //INTERVALO DE 500 MILISSEGUNDOS

}