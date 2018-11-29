

void initials()
{
Serial.println("Welcome..");
Serial.println("Initializing....");



 pinMode(pwr, OUTPUT);
 pinMode(12,OUTPUT);
 unsigned char pwrChecker=0;
 
 
 
 do{ 
   serial1_RX="";
   clean_str="";
   
 delay(5);
 digitalWrite(pwr,HIGH);
 delay(20);
 digitalWrite(pwr,LOW);
 delay(1000);
 digitalWrite(pwr,HIGH);
 
 pwrChecker++;
 
 
 if(pwrChecker==3)
 {
 Serial.println("FAILED TO INITIALIZE");
 digitalWrite(12,HIGH);
 }
 
 
 
Serial1.println("AT\r");


serial1_read();

responseString();




 } while(clean_str != "ATOK");
 
 Serial.println("POWERWED UP");
 digitalWrite(12,LOW);
 
 delay(10000);//waits to receive all stored text
 
 
 
 Serial1.println("AT+CMGD=0,4\r"); ///initially all messages will be deleted
 delay(200);
 
 
 
 
 
 
Serial1.println("AT+CGPSPWR=1\r");
delay(100);
Serial1.println("AT+CGPSRST=0\r");
delay(100);

///gps checker fucntion 

  serial1_RX="";
   clean_str="";
   

}
