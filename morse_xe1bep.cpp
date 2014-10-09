#include "Arduino.h"
#include "morse_xe1bep.h"

morse_xe1bep::morse_xe1bep(int pin, int frecc, int punto){
/*pin=9;
frecc=1500;
punto=50;
*/ 
_pin=pin;
_frecc=frecc;
_punto=punto;
int raya=punto*3;
_raya=raya;
}

void morse_xe1bep::numToMorse(int numero){
 _numero=numero; 
 if(numero >= 10){
   int dec=numero/10;
   int uni=numero%10;
    conversion(dec);
    delay(_raya);
    conversion(uni);
  }else if(numero < 10){
    conversion(numero);
  }
}

void morse_xe1bep::conversion(int num){
  _num=num; 
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

void morse_xe1bep::a(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
}

void morse_xe1bep::b(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
}

void morse_xe1bep::c(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
}

void morse_xe1bep::d(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
}

void morse_xe1bep::e(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
}

void morse_xe1bep::f(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
}

void morse_xe1bep::g(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
}

void morse_xe1bep::h(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
}

void morse_xe1bep::i(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
}

void morse_xe1bep::j(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
}

void morse_xe1bep::k(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
}

void morse_xe1bep::l(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
}

void morse_xe1bep::m(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
}

void morse_xe1bep::n(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto);
}

void morse_xe1bep::o(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
}

void morse_xe1bep::p(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
}

void morse_xe1bep::q(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
}

void morse_xe1bep::r(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
}

void morse_xe1bep::s(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
}

void morse_xe1bep::t(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
}

void morse_xe1bep::u(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_raya);
}

void morse_xe1bep::v(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
}

void morse_xe1bep::w(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
}

void morse_xe1bep::x(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_raya);
}

void morse_xe1bep::y(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
}

void morse_xe1bep::z(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
}

void morse_xe1bep::uno(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_raya);
}

void morse_xe1bep::dos(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_raya);
}

void morse_xe1bep::tres(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_raya);
}

void morse_xe1bep::cuatro(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_raya);
}

void morse_xe1bep::cinco(){
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto);
}

void morse_xe1bep::seis(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto);
}

void morse_xe1bep::siete(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto);
}

void morse_xe1bep::ocho(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto);
}

void morse_xe1bep::nueve(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto);
}

void morse_xe1bep::cero(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _raya);
delay(_raya);
}

void morse_xe1bep::diagonal(){
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _punto);
delay(_punto+_punto);
tone(_pin, _frecc, _raya);
delay(_punto+_raya);
tone(_pin, _frecc, _punto);
delay(_punto);
}

void morse_xe1bep::lSpace(){
delay(_raya);
}

void morse_xe1bep::wSpace(){
delay(_punto*5);
}
