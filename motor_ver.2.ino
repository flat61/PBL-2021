//#include <stdio.h>
//#include <stdlib.h>
int Motor01_in1 = 3;
int Motor01_in2 = 5;
int Motor02_in3 = 6;
int Motor02_in4 = 9;
int iPin = A0;
int val = 0;

void setup() 
{
  pinMode (Motor01_in1, OUTPUT);
  pinMode (Motor01_in2, OUTPUT);//stop//
  pinMode (Motor02_in3, OUTPUT);
  pinMode (Motor02_in4, OUTPUT);
  analogWrite (Motor01_in1, 0);
  analogWrite (Motor01_in2, 0);
  analogWrite (Motor02_in3, 0);
  analogWrite (Motor02_in4, 0);
  Serial.begin (9600);
}
//int main(void){
//  for(int i = 0; i < 3; i++){}
//}

void loop() 
{
 // Serial.println(random(1,100));
  
 // delay(500);
  
  int ans;
  ans = analogRead(0);
  delay(500);

  val = analogRead (iPin);
  
  // PWM 設定値:0～255 255 / 255 * 5 = 5V //
  analogWrite (Motor01_in1, 0);
  analogWrite (Motor01_in2, 255);
  analogWrite (Motor02_in3, 255);
  analogWrite (Motor02_in4, 0);
  delay (200);//速く正回転//
  Serial.println(ans);
if(ans >= 200 && val >= 140){
  analogWrite (Motor01_in1, 0);
  analogWrite (Motor01_in2, 0);
  analogWrite (Motor02_in3, 0);
  analogWrite (Motor02_in4, 0);
  delay (200);
  
  analogWrite (Motor01_in1, 255);
  analogWrite (Motor01_in2, 0);
  analogWrite (Motor02_in3, 0);
  analogWrite (Motor02_in4, 255);
  delay (500);//速く逆回転//

  analogWrite (Motor01_in1, 0);
  analogWrite (Motor01_in2, 0);
  analogWrite (Motor02_in3, 0);
  analogWrite (Motor02_in4, 0);
  delay (200);
if(random(1,100) <= 50){
  analogWrite (Motor01_in1, 255);
  analogWrite (Motor01_in2, 0);
  analogWrite (Motor02_in3, 255);
  analogWrite (Motor02_in4, 0);
  delay (900);//方向転換//
  
}
if(random(1,100) > 50){
analogWrite (Motor01_in1, 0);
  analogWrite (Motor01_in2, 255);
  analogWrite (Motor02_in3, 0);
  analogWrite (Motor02_in4, 255);
  delay (900);//方向転換//
  }
  
  analogWrite (Motor01_in1, 0);
  analogWrite (Motor01_in2, 0);
  analogWrite (Motor02_in3, 0);
  analogWrite (Motor02_in4, 0);
  delay (200);
}
 
}
