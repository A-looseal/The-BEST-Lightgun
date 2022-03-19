void displayData()
// dumps captured data from array to serial monitor
{
  Serial.println();
  Serial.println("Values from multiplexer:");
  Serial.println("========================");
  for (int i = 0; i < 16; i++)
  {
    Serial.print("input I"); 
    Serial.print(i); 
    Serial.print(" = "); 
    Serial.println(muxValues_Digital[i]);
  }
  Serial.println("========================");  
}