void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);          // sets the digital pin 13 as output
  pinMode(12, OUTPUT);          // sets the digital pin 12 as output
  pinMode(A0, INPUT);          // sets the digital pin A0 as input
  pinMode(A1, INPUT);          // sets the digital pin A1 as input

}

void loop() {
  // put your main code here, to run repeatedly:
if (A0){
digitalWrite(13, HIGH);       // sets the digital pin 13 on
}

if (A1){
digitalWrite(12, HIGH);       // sets the digital pin 13 on
}




}



