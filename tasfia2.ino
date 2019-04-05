int echo = 6;
int trig = 7;
long duration, distance;

int leftMotor1ForwardPin = 12;
int leftMotor1ReversePin = 11;
int rightMotor1ForwardPin = 9;
int rightMotor1ReversePin = 8;


int leftMotor2ForwardPin = 5;
int leftMotor2ReversePin = 4;
int rightMotor2ForwardPin = 3;
int rightMotor2ReversePin = 2;


void setup() {

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  pinMode(leftMotor1ForwardPin, OUTPUT);
  pinMode(leftMotor1ReversePin, OUTPUT);
  pinMode(leftMotor2ForwardPin, OUTPUT);
  pinMode(leftMotor2ReversePin, OUTPUT);

  pinMode(rightMotor1ForwardPin, OUTPUT);
  pinMode(rightMotor1ReversePin, OUTPUT);
  pinMode(rightMotor2ForwardPin, OUTPUT);
  pinMode(rightMotor2ReversePin, OUTPUT);



  Serial.begin(9600);

}



void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration / 58;

  if(distance > 10){
    goForward();
    delay(2000);
    goReverse();
    delay(2000);
    goLeft();
    delay(2000);
    goRight();
    delay(2000);
  }

  else{
    halt();
  }
  // delay(5000);

  //goReverse();
  //delay(5000);

  //goLeft();
  //delay(5000);
  //goRight();
  //delay(5000);


}

void halt(){
  digitalWrite(leftMotor1ForwardPin, LOW);
  digitalWrite(leftMotor1ReversePin, LOW);

  digitalWrite(rightMotor1ForwardPin, LOW);
  digitalWrite(rightMotor1ReversePin, LOW);

  digitalWrite(leftMotor2ForwardPin, LOW);
  digitalWrite(leftMotor2ReversePin, LOW);

  digitalWrite(rightMotor2ForwardPin, LOW);
  digitalWrite(rightMotor2ReversePin, LOW);
}

void goForward(){
  digitalWrite(leftMotor1ForwardPin, HIGH);
  digitalWrite(leftMotor1ReversePin, LOW);

  digitalWrite(rightMotor1ForwardPin, HIGH);
  digitalWrite(rightMotor1ReversePin, LOW);

  digitalWrite(leftMotor2ForwardPin, HIGH);
  digitalWrite(leftMotor2ReversePin, LOW);

  digitalWrite(rightMotor2ForwardPin, HIGH);
  digitalWrite(rightMotor2ReversePin, LOW);



}

void goReverse(){
  digitalWrite(leftMotor1ForwardPin, LOW);
  digitalWrite(leftMotor1ReversePin, HIGH);

  digitalWrite(rightMotor1ForwardPin, LOW);
  digitalWrite(rightMotor1ReversePin, HIGH);

  digitalWrite(leftMotor2ForwardPin, LOW);
  digitalWrite(leftMotor2ReversePin, HIGH);

  digitalWrite(rightMotor2ForwardPin, LOW);
  digitalWrite(rightMotor2ReversePin, HIGH);
}

void goLeft(){
  digitalWrite(leftMotor1ForwardPin, LOW);
  digitalWrite(leftMotor1ReversePin, LOW);

  digitalWrite(rightMotor1ForwardPin, HIGH);
  digitalWrite(rightMotor1ReversePin, LOW);

  digitalWrite(leftMotor2ForwardPin, LOW);
  digitalWrite(leftMotor2ReversePin, LOW);

  digitalWrite(rightMotor2ForwardPin, HIGH);
  digitalWrite(rightMotor2ReversePin, LOW);
}

void goRight(){
  digitalWrite(leftMotor1ForwardPin, HIGH);
  digitalWrite(leftMotor1ReversePin, LOW);

  digitalWrite(rightMotor1ForwardPin, LOW);
  digitalWrite(rightMotor1ReversePin, LOW);

  digitalWrite(leftMotor2ForwardPin, HIGH);
  digitalWrite(leftMotor2ReversePin, LOW);

  digitalWrite(rightMotor2ForwardPin, LOW);
  digitalWrite(rightMotor2ReversePin, LOW);
}



