#include <Servo.h>
#define port1 2
#define port2 3
#define port3 4
Servo myservos[2];
int pos, i;



void setup() {
  // put your setup code here, to run once:
  myservos[0].attach(port1);
  myservos[1].attach(port2);
}

void loop() {

  for(int i=0;i<=2;i++){
    myservos[i].write(180);
    delay(15);
    }
    delay(100);
 
  for(int i=0;i<=2;i++){
    pos = 0;
    while(pos<=180){
      myservos[i].write(pos);
      delay(15);
      pos++;
      }
    while(pos>=0){
      myservos[i].write(pos);
      delay(15);
      pos--;
      }
  }
}
