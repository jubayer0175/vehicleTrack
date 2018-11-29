//executes direct command//just for debugging ..can be excluded from final assembly
void atCmd()
{
serial_read();
//read serial for command
if (serial_RX !="")
{
Serial.println(serial_RX);  
Serial1.print(serial_RX);//send it to the module
Serial1.print("\r");// enter
cmnd=true; //true means cmnd has been issued
delay(500);
serial1_read();//read the feed back of the module;

delay(500); 

Serial.println(serial1_RX);
  delay(10);
 }


//serial_RX = "";
//serial1_RX = "";

}

