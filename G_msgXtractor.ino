void msgX(){
  Serial.println("Msg has been received");
     serial1_RX="";
     clean_str="";
     Serial1.println("AT+CMGR=1");
     Serial1.print("\r");
     delay(1000);
     serial1_read();
     delay(100);
     //Serial.println(debug);///read function theke ber hole serial1_RX null hoy tai new variable
     serial1_RX=debug;
     responseString();
     //Serial.println("CLEAN");
     //Serial.println(clean_str);
     sms();    
     Serial.println(msg);
     
      // Start of deleting segment
     delay(20);
     Serial1.flush();
     serial1_RX="";
     Serial1.println("AT+CMGD=1");
     Serial1.print("\r");
     delay(100);
     serial1_read();
     Serial.print(serial1_RX); //Doesnt show the response.why?
     serial1_RX="";//End of deleting segment
     
     if(msg=="1234 ONOK")
     {        
     digitalWrite(led,HIGH);
     text("done");
     }  
    delay(100);
     
}
