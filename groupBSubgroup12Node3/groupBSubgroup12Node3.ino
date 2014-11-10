// author: 0350788
// 08 Nov 2014, 21:56
// untested!

const int myID = 3;

boolean debugMode = true; // a global switch for enabling and disabling Serial messages used for debugging
boolean realRandom = true; // a switch for enabling the randomSeed function to ensure output varies with each run
long loopCount = 1;

int actionPin = 13;

// initialisation
void setup()
{
  if (debugMode == true)
  {
    Serial.println("setup complete...");
  }

  if (realRandom == true)
  {
    randomSeed(analogRead(0));
  }
}

// main program
void loop()
{
  if (debugMode == true)
  {
    Serial.print("executing... loop: ");
    Serial.println(loopCount);
    loopCount++;
  }

  int rule = serialListen();
  
  // the huge switch function block
  ruler(rule);
}

// listen to serial Port function
// if Serial Port buffer is empty, return a value of -1
int serialListen()
{
  int returnData;
  if (Serial.available() > 0)
  {
    returnData = serviceSerial();
  }
  else
  {
    returnData = -1;
  }
  return returnData;
}

// function for reading and processing Serial Port buffer data
int serviceSerial()
{
  int serialData = Serial.read();
  return serialData;
}







