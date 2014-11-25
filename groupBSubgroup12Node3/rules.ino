// ##### RULE 00 ##### RULE 00 ##### RULE 00 ##### RULE 00 ##### RULE 00 ##### RULE 00 ##### RULE 00 ##### RULE 00 ##### RULE 00 ##### RULE 00 ##### RULE 00 ##### RULE 00 ##### RULE 00 #####
void rule0(int ruleNumber)
{
  if (debugMode == true)
  {
    Serial.print("executing rule");
    Serial.print(ruleNumber);
    Serial.println("...");
  }

  sendRule(ruleNumber);

  turnOn(actionPin, 250);
}

// ##### RULE 01 ##### RULE 01 ##### RULE 01 ##### RULE 01 ##### RULE 01 ##### RULE 01 ##### RULE 01 ##### RULE 01 ##### RULE 01 ##### RULE 01 ##### RULE 01 ##### RULE 01 ##### RULE 01 #####
void rule1(int ruleNumber)
{
  if (debugMode == true)
  {
    Serial.print("executing rule");
    Serial.print(ruleNumber);
    Serial.println("...");
  }

  sendRule(ruleNumber);
}

// ##### RULE 02 ##### RULE 02 ##### RULE 02 ##### RULE 02 ##### RULE 02 ##### RULE 02 ##### RULE 02 ##### RULE 02 ##### RULE 02 ##### RULE 02 ##### RULE 02 ##### RULE 02 ##### RULE 02 #####
void rule2(int ruleNumber)
{
  if (debugMode == true)
  {
    Serial.print("executing rule");
    Serial.print(ruleNumber);
    Serial.println("...");
  }

  sendRule(ruleNumber);

  if ((myID % 2) == 0)
  {
    turnOn(actionPin, 250);
  }
}

// ##### RULE 03 ##### RULE 03 ##### RULE 03 ##### RULE 03 ##### RULE 03 ##### RULE 03 ##### RULE 03 ##### RULE 03 ##### RULE 03 ##### RULE 03 ##### RULE 03 ##### RULE 03 ##### RULE 03 #####
void rule3(int ruleNumber)
{
  if (debugMode == true)
  {
    Serial.print("executing rule");
    Serial.print(ruleNumber);
    Serial.println("...");
  }

  sendRule(ruleNumber);

  if ((myID % 2) == 1)
  {
    turnOn(actionPin, 250);
  }
}

// ##### RULE 04 ##### RULE 04 ##### RULE 04 ##### RULE 04 ##### RULE 04 ##### RULE 04 ##### RULE 04 ##### RULE 04 ##### RULE 04 ##### RULE 04 ##### RULE 04 ##### RULE 04 ##### RULE 04 #####
void rule4(int ruleNumber)
{
  if (debugMode == true)
  {
    Serial.print("executing rule");
    Serial.print(ruleNumber);
    Serial.println("...");
  }

  delay(100);
  sendRule(ruleNumber);
  turnOn(actionPin, 250);
}

// ##### RULE 05 ##### RULE 05 ##### RULE 05 ##### RULE 05 ##### RULE 05 ##### RULE 05 ##### RULE 05 ##### RULE 05 ##### RULE 05 ##### RULE 05 ##### RULE 05 ##### RULE 05 ##### RULE 05 #####
void rule5(int ruleNumber)
{
  if (debugMode == true)
  {
    Serial.print("executing rule");
    Serial.print(ruleNumber);
    Serial.println("...");
  }

  sendRule(ruleNumber);
  rhythmFlash(actionPin, 4, 1000);
}

// ##### RULE 06 ##### RULE 06 ##### RULE 06 ##### RULE 06 ##### RULE 06 ##### RULE 06 ##### RULE 06 ##### RULE 06 ##### RULE 06 ##### RULE 06 ##### RULE 06 ##### RULE 06 ##### RULE 06 #####
void rule6(int ruleNumber)
{
  if (debugMode == true)
  {
    Serial.print("executing rule");
    Serial.print(ruleNumber);
    Serial.println("...");
  }

  if ((random(1)) == 0)
  {
    sendRule(ruleNumber);    
  }
  else
  {
    sendRule(7);    
  }
  rhythmFlash(actionPin, 5, 1000);
}

// ##### RULE 07 ##### RULE 07 ##### RULE 07 ##### RULE 07 ##### RULE 07 ##### RULE 07 ##### RULE 07 ##### RULE 07 ##### RULE 07 ##### RULE 07 ##### RULE 07 ##### RULE 07 ##### RULE 07 #####
void rule7(int ruleNumber)
{
  if (debugMode == true)
  {
    Serial.print("executing rule");
    Serial.print(ruleNumber);
    Serial.println("...");
  }

  if ((random(1)) == 0)
  {
    sendRule(6);    
  }
  else
  {
    sendRule(ruleNumber);    
  }
  rhythmFlash(actionPin, 4, 1000);
}

// ##### RULE 08 ##### RULE 08 ##### RULE 08 ##### RULE 08 ##### RULE 08 ##### RULE 08 ##### RULE 08 ##### RULE 08 ##### RULE 08 ##### RULE 08 ##### RULE 08 ##### RULE 08 ##### RULE 08 #####
void rule8(int ruleNumber)
{
  if (debugMode == true)
  {
    Serial.print("executing rule");
    Serial.print(ruleNumber);
    Serial.println("...");
  }

  sendRule(8);
}

// ##### RULE 09 ##### RULE 09 ##### RULE 09 ##### RULE 09 ##### RULE 09 ##### RULE 09 ##### RULE 09 ##### RULE 09 ##### RULE 09 ##### RULE 09 ##### RULE 09 ##### RULE 09 ##### RULE 09 #####
void rule9(int ruleNumber)
{
  if (debugMode == true)
  {
    Serial.print("executing rule");
    Serial.print(ruleNumber);
    Serial.println("...");
  }

  sendRule(9);
  
  int randomValue = random(10);
  rhythmFlash(actionPin, randomValue, 1000);
}




