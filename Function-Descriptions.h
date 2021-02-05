/* Functions:
 *  // 1 second = 1,000 milliseconds
 *  
 *  SetupPinModes(); // sets the pinModes in settings, required
 *  StartSevSeg([brightness]); //starts the sevSeg display with the brightness in parenthesis
 *  
 *  LEDLights[alarm number](0-255, 0-255, 0-255);
 *  Alarm[alarm number]Set([hour button], [minute button], [on button], [off button]);
 *  ArmAlarm[alarm number]([amount of times, or 77 means wait for sleep button], [sleep button or 77 to do amount], [buzzer; high or low], [led; high or low], on, off, on, off, on, off, on, off);
 *  
 *  Map(val,HIGH); // val is value to map, the second value can be HIGH or LOW, HIGH normally, if LOW, then output is inverted
 *  led([pin], [state; HIGH or LOW], [brightness; 0 - 255]);
 *  buzzer([pin], [Hz; 31hz - 31khz], [length in milliseconds]);
 *  
 *  Set(); // sets the number in parenthesis on the display
 *  Refresh(); // required to update the display
 *  SetBright(); // sets the brightness of the display from the number in parentheses
 *  Time:
 *  GetTime(); //gets the current time
 *  GetDate(); //gets the current date
 *  NowTime // is the current time
 *  NowDate // is the current date
 *  now.year()
 *  now.month()
 *  now.day()
 *  daysOfTheWeek[now.dayOfTheWeek()]
 *  now.hour()
 *  now.minute()
 *  now.second()
 *  
 *  
 *  Buttons:
 *  
 *  buttonPresses  // int;     amount of button presses
 *  PressesCount   // boolean; true if button presses = amount of presses required, else false
 *  ButtonPress([button pin], [amount of presses required]);
 *  
 *  pressLength        // int;     length of one button press
 *  pressLengthAmount  // boolean; true if button press length = press length required
 *  ButtonPressLength([button pin], [press length required]);
 */
