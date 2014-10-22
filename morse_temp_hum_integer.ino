/*-----( Import needed libraries )-----*/
#include <dht11.h>
#include <morse_xe1bep.h>
/*-----( Declare objects )-----*/
dht11 DHT11; //object for humidity/temperature sensor
morse_xe1bep xe1bep(9,1500,100); //object for coding morse funcions first is pin, second is frequency and third value of dot in milliseconds
/*-----( Declare Constants, Pin Numbers )-----*/
#define DHT11PIN 2

const int ledPin =  13;      // working led indicator

int ledState = LOW;             // ledState used to set the LED
long previousMillis = 0;        // will store last time LED was updated


long intervalOn = 500;           // time that the code will be working (not important)
long intervalOff = 5000;         // interval betweent activations in milliseconds

void setup() {
  pinMode(ledPin, OUTPUT);      //declare the led as output
  Serial.begin(9600);           //set serial communications
}

void loop()
{
  //This part is the condition that activates the code with the interval that we set before
  unsigned long currentMillis = millis();
  if (ledState == LOW) {
    if(currentMillis - previousMillis > intervalOff) {
            previousMillis = currentMillis;   
            ledState = HIGH;
            
             Serial.println("\n");

             int chk = DHT11.read(DHT11PIN);

              //printing data to serial port
             Serial.print("Read sensor: ");
             switch (chk){
                  case 0: Serial.println("OK"); break;
                  case -1: Serial.println("Checksum error"); break;
                  case -2: Serial.println("Time out error"); break;
                  default: Serial.println("Unknown error"); break;
                  }

             Serial.print("Humidity (%): ");
             //parsing the variable to integer
             int humedad=(int)DHT11.humidity;
            Serial.println(humedad);
             
             
             Serial.print("Temperature (oC): ");
             //parsing the variable to integer
             int temperatura=(int)DHT11.temperature;
             Serial.println(temperatura);

            //activate he let while the morse code is active
            digitalWrite(13, HIGH);
            delay(200);  
            //parsing humidity value to morse
            xe1bep.numToMorse(humedad);
            xe1bep.lSpace();
            //separating the values with /
            xe1bep.diagonal();
            xe1bep.lSpace();
            //parsing temperature to morse
            xe1bep.numToMorse(temperatura);
            xe1bep.lSpace();
            //turn off the led
            digitalWrite(13, LOW);
    }
 } else {
    if(currentMillis - previousMillis > intervalOn) {
           previousMillis = currentMillis;   
          ledState = LOW;
    }
 }
 //these code is running when the morse parser isn't working
 digitalWrite(ledPin, ledState); 
 digitalWrite(13,HIGH);
 delay(100);
 digitalWrite(13,LOW);
 delay(100);
}


