/* DIY Clock Example
 
 Copyright 2021 Kgray44
 
 Licensed under the MIT License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at 
 https://opensource.org/licenses/MIT
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 
 This example demonstrates a very simple use of the DIY Clock with a 4
 digit display. Please read "Read.h" before beginning.  Required to change.
 */

#include <Wire.h>
#include "RTClib.h"
#include "SevSeg.h"
#include "DIY_Clock_Pins.h"
#include "DIY_Clock_Extras.h"
#include "DIY_Clock_Functions.h"

int dateButton = button1;
int Alarm1 = sw1;
int Alarm2 = sw2;
int Alarm3 = sw3;
int Alarm4 = sw4;

void setup () {
  Serial.begin(9600);
  SetupPinModes();
  StartSevSeg(100);
}

void loop () {
  LEDPot();
  GetTime();
  GetDate();
  Map(pot,HIGH);
  SetBright(pot);
  if (Alarm1 == HIGH){Alarm1Set(button2,button3,button1,button4);}
  else if (Alarm2 == HIGH){Alarm2Set(button2,button3,button1,button4);}
  else if (Alarm3 == HIGH){Alarm3Set(button2,button3,button1,button4);}
  else if (Alarm4 == HIGH){Alarm4Set(button2,button3,button1,button4);}
  
  LED1Lights(255,0,255);
  Arm1Alarm(77,button1,LOW,HIGH,2,1,2,1,2,1,2,1);
  
  LED2Lights(127,255,20);
  Arm2Alarm(20,77,HIGH,HIGH,5,4,1,2,5,4,1,2);
  
  Arm3Alarm(77,button2,HIGH,LOW,1,1,1,1,1,1,1,1);
  
  LED4Lights(255,255,127);
  Arm4Alarm(5,77,HIGH,HIGH,2,1,5,1,2,1,5,1);

  Set(NowTime);
  
  if (dateButton == HIGH){
    buzzer(Buzzer,15000,1000);
    showDate(5);
  }
  
  Refresh(); //required
}

void showDate(int y){
  Set(NowDate);
  Refresh();
  delay(y*1000);
  Set(NowTime);
}

void LEDPot(){
  led(LED4,HIGH,pot);
}
