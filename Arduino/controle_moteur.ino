/* Ceci est un scketch simple pour controler les moteurs
  On possède 2 robots chacun avec un driver moteur different ce sketch est adapté au 2 driver
 */

// Pour le robot à 2 roues il peu être nécessaire de changer les valeurs
// Pour le robot à 4 roues on controles 2 moteurs comme 1 seul
// On associe chaque moteurs au pin sur le microcontroleur
int motorA1 = 7;
int motorA2 = 12;
int motorB1 = 8;
int motorB2 = 13;


void setup() {
  // put your setup code here, to run once:
  // On définie les pins des moteurs comme des sorties
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite permet d'écrire une valeur digital (0 ou 1) sur un pin
  // High et Low permet de faire tourner le moteur A en sence horaire
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);

  // Low et High permet de faire tourner le moteur B en sence horaire
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, HIGH);
  delay(3000); // on attent 3 secondes
  
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, LOW);
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, LOW);
  delay(2000); // on attent 2 secondes

}
