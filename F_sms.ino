void sms()
{
  int n=0;
  int len;
  char temp;
  int tt;
  len=clean_str.length();
//  Serial.println(len);
 // Serial.println(clean_str);
  
  
  for(unsigned int i=0;i<len;i++){
    temp=clean_str[i];
    tt=(int)temp;
    
    if(n==8){
      msg +=temp;
      //Serial.println("Message");
      delay(10);
    }
    
    if(tt==34){
      n++;
      //Serial.println("Inverted found");
      delay(10);
    }
  }
}
