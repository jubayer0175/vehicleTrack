

void responseString()
{
 // Serial.println(serial1_RX);
  unsigned int i=0;
  unsigned int j=0;
  String AT_RES="AT+CGPSSTATUS?+CGPSSTATUS: Location UnknownOK";
  unsigned int len=serial1_RX.length();
  char temp;
  for(i=0;i<len;i++){
    temp=serial1_RX[i];
    int tt=(int)temp;
    if((tt !=10)&&(tt !=13))
    {
      clean_str +=temp;
      //Serial.println(i);
    }
  }
  //Serial.println(clean_str);
 /*
  if(clean_str==AT_RES)
  {
    Serial.println("Full match found 4 AT");
  }
  else{
    Serial.println("No match found 4 AT");
  }*/ //For time being
}










