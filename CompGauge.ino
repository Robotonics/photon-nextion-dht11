/**
 * @example CompGauge.ino
 *
 * @par How to Use
 * This example shows that ,when the "btn_up" component on the Nextion screen is released,
 * the value of gauge component will plus 5,when the "btn_down" component released ,the value of
 * gauge component will minus 5 every time.
 *
 * @author  Wu Pengfei (email:<pengfei.wu@itead.cc>)
 * @date    2015/7/10
 * @copyright
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#include "Nextion.h"
#include "Adafruit_DHT.h"
#define DHTPIN D0    // what pin we're connected to

// Uncomment whatever type you're using!
#define DHTTYPE DHT11	// DHT 11
////#define DHTTYPE DHT21		// DHT 21 (AM2301)
NexGauge tpointer  = NexGauge(1, 2, "tpointer");
NexText tempvar  = NexText(1, 4, "tempvar");
NexText humvar  = NexText(0, 4, "humvar");
NexGauge hpointer  = NexGauge(0, 3, "hpointer");
//NexButton humidity   = NexButton(0, 2, "humidity");
//NexButton temperature = NexButton(1, 3, "temperature");
DHT dht(DHTPIN, DHTTYPE);
NexTouch *nex_listen_list[] =
{
  //  &humidity,
  //  &temperature,
    NULL
};

//void temperaturePopCallback(void *ptr)
//{
  //  float t = dht.getTempCelcius();    // take temperature reading from DHT11
  //  int te=int((t+0.5)-2);
  //  tpointer.setValue(te);

//}
//void humidityPopCallback(void *ptr)
//{
//   float h = dht.getHumidity();
//   int he=int(h+0.5);
//   hpointer.setValue(he);
//}

void setup(void)
{
    nexInit();
    dht.begin();
  //  temperature.attachPop(temperaturePopCallback);
  //  humidity.attachPop(humidityPopCallback);
}

void loop(void)
{
nexLoop(nex_listen_list);          // listen for touch events on lcd
float t = dht.getTempCelcius();    // take temperature reading from DHT11
int te=int((t+0.5)-2);             // Convert the float to integer
    if (te==0)                       // could not orientate gaugue to readings
        {te=295;}                        // so this is a quick n dirty fix...the -2 is for calibration.
    else if(te==1)
        {te=300;}
    else if(te==2)
        {te=305;}
    else if(te==3)
        {te=310;}
    else if(te==4)
        {te=315;}
    else if(te==5)
        {te=321;}
    else if(te==6)
        {te=326;}
    else if(te==7)
        {te=332;}
    else if(te==8)
        {te=337;}
    else if(te==9)
        {te=342;}
    else if(te==10)
        {te=348;}
    else if(te==11)
        {te=353;}
    else if(te==12)
        {te=358;}
    else if(te==13)
        {te=4;}
    else if(te==14)
        {te=9;}
    else if(te==15)
        {te=15;}
    else if(te==16)
        {te=20;}              // start from here!!
    else if(te==17)
        {te=25;}
    else if(te==18)
        {te=32;}
    else if(te==19)
        {te=37;}
    else if(te==20)
        {te=42;}
    else if(te==21)
        {te=47;}
    else if(te==22)
        {te=53;}
    else if(te==23)
        {te=58;}
    else if(te==24)
        {te=64;}
    else if(te==25)
        {te=69;}
    else if(te==26)
        {te=75;}
    else if(te==27)
        {te=80;}
    else if(te==28)
        {te=85;}
    else if(te==29)
        {te=90;}
    else if(te==30)
        {te=95;}
    else if(te==31)
        {te=100;}
    else if(te==32)
        {te=105;}
    else if(te==33)
        {te=110;}
    else if(te==34)
        {te=115;}
    else if(te==35)
        {te=120;}
    else if(te==36)
        {te=125;}
    else if(te==37)
        {te=130;}
    else if(te==38)
        {te=135;}
    else if(te==39)
        {te=140;}
    else if(te==40)
        {te=145;}
    else if(te==41)
        {te=150;}
    else if(te==42)
        {te=155;}
    else if(te==43)
        {te=160;}
    else if(te==44)
        {te=165;}
    else if(te==45)
        {te=169;}
    else if(te==46)
        {te=174;}
    else if(te==47)
        {te=178;}
    else if(te==48)
        {te=182;}
    else if(te==49)
        {te=187;}
    else if(te==50)
        {te=191;}
    else if(te==51)
        {te=195;}
    else if(te==52)
        {te=200;}
    else if(te==53)
        {te=204;}
    else if(te==54)
        {te=209;}
    else if(te==55)
        {te=214;}
    else if(te==56)
        {te=219;}
    else if(te==57)
        {te=224;}
    else if(te==58)
        {te=229;}
    else if(te==59)
        {te=234;}
    else if(te==60)
        {te=238;}
tpointer.setValue(te);
String temperature = String(t-2);
tempvar.setText(temperature);
float h = dht.getHumidity();
int he=int(h+0.5);
    if (he==0)
        {he=299;}
    else if(he==1)
        {he=303;}
    else if(he==2)
      {he=306;}
    else if(he==3)
      {he=308;}
    else if(he==4)
      {he=311;}
    else if(he==5)
      {he=314;}
    else if(he==6)
      {he=317;}
    else if(he==7)
      {he=320;}
    else if(he==8)
      {he=323;}
    else if(he==9)
      {he=326;}
    else if(he==10)
      {he=329;}
    else if(he==11)
      {he=333;}
    else if(he==12)
      {he=336;}
    else if(he==13)
      {he=339;}
    else if(he==14)
      {he=342;}
    else if(he==15)
      {he=345;}
    else if(he==16)
      {he=348;}              // start from here!!
    else if(he==17)
      {he=351;}
    else if(he==18)
      {he=353;}
    else if(he==19)
      {he=356;}
    else if(he==20)
      {he=0;}
    else if(he==21)
      {he=3;}
    else if(he==22)
      {he=5;}
    else if(he==23)
      {he=8;}
    else if(he==24)
      {he=11;}
    else if(he==25)
      {he=14;}
    else if(he==26)
      {he=17;}
    else if(he==27)
      {he=21;}
    else if(he==28)
      {he=24;}
    else if(he==29)
      {he=27;}
    else if(he==30)
      {he=30;}
    else if(he==31)
      {he=33;}
    else if(he==32)
      {he=36;}
    else if(he==33)
      {he=39;}
    else if(he==34)
      {he=42;}
    else if(he==35)
      {he=45;}
    else if(he==36)
      {he=48;}
    else if(he==37)
      {he=51;}
    else if(he==38)
      {he=54;}
    else if(he==39)
      {he=57;}
    else if(he==40)
      {he=60;}
    else if(he==41)
      {he=63;}
    else if(he==42)
      {he=66;}
    else if(he==43)
      {he=69;}
    else if(he==44)
      {he=72;}
    else if(he==45)
      {he=75;}
    else if(he==46)
      {he=78;}
    else if(he==47)
      {he=81;}
    else if(he==48)
      {he=84;}
    else if(he==49)
      {he=97;}
    else if(he==50)
      {he=91;}
    else if(he==51)
      {he=93;}
    else if(he==52)
      {he=96;}
    else if(he==53)
      {he=99;}
    else if(he==54)
      {he=102;}
    else if(he==55)
      {he=105;}
    else if(he==56)
      {he=108;}
    else if(he==57)
      {he=111;}
    else if(he==58)
      {he=114;}
    else if(he==59)
      {he=117;}
    else if(he==60)
      {he=121;}
    else if(he==61)
      {he=124;}
    else if(he==62)
      {he=127;}
    else if(he==63)
      {he=129;}
    else if(he==64)
      {he=132;}
    else if(he==65)
      {he=135;}
    else if(he==66)
      {he=138;}
    else if(he==67)
      {he=141;}
    else if(he==68)
      {he=144;}
    else if(he==69)
      {he=147;}
    else if(he==70)
      {he=150;}
    else if(he==71)
      {he=153;}
    else if(he==72)
      {he=156;}
    else if(he==73)
      {he=159;}
    else if(he==74)
      {he=163;}
    else if(he==75)
      {he=165;}
    else if(he==76)
      {he=169;}              // start from here!!
    else if(he==77)
      {he=171;}
    else if(he==78)
      {he=174;}
    else if(he==79)
      {he=177;}
    else if(he==80)
      {he=180;}
    else if(he==81)
      {he=183;}
    else if(he==82)
      {he=186;}
    else if(he==83)
      {he=189;}
    else if(he==84)
      {he=192;}
    else if(he==85)
      {he=195;}
    else if(he==86)
      {he=198;}
    else if(he==87)
      {he=201;}
    else if(he==88)
      {he=204;}
    else if(he==89)
      {he=206;}
    else if(he==90)
      {he=209;}
    else if(he==91)
      {he=212;}
    else if(he==92)
      {he=215;}
    else if(he==93)
      {he=219;}
    else if(he==94)
      {he=221;}
    else if(he==95)
      {he=224;}
    else if(he==96)
      {he=227;}
    else if(he==97)
      {he=230;}
    else if(he==98)
      {he=230;}
    else if(he==99)
      {he=236;}
    else if(he==100)
      {he=239;}
hpointer.setValue(he);
String humid = String(h);
humvar.setText(humid);
delay(200);
}
