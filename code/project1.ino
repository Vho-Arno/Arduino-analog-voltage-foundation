int p2=2;
int p3=3;
int p4=4;
int p5=5;
int p6=6;
int p7=7;
int p8=8;
int p9=9;
int p10=10;
int p11=11;
int p12=12;
int p13=13;
int d=1000;
int analogInputPin=A5;
int readVal;
int pin;
int pinArr[13]={p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,analogInputPin};
int display[17][8]={
  {0,1,1,1,1,1,1,0},
  {0,1,0,0,1,0,0,0},
  {0,0,1,1,1,1,0,1},
  {0,1,1,0,1,1,0,1},
  {0,1,0,0,1,0,1,1},
  {0,1,1,0,0,1,1,1},
  {0,1,1,1,0,1,1,1},
  {0,1,0,0,1,1,0,0},
  {0,1,1,1,1,1,1,1},
  {0,1,1,0,1,1,1,1},
  {0,1,0,1,1,1,1,1},
  {0,1,1,1,0,0,1,1},
  {0,0,1,1,0,1,1,0},
  {0,1,1,1,1,0,0,1},
  {0,0,1,1,0,1,1,1},
  {0,0,0,1,0,1,1,1},
  {0,0,0,0,0,0,0,0}
 };

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  for(int i=0;i<13;i++){
    pinMode(pinArr[i],OUTPUT);
  }

  pinMode(analogInputPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(analogInputPin);
  Serial.println(readVal);

  if(readVal<=64){
  //0

  pin =2;
  for(int i=0;i<8;i++){
    digitalWrite(pin,display[0][i]);
    pin++;
  }

  //0000
    digitalWrite(p10,LOW);
    digitalWrite(p11,LOW);
    digitalWrite(p12,LOW);
    digitalWrite(p13,LOW);

  delay(d);

  // 0FF
     pin=2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
    }

  }
  else if(readVal>64 && readVal<= 128){

  //1
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[1][i]);
      pin++;
    }

  //0001
    digitalWrite(p13,LOW);
    digitalWrite(p12,LOW);
    digitalWrite(p11,LOW);
    digitalWrite(p10,HIGH);

  delay(d);

  // 0FF
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
    }
  }

  else if(readVal>128 && readVal<=192){
  //2

    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[2][i]);
      pin++;
    }

  //0010
    digitalWrite(p13,LOW);
    digitalWrite(p12,LOW);
    digitalWrite(p11,HIGH);
    digitalWrite(p10,LOW);

  delay(d);

  // 0FF
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
    }

  }
  else if(readVal>192 && readVal <= 256){
  //3

    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[3][i]);
      pin++;
    }

  //0011
    digitalWrite(p13,LOW);
    digitalWrite(p12,LOW);
    digitalWrite(p11,HIGH);
    digitalWrite(p10,HIGH);

  delay(d);

  // 0FF
      pin =2;
      for(int i=0;i<8;i++){
        digitalWrite(pin,display[16][i]);
        pin++;
      }
  }

  else if(readVal>256 && readVal <=320){
  //4

      pin =2;
      for(int i=0;i<8;i++){
        digitalWrite(pin,display[4][i]);
        pin++;
      }

  //0100
    digitalWrite(p13,LOW);
    digitalWrite(p12,HIGH);
    digitalWrite(p11,LOW);
    digitalWrite(p10,LOW);

  delay(d);

  // 0FF
      pin =2;
      for(int i=0;i<8;i++){
        digitalWrite(pin,display[16][i]);
        pin++;
      }
  }

   else if(readVal>320 && readVal <=384){
  //5

    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[5][i]);
      pin++;
    }

  //0101
    digitalWrite(p13,LOW);
    digitalWrite(p12,HIGH);
    digitalWrite(p11,LOW);
    digitalWrite(p10,HIGH);

  delay(d);

  // 0FF
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
    }
   }

  else if(readVal>384 && readVal <= 448){
  //6

    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[6][i]);
      pin++;
    }

  //0110
  digitalWrite(p13,LOW);
  digitalWrite(p12,HIGH);
  digitalWrite(p11,HIGH);
  digitalWrite(p10,LOW);


  delay(d);

  // 0FF
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
    }
  }

   else if(readVal>448 && readVal <=512){
  //7

    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[7][i]);
      pin++;
   }

  //0111
    digitalWrite(p13,LOW);
    digitalWrite(p12,HIGH);
    digitalWrite(p11,HIGH);
    digitalWrite(p10,HIGH);

  delay(d);

  // 0FF
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
    }
   }

else if(readVal>512 && readVal <=576){
  //8

    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[8][i]);
      pin++;
    }

  //1000
    digitalWrite(p13,HIGH);
    digitalWrite(p12,LOW);
    digitalWrite(p11,LOW);
    digitalWrite(p10,LOW);

  delay(d);

  // 0FF
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
    }
}

 else if(readVal>576 && readVal <=640){
  //9
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[9][i]);
      pin++;
    }

  //1001
    digitalWrite(p13,HIGH);
    digitalWrite(p12,LOW);
    digitalWrite(p11,LOW);
    digitalWrite(p10,HIGH);

  delay(d);

  // 0FF
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
    }
 }

 else if(readVal>640 && readVal <=704){
  //A
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[10][i]);
      pin++;
    }

  //1010
    digitalWrite(p13,HIGH);
    digitalWrite(p12,LOW);
    digitalWrite(p11,HIGH);
    digitalWrite(p10,LOW);

  delay(d);

  // 0FF
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
    }
 }

 else if(readVal>704 && readVal <=768){
  //b

  pin =2;
  for(int i=0;i<8;i++){
    digitalWrite(pin,display[11][i]);
    pin++;
  }

  //1011
    digitalWrite(p13,HIGH);
    digitalWrite(p12,LOW);
    digitalWrite(p11,HIGH);
    digitalWrite(p10,HIGH);

  delay(d);

  // 0FF
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
    }
 }

 else if(readVal>768 && readVal <=832){
  //C

    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[12][i]);
      pin++;
    }

  //1100
    digitalWrite(p13,HIGH);
    digitalWrite(p12,HIGH);
    digitalWrite(p11,LOW);
    digitalWrite(p10,LOW);

  delay(d);

  // 0FF
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
    }
 }

 else if(readVal>832 && readVal <=896){
  //D

    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[13][i]);
      pin++;
    }

  //1101
    digitalWrite(p13,HIGH);
    digitalWrite(p12,HIGH);
    digitalWrite(p11,LOW);
    digitalWrite(p10,HIGH);

  delay(d);

   // 0FF
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
   }
 }

 else if(readVal>896 && readVal <=960){
  //E

    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[14][i]);
      pin++;
    }

  //1110
    digitalWrite(p13,HIGH);
    digitalWrite(p12,HIGH);
    digitalWrite(p11,HIGH);
    digitalWrite(p10,LOW);

  delay(d);

   // 0FF
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
    }
 }

 else if(readVal>960){
  //F

    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[15][i]);
      pin++;
    }

  //1111
    digitalWrite(p13,HIGH);
    digitalWrite(p12,HIGH);
    digitalWrite(p11,HIGH);
    digitalWrite(p10,HIGH);

  delay(d);

  // 0FF
    pin =2;
    for(int i=0;i<8;i++){
      digitalWrite(pin,display[16][i]);
      pin++;
    }
 }

}
