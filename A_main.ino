///texting 

#define pwr 13
#define led 11



String txtMsg = "";
String serial_RX="";
String clean_str="";
String serial1_RX="";
String msg="";
String debug="";

boolean cmnd=false; //new included

//////////////FUNCTIONS


void serial_read();
void serial1_read();
void initials();
void atCmd();
void responseString();
void sms();
void text();

///

unsigned char a;

//String test="testing";


//////////////


void setup()
{
Serial.begin(9600);
Serial1.begin(9600);
delay(100);

pinMode(led,OUTPUT);
delay(2);
digitalWrite(led,LOW);


initials();



}

/////////////////////////////////////////////////////////////////////////
void loop()
{
 
/*atCmd();
 if(cmnd){
  responseString();
  sms();
  Serial.println(msg);
  cmnd=false;
  }*/
 
 
 
 
 //text(test);
 
 
 
 
 
 
 
 serial1_read();
 delay(100);
// Serial.println(serial1_RX);
 

 
 
 if(serial1_RX !=""){
   responseString();
   if(clean_str =="+CMTI: \"SM\",1"){
     msgX();
  }
 }  
 delay(1000);
 
 
 serial_RX = "";
 serial1_RX= "";
 clean_str="";
 msg="";
 debug="";
}
