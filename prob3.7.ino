//Declaring all variables as integers
int D,C,B,A,a,b,c,d,e,f,g;

//Code released under GNU GPL.  Free to use for anything.
void disp_7447(int D, int C, int B, int A)
{
  a=(!A&&C&&!D) || (A&&!B&&!C&&!D);
  b=(A&&!B&&C&&!D) || (!A&&B&&C&&!D);
  c=(!A&&B&&!C&&!D);
  d=(A&&!B&&!C) || (!A&&!B&&C&&!D) || (A&&B&&C&&!D);
  e=(A&&!D) || (A&&!B&&!C) || (!B&&C&&!D);
  f=(B&&!C&&!D) || (A&&!C&&!D) || (A&&B&&!D);
  g=(A&&B&&C&&!D) || (!B&&!C&&!D);

  digitalWrite(6, a);
  digitalWrite(7, b);
  digitalWrite(8, c);
  digitalWrite(9, d);
  digitalWrite(10, e);
  digitalWrite(11, f);
  digitalWrite(12, g);

}
// the setup function runs once when you press reset or power the board
void setup() {
    
    pinMode(2, INPUT);
    pinMode(3, INPUT);
    pinMode(4, INPUT);
    pinMode(5, INPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
A=digitalRead(2);
B=digitalRead(3);
C=digitalRead(4);
D=digitalRead(5);
disp_7447(D,C,B,A);  
}
//&& is the AND operation
// || is the OR operation
// ! is the NOT operation
