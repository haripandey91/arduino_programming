
int lamp=11;
int tv=12;
int light=8;
int pc=7;

int Received=0;
int light_state =0;
int tv_state = 0;
int pc_state = 0;


void setup(){
  
  Serial.begin(9600);
  pinMode(lamp,OUTPUT);
  pinMode(tv,OUTPUT);
  pinMode(light,OUTPUT);
  pinMode(pc,OUTPUT);
  
}

void loop(){
 
 if(Serial.available()>0)
 { 
    Received = Serial.read();
    
 }
////////////////LIGHT/////////////////////
if (light_state == 0 && Received == '1')
  {
    digitalWrite(light,HIGH);
    light_state=1;
    Received=0;  
  }
if (light_state ==1 && Received == '1')
  {
    digitalWrite(light,LOW);
    light_state=0;
    Received=0;
  }
///////////////////////////////////////////



////////////////TV/////////////////////
if (tv_state == 0 && Received == 'a')
  {
    digitalWrite(tv,HIGH);
    vent_state=1;
    Received=0;  
  }
if (tv_state ==1 && Received == 'a')
  {
    digitalWrite(tv,LOW);
    vent_state=0;
    Received=0;
  }
///////////////////////////////////////////




////////////////PC/////////////////////
if (pc_state == 0 && Received == '2')
  {
    digitalWrite(pc,HIGH);
    pc_state=1;
    Received=0;  
  }
if (pc_state ==1 && Received == '2')
  {
    digitalWrite(pc,LOW);
    pc_state=0;
    Received=0;
  }
///////////////////////////////////////////




  
////////////////LAMP/////////////////////
 if (Received =='8'){
   digitalWrite(lamp,HIGH);   
  }  
 if (Received == '9'){
 digitalWrite(lamp,LOW);
 }
 ///////////////////////////////////////////

 
 
}
