void serial_read()
{
 while (Serial.available() > 0) 
            {
	    char inChar = Serial.read();
	    serial_RX += inChar;
	     }

//Serial.println(serial_RX);
delay(100);
}

  void serial1_read()
  {
    unsigned char tt=0;
    char RChar;
      while (Serial1.available()>0 )
          {
                
  	     RChar = Serial1.read();
            
  	      serial1_RX += RChar;
              debug=serial1_RX;
            }
  
               delay(100);
             //  Serial.println(serial1_RX);
               
     }
     //unsigned char hh=serial1_RX.length();
     //Serial.println(hh);
              
  
