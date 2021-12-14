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


void loop() 
{
  int ans;
  ans = analogRead(0);
  Serial.println(ans);
  delay(500);

  val = analogRead (iPin);
  
  //** PWM 設定値:0～255 255 / 255 * 5 = 5V **//
  analogWrite (Motor01_in1, 0);
  analogWrite (Motor01_in2, 255);
  analogWrite (Motor02_in3, 255);
  analogWrite (Motor02_in4, 0);
  delay (200);//速く正回転//

if(ans >= 110 && val >= 140){
  
  Serial.println(ans);
  
  analogWrite (Motor01_in1, 0);
  analogWrite (Motor01_in2, 0);
  analogWrite (Motor02_in3, 0);
  analogWrite (Motor02_in4, 0);
  delay (500);
  
  analogWrite (Motor01_in1, 255);
  analogWrite (Motor01_in2, 0);
  analogWrite (Motor02_in3, 0);
  analogWrite (Motor02_in4, 255);
  delay (1000);//速く逆回転//

  analogWrite (Motor01_in1, 0);
  analogWrite (Motor01_in2, 0);
  analogWrite (Motor02_in3, 0);
  analogWrite (Motor02_in4, 0);
  delay (500);

  analogWrite (Motor01_in1, 255);
  analogWrite (Motor01_in2, 0);
  analogWrite (Motor02_in3, 255);
  analogWrite (Motor02_in4, 0);
  delay (1500);//方向転換//

  analogWrite (Motor01_in1, 0);
  analogWrite (Motor01_in2, 0);
  analogWrite (Motor02_in3, 0);
  analogWrite (Motor02_in4, 0);
  delay (500);
}
  
}
