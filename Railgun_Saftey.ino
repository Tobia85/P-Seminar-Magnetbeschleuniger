#include <Timer.h>

#define M1 22
#define M2 24
#define M3 26
#define M4 28
#define M5 30
#define M6 32
#define M7 34
#define M8 36
#define M9 38
#define M10 40
#define M11 42
#define M12 44
#define M13 46
#define M14 48
#define M15 50
#define M16 23
#define M17 25
#define M18 27
#define M19 29
#define M20 31

#define H1 A0
#define H2 A1
#define H3 A2
#define H4 A3
#define H5 A4
#define H6 A5
#define H7 A6
#define H8 A7
#define H9 A8
#define H10 A9
#define H11 A10
#define H12 A11
#define H13 35
#define H14 37
#define H15 39
#define H16 41
#define H17 43
#define H18 45
#define H19 47
#define H20 49
#define H21 51
#define H22 53

#define MainSwitch 2
#define StartSwitch 3
#define ResetSwitch 4

#define StatusLED 5

boolean Lock;

Timer timer(MICROS);
 
void setup() {
  Serial.begin(9600);
  Lock=true;
  
  pinMode (M1, OUTPUT);
  pinMode (M2, OUTPUT);
  pinMode (M3, OUTPUT);
  pinMode (M4, OUTPUT);
  pinMode (M5, OUTPUT);
  pinMode (M6, OUTPUT);
  pinMode (M7, OUTPUT);
  pinMode (M8, OUTPUT);
  pinMode (M9, OUTPUT);
  pinMode (M10, OUTPUT);
  pinMode (M11, OUTPUT);
  pinMode (M12, OUTPUT);
  pinMode (M13, OUTPUT);
  pinMode (M14, OUTPUT);
  pinMode (M15, OUTPUT);
  pinMode (M16, OUTPUT);
  pinMode (M17, OUTPUT);
  pinMode (M18, OUTPUT);
  pinMode (M19, OUTPUT);
  pinMode (M20, OUTPUT);

  pinMode (H1, INPUT);
  pinMode (H2, INPUT);
  pinMode (H3, INPUT);
  pinMode (H4, INPUT);
  pinMode (H5, INPUT);
  pinMode (H6, INPUT);
  pinMode (H7, INPUT);
  pinMode (H8, INPUT);
  pinMode (H9, INPUT);
  pinMode (H10, INPUT);
  pinMode (H11, INPUT);
  pinMode (H12, INPUT);
  pinMode (H13, INPUT_PULLUP);
  pinMode (H14, INPUT_PULLUP);
  pinMode (H15, INPUT_PULLUP);
  pinMode (H16, INPUT_PULLUP);
  pinMode (H17, INPUT_PULLUP);
  pinMode (H18, INPUT_PULLUP);
  pinMode (H19, INPUT_PULLUP);
  pinMode (H20, INPUT_PULLUP);
  pinMode (H21, INPUT_PULLUP);
  pinMode (H22, INPUT_PULLUP);

  pinMode (MainSwitch, INPUT_PULLUP);
  pinMode (StartSwitch, INPUT_PULLUP);
  pinMode (ResetSwitch, INPUT_PULLUP);

  pinMode (StatusLED, OUTPUT);

  digitalWrite(M1,LOW);
  digitalWrite(M2,LOW);
  digitalWrite(M3,LOW);
  digitalWrite(M4,LOW);
  digitalWrite(M5,LOW);
  digitalWrite(M6,LOW);
  digitalWrite(M7,LOW);
  digitalWrite(M8,LOW);
  digitalWrite(M9,LOW);
  digitalWrite(M10,LOW);
  digitalWrite(M11,LOW);
  digitalWrite(M12,LOW);
  digitalWrite(M13,LOW);
  digitalWrite(M14,LOW);
  digitalWrite(M15,LOW);
  digitalWrite(M16,LOW);
  digitalWrite(M17,LOW);
  digitalWrite(M18,LOW);
  digitalWrite(M19,LOW);
  digitalWrite(M20,LOW);

  digitalWrite(StatusLED,LOW);
 
}
 
void loop() 
{   
    if(digitalRead(MainSwitch)==LOW)
    {
     digitalWrite(StatusLED,HIGH); 
    }
    else
    {
     digitalWrite(StatusLED,LOW); 
     Lock=true;
    }

    if(digitalRead(StartSwitch)==LOW)
    {
     Lock=false;
    }

    
    if(digitalRead(MainSwitch)==LOW && Lock==false)
    {   
       
        if(analogRead(H2)>800)
        {
        digitalWrite(M1,HIGH);
        }
        if(analogRead(H3)>800)
        {
        digitalWrite(M2,HIGH);
        digitalWrite(M1,LOW);
        }
        if(analogRead(H4)>800)
        {
        digitalWrite(M3,HIGH);
        digitalWrite(M1,LOW);
        digitalWrite(M2,LOW);
        }
        if(analogRead(H5)>800)
        {
        digitalWrite(M4,HIGH); 
        digitalWrite(M2,LOW);
        digitalWrite(M3,LOW);
        }
        if(analogRead(H6)>800)
        {
        digitalWrite(M5,HIGH); 
        digitalWrite(M3,LOW);
        digitalWrite(M4,LOW);
        }
        if(analogRead(H7)>800)
        {
        digitalWrite(M6,HIGH); 
        digitalWrite(M4,LOW);
        digitalWrite(M5,LOW);
        }
        if(analogRead(H8)>800)
        {
        digitalWrite(M7,HIGH); 
        digitalWrite(M5,LOW);
        digitalWrite(M6,LOW);
        }
        if(analogRead(H9)>800)
        {
        digitalWrite(M8,HIGH); 
        digitalWrite(M6,LOW);
        digitalWrite(M7,LOW);
        }
        if(analogRead(H10)>800)
        {
        digitalWrite(M9,HIGH); 
        digitalWrite(M7,LOW);
        digitalWrite(M8,LOW);
        }
        
        if(analogRead(H11)>800)
        {
        digitalWrite(M10,HIGH); 
        digitalWrite(M8,LOW);
        digitalWrite(M9,LOW);
        }
        if(analogRead(H12)>800)
        {
        digitalWrite(M11,HIGH); 
        digitalWrite(M9,LOW);
        digitalWrite(M10,LOW);
        }
        if(digitalRead(H13)==LOW)
        {
        digitalWrite(M12,HIGH); 
        digitalWrite(M10,LOW);
        digitalWrite(M11,LOW);
        }
        if(digitalRead(H14)==LOW)
        {
        digitalWrite(M13,HIGH); 
        digitalWrite(M11,LOW);
        digitalWrite(M12,LOW);
        }
        if(digitalRead(H15)==LOW)
        { 
        digitalWrite(M14,HIGH);
        digitalWrite(M12,LOW); 
        digitalWrite(M13,LOW);
        }
        if(digitalRead(H16)==LOW)
        {
        digitalWrite(M15,HIGH); 
        digitalWrite(M13,LOW);
        digitalWrite(M14,LOW);
        }
        if(digitalRead(H17)==LOW)
        {
        digitalWrite(M16,HIGH);
        digitalWrite(M14,LOW); 
        digitalWrite(M15,LOW);
        }
        if(digitalRead(H18)==LOW)
        {
        digitalWrite(M17,HIGH);
        digitalWrite(M15,LOW); 
        digitalWrite(M16,LOW);
        }
        if(digitalRead(H19)==LOW)
        {
        digitalWrite(M18,HIGH); 
        digitalWrite(M16,LOW);
        digitalWrite(M17,LOW);
        }
        if(digitalRead(H20)==LOW)
        {
        digitalWrite(M19,HIGH); 
        digitalWrite(M17,LOW);
        digitalWrite(M18,LOW);
        }
        if(digitalRead(H21)==LOW)
        {
        digitalWrite(M20,HIGH);
        digitalWrite(M18,LOW); 
        digitalWrite(M19,LOW);
        //timer.start();
        }
        if(digitalRead(H22)==LOW)
        {
        //timer.stop();
        digitalWrite(M19,LOW);
        digitalWrite(M20,LOW);
        Lock=true;
        //Serial.println(timer.read());
        
        } 
        

    }
    
    if(digitalRead(ResetSwitch)==LOW)
    {
      Lock=true;
      digitalWrite(M1,LOW);
      digitalWrite(M2,LOW);
      digitalWrite(M3,LOW);
      digitalWrite(M4,LOW);
      digitalWrite(M5,LOW);
      digitalWrite(M6,LOW);
      digitalWrite(M7,LOW);
      digitalWrite(M8,LOW);
      digitalWrite(M9,LOW);
      digitalWrite(M10,LOW);
      digitalWrite(M11,LOW);
      digitalWrite(M12,LOW);
      digitalWrite(M13,LOW);
      digitalWrite(M14,LOW);
      digitalWrite(M15,LOW);
      digitalWrite(M16,LOW);
      digitalWrite(M17,LOW);
      digitalWrite(M18,LOW);
      digitalWrite(M19,LOW);
      digitalWrite(M20,LOW);
    }
}
