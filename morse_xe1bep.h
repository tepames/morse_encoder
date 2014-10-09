/*
  morse_xe1bep.h - Library for coding Morse code.
  Created by Hugo E. Preciado Farias, October 8, 2014.
  Released into the public domain.
*/
#ifndef morse_xe1bep_h
#define morse_xe1bep_h

#include "Arduino.h"; 
class morse_xe1bep{
	public:
		morse_xe1bep(int pin, int frecc, int punto);		
		void numToMorse(int numero);
		void conversion(int num);
		void a();
		void b();
  		void c();
		void d();
		void e();
		void f();
		void g();
		void h();
		void i();
		void j();
		void k();
		void l();
		void m();
		void n();
		void o();
		void p();
		void q();
		void r();
		void s();
		void t();
		void u();
		void v();
		void w();
		void x();
		void y();
		void z();
		void uno();
		void dos();
		void tres();
		void cuatro();
		void cinco();
		void seis();
		void siete();
		void ocho();
		void nueve();
		void cero();
		void diagonal();
	private:
		int _pin;
		int _frecc;
		int _punto;
		int _raya;
		int _numero;
		int _num;
};

#endif
