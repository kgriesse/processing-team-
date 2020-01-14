

#define dir1 13
#define pwm1 12     
#define dir2 11     
#define pwm2 10     

int sens1 =A0;
int sens2 =A1;
int pentread =A2;
int val1;
int val2;
bool actout; 

void setup() {
  // put your setup code here, to run once:
pinMode(pwm1, OUTPUT);
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);
Serial.begin(9600);
digitalWrite(pwm1, LOW);
actout = false;


}

void loop() {
  analogRead(pentread);
  Serial.println(pentread);
    if(actout == false)
        {digitalWrite(pwm1, HIGH);
        analogRead (pentread);
        actout = true;
        digitalWrite(pwm1, LOW);}

}
    
