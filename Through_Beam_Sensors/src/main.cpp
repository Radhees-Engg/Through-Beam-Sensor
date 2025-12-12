#include <Arduino.h>

int i = 0, count = 0;
float LDR_values[5] = {};
float PhotoResistor = 0, values = 0, sum_values = 0;
bool product_dect = false;
bool product_not_found = true;
bool counted = false;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A0, INPUT); 
  for(i = 0; i < 10; i++)
  {
    values = analogRead(A0);
    sum_values += values;
  }
  float LDR_r = sum_values / 10;
  if(LDR_r >= 150)
  {
    Serial.println(String("Above Threshold")+LDR_r);
  }
  else if(LDR_r <= 30)
  {
    Serial.println("Good To Go");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  float PhotoResistor = analogRead(A0);
  
  float V_out = PhotoResistor * (5.0f / 1023.0f);
  float r_LDR = (V_out * 1000) / (5.0 - V_out);

  if(PhotoResistor >= 150)
  {
    product_dect = true;
  }

  if(product_dect && !counted)
  {
    count += 1; 
    counted = true;
  }

  if(PhotoResistor <= 30)
  {
    counted = false;
    product_dect = false;
  }

  Serial.println(r_LDR);
  //Serial.print(String("\r")+count);
   
 // delay(1000);
}
