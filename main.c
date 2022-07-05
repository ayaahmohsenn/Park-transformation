#include <stdio.h>
#include <stdlib.h>

double Id;
double Iq;
double Ia;
double Ib;
double Ic;

int main()
{

void dqTransformation (double Ia,double Ib,double Ic, double rho){
  //alpha beta frame

  double Ialpha=(2/3)*(cos(0)*Ia+cos(2*3.14159265/3)*Ib+cos(4*3.14159265/3)*Ic);
  double Ibeta=(2/3)*(sin(0)*Ia+sin(2*3.14159265/3)*Ib+sin(4*3.14159265/3)*Ic);

  //dq frame
    Id= Ialpha*sin(rho)+Ibeta*cos(rho);
    Iq= Ialpha*sin(-rho)+Ibeta*cos(rho);
}
void setup() {
  // put your setup code here, to run once:
   pinMode(A0, INPUT);
   pinMode(A1, INPUT);
   pinMode(A2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//abc frame
  Ia=analogRead(A0);
  Ib=analogRead(A1);
  Ic=analogRead(A2);

}
}
