int cledpin[16] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,A0,A1}
//Initialise column pins
Int rledpin[4]={A2,A3,A4,A5}//initialise row layer pins
void setup()
{
  for(int i = 0; i<=15; i++)
  {
    pinMode(cledpin[i], OUTPUT);// set column pins as output
  }
  for(int i = 0; i<=3; i++)
  {
    pinMode(rledpin[i], OUTPUT);// set row pins as output
  }
void loop()
{for(i=1;I<=3;i++)
{
turnon();//function call to turn all the LEDs on
turnoff ();//function call to turn all the LEDs off
}
rowlayerwiseflickering();//function call to flicker the LEDs, row layer wise serially
columnlayerwiseflickering();//function call to flicker the LEDs, column layer wise 
propellerpatternflickering ();//function call to flicker the LEDs in propeller pattern
}
void turnon()
{
for(int i=0;i<=3;i++)// 4 times this Loop repeats cause there are 4 row LED pins
digitalWrite(rledpin[i],HIGH);// turn on the row LED pins (voltage level is high)
}
void turnoff()
{
for(int i=0;i<=3;i++)
{
digitalWrite(rledpin[i],LOW);// turn off the row led pins ( voltage level is low)
}
void rowlayerwiseflickering()
{
for(int i=1;i<=3;i++)
{
for(int i=0;i<=3;i++)
{
digitalWrite(rledpin[i],HIGH);
delay(100);// stop the program for 100 milliseconds
}
for(int i=3;i>=0;i--)
{
digitalWrite(rledpin[i],LOW);
delay(100);
}
}
}
void columnwiselayerflickering()
{
turnoff();
for(int i=1;i<=2;i++)
{
for(int i=0;i<=3;i++)
{
digitalWrite(cledpin [i],HIGH);//turn on the column pins (voltage level is high)
delay(100);
}
for(int i=4;i<=7;i++)
{
digitalWrite(cledpin[i],HIGH);
delay(100);
}
for(int i=8;i<=11;i++)
{
digitalWrite(cledpin[i],HIGH);
delay(100);
}
for(int i=12;i<=15;i++)
{
digitalWrite(cledpin[i],HIGH);
delay(100);
}
for(int i=0;i<=3;i++)
{
digitalWrite(cledpin[i],LOW);
delay(100);
}
for(int i=4;i<=7;i++)
{
digitalWrite(cledpin[i], LOW);
delay(100);
}
for(int i=8;i<=11;i++)
{
digitalWrite(cledpin[i],LOW);
delay(100);
}
for(int i=12;i<=15;i++)
{
digitalWrite(cledpin[i],LOW);
delay(100);
}
for(int i=15;i>=12;i--)
{
digitalWrite(cledpin[i],HIGH);
delay(100);
}
for(int i=11;i>=8;i--)
{
digitalWrite(cledpin[i],HIGH);
delay(100);
}
for(int i=7;i>=4;i--)
{
digitalWrite(cledpin[i],HIGH);
delay(100);
}
for(int i=3;i>=0;i--)
{
digitalWrite(cledpin[i],HIGH);
delay(100);
}
for(int i=15;i>=12;i--)
{
digitalWrite(cledpin[i],LOW);
delay(100);
}
for(int i=11;i>=8;i--)
{
digitalWrite(cledpin[i],LOW);
delay(100);
}
for(int i=7;i>=4;i--)
{
digitalWrite(cledpin[i],LOW);
delay(100);
}
for(int i=3;i>=0;i--)
{
digitalWrite(cledpin[i],LOW);
delay(100);
}
}
}
void propellerpatternflickering ()
{
turnoff();
for(int i=1;i<=3;i++)
{
digitalWrite(cledpin[0],HIGH);
digitalWrite(cledpin[5],HIGH);
digitalWrite(cledpin[10],HIGH);
digitalWrite(cledpin[15],HIGH);
delay(100);
digitalWrite(cledpin[1],HIGH);
digitalWrite(cledpin[5],HIGH);
digitalWrite(cledpin[10],HIGH);
digitalWrite(cledpin[14],HIGH);
delay(100);
digitalWrite(cledpin[2],HIGH);
digitalWrite(cledpin[6],HIGH);
digitalWrite(cledpin[9],HIGH);
digitalWrite(cledpin[13],HIGH);
delay(100);
digitalWrite(cledpin[3],HIGH);
digitalWrite(cledpin[6],HIGH);
digitalWrite(cledpin[9],HIGH);
digitalWrite(cledpin[12],HIGH);
delay(100);
digitalWrite(cledpin[7],HIGH);
digitalWrite(cledpin[6],HIGH);
digitalWrite(cledpin[9],HIGH);
digitalWrite(cledpin[8],HIGH);
delay(100);
digitalWrite(cledpin[11],HIGH);
digitalWrite(cledpin[10],HIGH);
digitalWrite(cledpin[5],HIGH);
digitalWrite(cledpin[4],HIGH);
delay(100);
digitalWrite(cledpin[15],HIGH);
digitalWrite(cledpin[10],HIGH);
digitalWrite(cledpin[5],HIGH);
digitalWrite(cledpin[0],HIGH);
delay(100);
}
}
