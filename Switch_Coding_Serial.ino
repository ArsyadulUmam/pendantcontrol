#define SW_J1         A0
#define SW_J2         A2
#define SW_J3         A1
#define SW_J4         A3
#define SW_OVR_UP     A4
#define SW_OVR_DOWN   A5

#define SW_START      A6
#define SW_STOP       A7
#define SW_HOME       A9
#define SW_RESET      A8

#define SW_UP         A12
#define SW_DOWN       A13
#define SW_LEFT       A11
#define SW_RIGHT      A15

#define SW_F1         A10
#define SW_F2         A14



bool swJ1_State = false, swJ2_State = false, swJ3_State = false, swJ4_State = false;
bool swOvrUp_State = false, swOvrDown_State = false;
bool swStart_State = false, swStop_State = false, swHome_State = false, swReset_State = false;
bool swUp_State = false, swDown_State = false, swLeft_State = false, swRight_State = false;
bool swF1_State = false, swF2_State = false;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);
  Serial2.begin(9600);

  pinMode(SW_J1, INPUT_PULLUP);
  pinMode(SW_J2, INPUT_PULLUP);
  pinMode(SW_J3, INPUT_PULLUP);
  pinMode(SW_J4, INPUT_PULLUP);
  pinMode(SW_OVR_UP, INPUT_PULLUP);
  pinMode(SW_OVR_DOWN, INPUT_PULLUP);
  pinMode(SW_START, INPUT_PULLUP);
  pinMode(SW_STOP, INPUT_PULLUP);
  pinMode(SW_HOME, INPUT_PULLUP);
  pinMode(SW_RESET, INPUT_PULLUP);

  pinMode(SW_UP, INPUT_PULLUP);
  pinMode(SW_DOWN, INPUT_PULLUP);
  pinMode(SW_LEFT, INPUT_PULLUP);
  pinMode(SW_RIGHT, INPUT_PULLUP);
  pinMode(SW_RIGHT, INPUT_PULLUP);
  pinMode(SW_F1, INPUT_PULLUP);
  pinMode(SW_F2, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(SW_J1)==true && swJ1_State==false){swJ1_State=true;}
  if(digitalRead(SW_J1)==false && swJ1_State==true){swJ1_State=false; Serial1.print("S01"); Serial.print("S01");}
  if(digitalRead(SW_J2)==true && swJ2_State==false){swJ2_State=true;}
  if(digitalRead(SW_J2)==false && swJ2_State==true){swJ2_State=false; Serial1.print("S03"); Serial.print("S03");}
  if(digitalRead(SW_J3)==true && swJ3_State==false){swJ3_State=true;}
  if(digitalRead(SW_J3)==false && swJ3_State==true){swJ3_State=false; Serial1.print("S02"); Serial.print("S02");}
  if(digitalRead(SW_J4)==true && swJ4_State==false){swJ4_State=true;}
  if(digitalRead(SW_J4)==false && swJ4_State==true){swJ4_State=false; Serial1.print("S04"); Serial.print("S04");}

  if(digitalRead(SW_OVR_UP)==true && swOvrUp_State==false){swOvrUp_State=true;}
  if(digitalRead(SW_OVR_UP)==false && swOvrUp_State==true){swOvrUp_State=false; Serial1.print("S05"); Serial.print("S05");}
  if(digitalRead(SW_OVR_DOWN)==true && swOvrDown_State==false){swOvrDown_State=true;}
  if(digitalRead(SW_OVR_DOWN)==false && swOvrDown_State==true){swOvrDown_State=false; Serial1.print("S06"); Serial.print("S06");}

  if(digitalRead(SW_START)==true && swStart_State==false){swStart_State=true;}
  if(digitalRead(SW_START)==false && swStart_State==true){swStart_State=false; Serial1.print("S07"); Serial.print("S07");}
  if(digitalRead(SW_STOP)==true && swStop_State==false){swStop_State=true;}
  if(digitalRead(SW_STOP)==false && swStop_State==true){swStop_State=false; Serial1.print("S08"); Serial.print("S08");}
  if(digitalRead(SW_HOME)==true && swHome_State==false){swHome_State=true;}
  if(digitalRead(SW_HOME)==false && swHome_State==true){swHome_State=false; Serial1.print("S09"); Serial.print("S09");}
  if(digitalRead(SW_RESET)==true && swReset_State==false){swReset_State=true;}
  if(digitalRead(SW_RESET)==false && swReset_State==true){swReset_State=false; Serial1.print("S10"); Serial.print("S10");}

  if(digitalRead(SW_F1)==true && swF1_State==false){swF1_State=true;}
  if(digitalRead(SW_F1)==false && swF1_State==true){swF1_State=false; Serial1.print("S11"); Serial.print("S11");}
  if(digitalRead(SW_F2)==true && swF2_State==false){swF2_State=true;}
  if(digitalRead(SW_F2)==false && swF2_State==true){swF2_State=false; Serial1.print("S15"); Serial.print("S15");}

  if(digitalRead(SW_UP)==true && swUp_State==false){swUp_State=true;}
  if(digitalRead(SW_UP)==false && swUp_State==true){swUp_State=false; Serial1.print("S13"); Serial.print("S13");}
  if(digitalRead(SW_DOWN)==true && swDown_State==false){swDown_State=true;}
  if(digitalRead(SW_DOWN)==false && swDown_State==true){swDown_State=false; Serial1.print("S14"); Serial.print("S14");}
  if(digitalRead(SW_LEFT)==true && swLeft_State==false){swLeft_State=true;}
  if(digitalRead(SW_LEFT)==false && swLeft_State==true){swLeft_State=false; Serial1.print("S12"); Serial.print("S12");}
  if(digitalRead(SW_RIGHT)==true && swRight_State==false){swRight_State=true;}
  if(digitalRead(SW_RIGHT)==false && swRight_State==true){swRight_State=false; Serial1.print("S16"); Serial.print("S16");}
  delay(1);
}  
