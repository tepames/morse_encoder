#Morse encoder library by XE1BEP
##Hugo Enrique Preciado Farías

First of all you have to copy "morse_xe1bep.cpp" and "morse_xe1bep.h" files  in a folder called "morse_xe1bep"
inside your arduino libraries folder. 

the file morse_temp_hum.ino is an implementation of the library

###importing library 

'#include <morse_xe1bep.h>'

###creating the object

'morse_xe1bep object_name(Audio_PIN,frequency,duration_of_dot_milliseconds);'

'example: morse_xe1bep xe1bep(9,1500,100);'

###list of functions

####letters, numbers and characters

'''object_name.numToMorse(int);
object_name.a();
object_name.b();
object_name.c();
object_name.d();
object_name.e();
object_name.f();
object_name.g();
object_name.h();
object_name.i();
object_name.j();
object_name.k();
object_name.l();
object_name.m();
object_name.n();
object_name.o();
object_name.p();
object_name.q();
object_name.r();
object_name.s();
object_name.t();
object_name.u();
object_name.v();
object_name.w();
object_name.x();
object_name.y();
object_name.z();
object_name.uno();
object_name.dos();
object_name.tres();
object_name.cuatro();
object_name.cinco();
object_name.seis();
object_name.siete();
object_name.ocho();
object_name.nueve();
object_name.cero();
object_name.coma();
object_name.diagonal();
object_name.qMark();'''


####Space between the letters of the same word
'object_name.lSpace();'

####Space between two different words
'object_name.wSpace();'
