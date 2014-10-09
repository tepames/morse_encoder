/*-----( Import needed libraries )-----*/
#include <dht11.h>

/*-----( Declare objects )-----*/
dht11 DHT11;

/*-----( Declare Constants, Pin Numbers )-----*/
#define DHT11PIN 2

const int ledPin =  13;      // the number of the LED pin

int ledState = LOW;             // ledState used to set the LED
long previousMillis = 0;        // will store last time LED was updated

int pin=9;
//int frecc=2000;
int frecc=1500;

int punto=50;
int raya=punto*3;

long intervalOn = 500;           // medio segundo  ON
long intervalOff = 30000;         // 15 min OFF
//long intervalOff = 5000;         // cinco segundos OFF
void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(8, OUTPUT); 
  Serial.begin(9600); 

//digitalWrite(13, HIGH);
           /* delay(200);
            x();
            delay(raya);
            e();
            delay(raya);
            uno();
            delay(raya);
            a();
            delay(raya);
            u();
            delay(raya);
            diagonal();
            delay(raya);
            b();
            delay(raya);
            c();
            delay(raya);
            n();
            delay(200);
            a();
            delay(raya);
            b();
            delay(raya);
            c();
            delay(raya);
            d();
            delay(raya);
            e();
            delay(raya);
            f();
            delay(raya);
            g();
            delay(raya);
            h();
            delay(raya);
            i();
            delay(raya);
            j();
            delay(raya);
            k();
            delay(raya);
            l();
            delay(raya);
            m();
            delay(raya);
            n();
            delay(raya);
            o();
            delay(raya);
            p();
            delay(raya);
            q();
            delay(raya);
            r();
            delay(raya);
            s();
            delay(raya);
            t();
            delay(raya);
            u();
            delay(raya);
            v();
            delay(raya);
            w();
            delay(raya);
            x();
            delay(raya);
            y();
            delay(raya);
            z();
            delay(raya);
            uno();
            delay(raya);
            dos();
            delay(raya);
            tres();
            delay(raya);
            cuatro();
            delay(raya);
            cinco();
            delay(raya);
            seis();
            delay(raya);
            siete();
            delay(raya);
            ocho();
            delay(raya);
            nueve();
            delay(raya);*/
}

void loop()
{
  unsigned long currentMillis = millis();
  if (ledState == LOW) {
    if(currentMillis - previousMillis > intervalOff) {
            previousMillis = currentMillis;   
            ledState = HIGH;
            
             Serial.println("\n");

             int chk = DHT11.read(DHT11PIN);

             Serial.print("Read sensor: ");
             switch (chk){
                  case 0: Serial.println("OK"); break;
                  case -1: Serial.println("Checksum error"); break;
                  case -2: Serial.println("Time out error"); break;
                  default: Serial.println("Unknown error"); break;
                  }

             Serial.print("Humidity (%): ");
            // String humedad= String(DHT11.humidity,DEC);
             //Serial.println(humedad);
             int humedad=(int)DHT11.humidity;
            Serial.println(humedad);
             
             
             Serial.print("Temperature (oC): ");
             int temperatura=(int)DHT11.temperature;
             Serial.println(temperatura);

            
            digitalWrite(13, HIGH);
            delay(200);            
            numToMorse(humedad);
            delay(raya);
            diagonal();
            delay(raya);
            numToMorse(temperatura);
            delay(raya);
            digitalWrite(13, LOW);
    }
 } else {
    if(currentMillis - previousMillis > intervalOn) {
           previousMillis = currentMillis;   
          ledState = LOW;
    }
 }
 digitalWrite(ledPin, ledState); 
 digitalWrite(13,HIGH);
 delay(100);
 digitalWrite(13,LOW);
 delay(100);
}

void numToMorse(int numero){
  if(numero >= 10){
   int dec=numero/10;
   int uni=numero%10;
    conversion(dec);
    delay(raya);
    conversion(uni);
  }else if(numero < 10){
    conversion(numero);
  }
}

void conversion(int num){
  switch(num){
    case 0:
      cero();
    break;
    case 1:
      uno();
    break;
    case 2:
      dos();
    break;
    case 3:
      tres();
    break;
    case 4:
      cuatro();
    break;
    case 5:
      cinco();
    break;
    case 6:
      seis();
    break;
    case 7:
      siete();
    break;
    case 8:
      ocho();
    break;
    case 9:
      nueve();
    break;
  }
}

void a(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
}

void b(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
}

void c(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
}

void d(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
}

void e(){
tone(pin, frecc, punto);
delay(punto+punto);
}

void f(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
}

void g(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
}

void h(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
}

void i(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
}

void j(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
}

void k(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
}

void l(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
}

void m(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
}

void n(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto);
}

void o(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
}

void p(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
}

void q(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
}

void r(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
}

void s(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
}

void t(){
tone(pin, frecc, raya);
delay(punto+raya);
}

void u(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(raya);
}

void v(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
}

void w(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
}

void x(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(raya);
}

void y(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
}

void z(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
}

void uno(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(raya);
}

void dos(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(raya);
}

void tres(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(raya);
}

void cuatro(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(raya);
}

void cinco(){
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto);
}

void seis(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto);
}

void siete(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto);
}

void ocho(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto);
}

void nueve(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto);
}

void cero(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, raya);
delay(raya);
}

void diagonal(){
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, punto);
delay(punto+punto);
tone(pin, frecc, raya);
delay(punto+raya);
tone(pin, frecc, punto);
delay(punto);
}

