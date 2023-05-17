//Konfigurisanje pinova Arduina
int led=4;
int foto=A0;
int pir=A1;
int temp=A2;
int P1=-335.2;
int P2=483.9;
int P3=-154.5;
int P4=37.44;
void setup() {
 Serial.begin(9600);
//Konfigurisanje ulaznih i izlaznih pinova
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(12,HIGH);
}
void loop() {
 int temperatura1=analogRead(temp); //očitavanje vrijednosti senzora
 float napon=temperatura1*5.0/1024.0; //izaračunavanje napona
 int temperatura=P1*napon*napon*napon+P2*napon*napon+P3*napon+P4;
 Serial.println(temperatura); //ispisivanje vrijednosti temperature na Virtualnom Terminalu
 Serial.println(napon); //ispisivanje vrijednosti napona na Virtualnom Terminalu
 int pokret1=analogRead(pir); //očitanje vrijednosti senzora pokreta
 float pokret=pokret1*5.0/1024.0;
 int svjetlost1=analogRead(foto); //očitanje vrijednosti fotootpornika
 float svjetlost=svjetlost1*5.0/1024.0;
 Serial.print(char(188));
 if(pokret>2.5) //uslov detektovanja kretanja
 {
 Serial.println("Detektovano je kretanje");
 }
 else
 {
 Serial.println("Nije detektovano kretanje");
 }
 
 Serial.println(svjetlost);
 if(svjetlost>4.85)
 {
 Serial.println("Fotootpornik je slabo osvjetljen."); 
 }
 if(pokret>2.5 && svjetlost>2.5)
 {
 digitalWrite(led,HIGH);
 }
 else
 {
 digitalWrite(led,LOW);
 }
 Serial.println("-------------------------------------");
 int broj=temperatura/10;
 int broj2=temperatura-(broj*10);
 digitalWrite(13,LOW);
 digitalWrite(5,HIGH);
//ispisivanje brojeva u zavisnosti od očitane temperature
 if(broj==1)
 {
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,HIGH);
 }
 if(broj==2)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 }
 if(broj==3)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 }
 if(broj==4)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,HIGH);
 }
 if(broj==5)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(12,LOW);
 }
 if(broj==6)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(12,LOW);
 }
 if(broj==7)
 {
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 }
 if(broj==8)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 }
 if(broj==9)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 }
 if(broj==0)
 {
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 }
 delay(50);
 /////////////DRUGA CIFRA
 digitalWrite(13,HIGH); //uključenje napajanja na sedmosegmentni display
 digitalWrite(5,LOW); //isključenje napajanja sedmosegmentnog displaya
 if(broj2==1)
 {
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,HIGH);
 }
 if(broj2==2)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 }
 if(broj2==3)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 }
 if(broj2==4)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,HIGH);
 }
 if(broj2==5)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(12,LOW);
 }
 if(broj2==6)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(12,LOW);
 }
 if(broj2==7)
 {
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 }
 if(broj2==8)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 }
 if(broj2==9)
 {
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 }
 if(broj2==0)
 {
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 }
 delay(50); //ponavljanje svakih 50ms
}
