//Declaration of Variables
int BatteryTest = A0;
int BrakeSwitch = 2;
int HeadlightSwitch = 3;
int HighPower = 4;
int MediumPower = 6;
int LowPower = 7;
int Tail_LED = 9;
int Head_LED = 10;
//Function Delcarations
void TestLight(int);
void BrakeSense(int);
void Blink(int);

//array setup
char case_switch [] = {a,b,c,d};
int Buttonstate = 0;
void setup() {
  //Configuring pins to behave as desired
  pinMode(BrakeSwitch, INPUT_PULLUP);
  pinMode(HeadlightSwitch, INPUT_PULLUP);
  pinMode(HighPower, OUTPUT);
  pinMode(MediumPower, OUTPUT);
  pinMode(LowPower, OUTPUT);
  pinMode(Tail_LED, OUTPUT);
  pinMode(Head_LED, OUTPUT);
  pinMode(BatteryTest, INPUT);
  //LED startup test
  TestLight(Head_LED);
  TestLight(Tail_LED);
  TestLight(HighPower);
  TestLight(MediumPower);
  TestLight(LowPower);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  switch (case_switch[ButtonState]) {
    case 'a':
      while (ButtonState == 0) {
        BrakeSense(BrakeSwitch);
        Blink(Head_LED);
       /* if (digitalRead(HeadlightSwitch) == LOW) {
        delay(500);
        ButtonState = 'b';
        break;
        
        }
          
        
        
      }

    case 'b':
      while (ButtonState == 'b') {
        BrakeSense(BrakeSwitch);
        digitalWrite(Head_LED, HIGH);

        if (digitalRead(HeadlightSwitch) == LOW) {
          delay(500);
          ButtonState = 'c';
          break;
        }
      }
    case 'c':
      while (ButtonState == 'c') {
        BrakeSense(BrakeSwitch);
        analogWrite(Head_LED, 50);
        if (digitalRead(HeadlightSwitch) == LOW) {
          delay(500);
          ButtonState = 'd';
          break;
        
        }
    }
    case 'd':
      while (ButtonState == 'd') {
        BrakeSense(BrakeSwitch);
        digitalWrite(Head_LED, LOW);
        if (digitalRead(HeadlightSwitch) == LOW) {
          delay(500);
          ButtonState = 'a';
          break;
        }
      }




  }
}*/
//Function Initializations
void TestLight(int Light) {
  digitalWrite(Light, HIGH);
  delay(100);
  digitalWrite(Light, LOW);
  delay(100);
}
void BrakeSense(int button) {
  if (digitalRead(button) == LOW) {
    digitalWrite(Tail_LED, HIGH);

  } else {
    digitalWrite(Tail_LED, LOW);

  }
}
void Blink(int Pin){
  digitalWrite(Pin,HIGH);
  delay(50);
  digitalWrite(Pin,LOW);
  delay(50);
}


