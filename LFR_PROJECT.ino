int left_s = 2;
int right_s = 3;
int dc1_right = 4;
int dc2_left = 5;
int dc3_right = 6;
int dc4_left = 7;
void setup() {
  pinMode(left_s, INPUT);
  pinMode(right_s, INPUT);
  pinMode(dc1_right, OUTPUT);
  pinMode(dc2_left, OUTPUT);
  pinMode(dc3_right, OUTPUT);
  pinMode(dc4_left, OUTPUT);

}

void loop() {
if(digitalRead(left_s<500)&& digitalRead(right_s<500)) // forward
{
  digitalWrite(dc1_right,255);
  digitalWrite(dc2_left,255);
}
 else if(digitalRead(left_s<500)&& digitalRead(right_s>500)) // right forward
 {
    digitalWrite(dc1_right,255);
  digitalWrite(dc2_left,0);
 }
  else if(digitalRead(left_s>500)&& digitalRead(right_s<500)) // right forward
 {
    digitalWrite(dc1_right,0);
  digitalWrite(dc2_left,255);
 }

else{
   digitalWrite(dc1_right,0);
  digitalWrite(dc2_left,0);
}
}
