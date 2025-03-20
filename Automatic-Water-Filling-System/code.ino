int Time,distance;
int ir1,ir2,ir3,ir4,ir5,ir6,ir7,ir8,ir9,ir10,ir11,ir12;
int y;
#define solenoid 2
void setup() {
  delay(2000);
  // put your setup code here, to run once:
pinMode(3,OUTPUT);  //trigger pin
pinMode(4,INPUT);   //echo pin
pinMode(solenoid,OUTPUT);
Serial.begin(9600);
Serial.print("hello");
}

void loop() {
  // put your main code here, to run repeatedly:
 ir1=digitalRead(5);
  ir2=digitalRead(6);
   ir3=digitalRead(7);
    ir4=digitalRead(8);
     ir5=digitalRead(9);
      ir6=digitalRead(10);
       ir7=digitalRead(11);
        ir8=digitalRead(12);
         ir9=digitalRead(13);
        // ir10=digitalRead(0);
         int addir(!ir1+!ir2+!ir3+!ir4+!ir5+!ir6+!ir7+!ir8+!ir9);
          y=2*addir;
         Serial.print("y=");
         Serial.println(y);
digitalWrite(3,HIGH);
delayMicroseconds(10);
digitalWrite(3,LOW);
delayMicroseconds(5);
digitalWrite(3,HIGH);
delayMicroseconds(10);
Time=pulseIn(4,HIGH);
distance=0.0345*Time/2;
int x=distance;
Serial.print("distance from sensor to object x=");
Serial.println(distance);
delay(1000);
int z=25-y;
Serial.print("z=");
Serial.println(z);
if(x>z && y!=0)
{
  digitalWrite(solenoid,HIGH);
}
if(x<z||y==0)
{
  digitalWrite(solenoid,LOW);
}
}
