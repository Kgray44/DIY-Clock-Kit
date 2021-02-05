RTC_DS1307 rtc;
SevSeg sevseg;
int NowTime;
int NowDate;

void SetupPinModes(){
  pinMode(Button1, INPUT);
  pinMode(Button2, INPUT);
  pinMode(Button3, INPUT);
  pinMode(Button4, INPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  pinMode(SW3, INPUT);
  pinMode(SW4, INPUT);
  pinMode(LDR, INPUT);
  pinMode(POT1, INPUT);
  pinMode(LED4, OUTPUT);
  pinMode(RGBRed, OUTPUT);
  pinMode(RGBGreen, OUTPUT);
  pinMode(RGBBlue, OUTPUT);
  pinMode(Buzzer, OUTPUT);
}

void StartSevSeg(int p){
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments,
  updateWithDelays, leadingZeros, disableDecPoint);
  sevseg.setBrightness(p);
}

void SetBright(int n){
  sevseg.setBrightness(n);
}

void GetTime(){
  DateTime now = rtc.now();
  NowTime = now.hour()*100+now.minute();
}

void GetDate(){
  DateTime now = rtc.now();
  NowDate = now.month()*100+now.day();
}

void Set(int i){
  sevseg.setNumber(i);
}

void Refresh(){
  sevseg.refreshDisplay();
}

int count=0;
int Now;
int tim=0;
int PressesCount=0;
boolean buttonPresses=false;
void ButtonPress(int pin, int amount){
  if (pin == HIGH){
    count++;
    while (pin == HIGH);
    Now = millis();
  }
  if (pin != HIGH){
    delay(20);
    tim=tim+20;
  }
  if ((Now+tim) >= Now){
    count=0;
  }
  if (count == amount){
    buttonPresses=true;
  }
  else {
    buttonPresses=false;
  }
  PressesCount=count;
}

int pressLength=0;
boolean pressLengthAmount=false;
void ButtonPressLength(int pin, int Long){
  while (pin == HIGH){
    delay(20);
    pressLength = pressLength + 20;
  }
  if (pressLength == Long){
    pressLengthAmount=true;
  }
  else {
    pressLengthAmount=false;
  }
}

int alarm1minute=0;
int alarm1hour=0;
int alarm2minute=0;
int alarm2hour=0;
int alarm3minute=0;
int alarm3hour=0;
int alarm4minute=0;
int alarm4hour=0;
boolean alarm1=false;
void Alarm1Set(int hourbutton, int minutebutton, int onbutton, int offbutton){
  if (onbutton == HIGH){
    alarm1 = true;
    Set(0);
    Refresh();
  }
  else if (offbutton == HIGH){
    alarm1 = false;
    Set(1);
    Refresh();
  }
  if (hourbutton == HIGH){
    alarm1hour++;
    if (alarm1hour == 25){
      alarm1hour=0;
    }
    while (hourbutton == HIGH);
  }
  if (minutebutton == HIGH){
    alarm1minute++;
    if (alarm1minute == 60){
      alarm1minute=0;
    }
    while (minutebutton == HIGH);
  }
  Set((alarm1hour*100)+alarm1minute);
  Refresh();
}

boolean alarm2=false;
void Alarm2Set(int hourbutton, int minutebutton, int onbutton, int offbutton){
  if (onbutton == HIGH){
    alarm2 = true;
    Set(0);
    Refresh();
  }
  else if (offbutton == HIGH){
    alarm2 = false;
    Set(1);
    Refresh();
  }
  if (hourbutton == HIGH){
    alarm2hour++;
    if (alarm2hour == 25){
      alarm2hour=0;
    }
    while (hourbutton == HIGH);
  }
  if (minutebutton == HIGH){
    alarm2minute++;
    if (alarm2minute == 60){
      alarm2minute=0;
    }
    while (minutebutton == HIGH);
  }
  Set((alarm2hour*100)+alarm2minute);
  Refresh();
}

boolean alarm3=false;
void Alarm3Set(int hourbutton, int minutebutton, int onbutton, int offbutton){
  if (onbutton == HIGH){
    alarm3 = true;
    Set(0);
    Refresh();
  }
  else if (offbutton == HIGH){
    alarm3 = false;
    Set(1);
    Refresh();
  }
  if (hourbutton == HIGH){
    alarm3hour++;
    if (alarm3hour == 25){
      alarm3hour=0;
    }
    while (hourbutton == HIGH);
  }
  if (minutebutton == HIGH){
    alarm3minute++;
    if (alarm3minute == 60){
      alarm3minute=0;
    }
    while (minutebutton == HIGH);
  }
  Set((alarm3hour*100)+alarm3minute);
  Refresh();
}

boolean alarm4=false;
void Alarm4Set(int hourbutton, int minutebutton, int onbutton, int offbutton){
  if (onbutton == HIGH){
    alarm4 = true;
    Set(0);
    Refresh();
  }
  else if (offbutton == HIGH){
    alarm4 = false;
    Set(1);
    Refresh();
  }
  if (hourbutton == HIGH){
    alarm4hour++;
    if (alarm4hour == 25){
      alarm4hour=0;
    }
    while (hourbutton == HIGH);
  }
  if (minutebutton == HIGH){
    alarm4minute++;
    if (alarm4minute == 60){
      alarm4minute=0;
    }
    while (minutebutton == HIGH);
  }
  Set((alarm4hour*100)+alarm4minute);
  Refresh();
}


void ledwrite(int r, int g, int b){
  analogWrite(RGBRed, r);
  analogWrite(RGBGreen, g);
  analogWrite(RGBBlue, b);
}

void BuzzerSequence(int a, int b, int c, int d, int e, int f, int g, int h){
  digitalWrite(Buzzer, HIGH);
  delay(a*1000);
  digitalWrite(Buzzer, LOW);
  delay(b*1000);
  digitalWrite(Buzzer, HIGH);
  delay(c*1000);
  digitalWrite(Buzzer, LOW);
  delay(d*1000);
  digitalWrite(Buzzer, HIGH);
  delay(e*1000);
  digitalWrite(Buzzer, LOW);
  delay(f*1000);
  digitalWrite(Buzzer, HIGH);
  delay(g*1000);
  digitalWrite(Buzzer, LOW);
  delay(h*1000);
}

void ledSequence(int R, int G, int B, int a, int b, int c, int d, int e, int f, int g, int h){
  ledwrite(R,G,B);
  delay(a*1000);
  ledwrite(0,0,0);
  delay(b*1000);
  ledwrite(R,G,B);
  delay(c*1000);
  ledwrite(0,0,0);
  delay(d*1000);
  ledwrite(R,G,B);
  delay(e*1000);
  ledwrite(0,0,0);
  delay(f*1000);
  ledwrite(R,G,B);
  delay(g*1000);
  ledwrite(0,0,0);
  delay(h*1000);
}

void BuzzerledSequence(int R, int G, int B, int a, int b, int c, int d, int e, int f, int g, int h){
  ledwrite(R,G,B);
  digitalWrite(Buzzer, HIGH);
  delay(a*1000);
  ledwrite(0,0,0);
  digitalWrite(Buzzer, LOW);
  delay(b*1000);
  ledwrite(R,G,B);
  digitalWrite(Buzzer, HIGH);
  delay(c*1000);
  ledwrite(0,0,0);
  digitalWrite(Buzzer, LOW);
  delay(d*1000);
  ledwrite(R,G,B);
  digitalWrite(Buzzer, HIGH);
  delay(e*1000);
  ledwrite(0,0,0);
  digitalWrite(Buzzer, LOW);
  delay(f*1000);
  ledwrite(R,G,B);
  digitalWrite(Buzzer, HIGH);
  delay(g*1000);
  ledwrite(0,0,0);
  digitalWrite(Buzzer, LOW);
  delay(h*1000);
}



int BB1;
int G1;
int R1;
void LED1Lights(int R1,int G1,int BB1){}
int a1;
int b1;
int c1;
int d1;
int e1;
int f1;
int g1;
int h1;
void Arm1Alarm(int amount, int sleepButton, int buz, int led, int a1, int b1, int c1, int d1, int e1, int f1, int g1, int h1){
  DateTime now = rtc.now();
  if (alarm1=true){
    if (alarm1hour == now.hour()){
      if (alarm1minute == now.minute()){
        if (amount == 77){
          while (sleepButton != HIGH){
            if (led == LOW && buz == HIGH){
              BuzzerSequence(a1, b1, c1, d1, e1, f1, g1, h1);
            }
            if (led == HIGH && buz == LOW){
              ledSequence(R1, G1, B1, a1, b1, c1, d1, e1, f1, g1, h1);
            }
            if (led == HIGH && buz == HIGH){
              BuzzerledSequence(R1, G1, B1, a1, b1, c1, d1, e1, f1, g1, h1);
            }
          }
        }
        else if (amount != 77){
          if (led == LOW && buz == HIGH){
            BuzzerSequence(a1, b1, c1, d1, e1, f1, g1, h1);
          }
          if (led == HIGH && buz == LOW){
            ledSequence(R1, G1, B1, a1, b1, c1, d1, e1, f1, g1, h1);
          }
          if (led == HIGH && buz == HIGH){
            BuzzerledSequence(R1, G1, B1, a1, b1, c1, d1, e1, f1, g1, h1);
          }
        }
      }
    }
  }
}

int R2;
int G2;
int B2;
void LED2Lights(int R2, int G2, int B2){}
int aa;
int bb;
int cc;
int d2;
int ee;
int ff;
int gg;
int hh;
void Arm2Alarm(int amount, int sleepButton, int buz, int led, int a2, int b2, int c2, int d2, int e2, int f2, int g2, int h2){
  DateTime now = rtc.now();
  if (alarm2=true){
    if (alarm2hour == now.hour()){
      if (alarm2minute == now.minute()){
        if (amount == 77){
          while (sleepButton != HIGH){
            if (led == LOW && buz == HIGH){
              BuzzerSequence(a2, b2, c2, d2, e2, f2, g2, h2);
            }
            if (led == HIGH && buz == LOW){
              ledSequence(R2, G2, B2, a2, b2, c2, d2, e2, f2, g2, h2);
            }
            if (led == HIGH && buz == HIGH){
              BuzzerledSequence(R2, G2, B2, a2, b2, c2, d2, e2, f2, g2, h2);
            }
          }
        }
        else if (amount != 77){
          if (led == LOW && buz == HIGH){
            BuzzerSequence(a2, b2, c2, d2, e2, f2, g2, h2);
          }
          if (led == HIGH && buz == LOW){
            ledSequence(R2, G2, B2, a2, b2, c2, d2, e2, f2, g2, h2);
          }
          if (led == HIGH && buz == HIGH){
            BuzzerledSequence(R2, G2, B2, a2, b2, c2, d2, e2, f2, g2, h2);
          }
        }
      }
    }
  }
}

int R3;
int G3;
int B3;
void LED3Lights(int R3, int G3, int B3){}
int a3;
int b3;
int c3;
int d3;
int e3;
int f3;
int g3;
int h3;
void Arm3Alarm(int amount, int sleepButton, int buz, int led, int a3, int b3, int c3, int d3, int e3, int f3, int g3, int h3){
  DateTime now = rtc.now();
  if (alarm3=true){
    if (alarm3hour == now.hour()){
      if (alarm3minute == now.minute()){
        if (amount == 77){
          while (sleepButton != HIGH){
            if (led == LOW && buz == HIGH){
              BuzzerSequence(a3, b3, c3, d3, e3, f3, g3, h3);
            }
            if (led == HIGH && buz == LOW){
              ledSequence(R3, G3, B3, a3, b3, c3, d3, e3, f3, g3, h3);
            }
            if (led == HIGH && buz == HIGH){
              BuzzerledSequence(R3, G3, B3, a3, b3, c3, d3, e3, f3, g3, h3);
            }
          }
        }
        else if (amount != 77){
          if (led == LOW && buz == HIGH){
            BuzzerSequence(a3, b3, c3, d3, e3, f3, g3, h3);
          }
          if (led == HIGH && buz == LOW){
            ledSequence(R3, G3, B3, a3, b3, c3, d3, e3, f3, g3, h3);
          }
          if (led == HIGH && buz == HIGH){
            BuzzerledSequence(R3, G3, B3, a3, b3, c3, d3, e3, f3, g3, h3);
          }
        }
      }
    }
  }
}

int R4;
int G4;
int B4;
void LED4Lights(int R4, int G4, int B4){}
int a4;
int b4;
int c4;
int d4;
int e4;
int f4;
int g4;
int h4;
void Arm4Alarm(int amount, int sleepButton, int buz, int led, int a4, int b4, int c4, int d4, int e4, int f4, int g4, int h4){
  DateTime now = rtc.now();
  if (alarm4=true){
    if (alarm4hour == now.hour()){
      if (alarm4minute == now.minute()){
        if (amount == 77){
          while (sleepButton != HIGH){
            if (led == LOW && buz == HIGH){
              BuzzerSequence(a4, b4, c4, d4, e4, f4, g4, h4);
            }
            if (led == HIGH && buz == LOW){
              ledSequence(R4, G4, B4, a4, b4, c4, d4, e4, f4, g4, h4);
            }
            if (led == HIGH && buz == HIGH){
              BuzzerledSequence(R4, G4, B4, a4, b4, c4, d4, e4, f4, g4, h4);
            }
          }
        }
        else if (amount != 77){
          if (led == LOW && buz == HIGH){
            BuzzerSequence(a4, b4, c4, d4, e4, f4, g4, h4);
          }
          if (led == HIGH && buz == LOW){
            ledSequence(R4, G4, B4, a4, b4, c4, d4, e4, f4, g4, h4);
          }
          if (led == HIGH && buz == HIGH){
            BuzzerledSequence(R4, G4, B4, a4, b4, c4, d4, e4, f4, g4, h4);
          }
        }
      }
    }
  }
}

void led(int pin, int stats, int bright){
  if (stats == HIGH){
    analogWrite(pin, bright);
  }
  else {
    digitalWrite(pin, LOW);
  }
}

void buzzer(int pin, int ton, int leng){
  tone(pin, ton, leng);
}

float Map(float val, int inv){
  if (inv == HIGH){
    map(val,0,1023,0,255);
  }
  else if (inv == LOW){
    map(val,1023,0,0,255);
  }
  return(val);
}
