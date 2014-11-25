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
  Serial.begin(9600);
  pinMode(actionPin, OUTPUT);
  
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
  /*
  if (debugMode == true)
  {
    Serial.print("executing... loop: ");
    Serial.println(loopCount);
    loopCount++;
  }
  */

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
//  serialData = asciiConvert(serialData);
  return serialData;
}

int asciiConvert(int asciiNumber)
{
  int convertedValue;
  
  if (asciiNumber == 48)
  {
    convertedValue = 0;
  }
  else if (asciiNumber == 49)
  {
    convertedValue = 1;
  }
  else if (asciiNumber == 50)
  {
    convertedValue = 2;
  }
  else if (asciiNumber == 51)
  {
    convertedValue = 3;
  }
  else if (asciiNumber == 52)
  {
    convertedValue = 4;
  }
  else if (asciiNumber == 53)
  {
    convertedValue = 5;
  }
  else if (asciiNumber == 54)
  {
    convertedValue = 6;
  }
  else if (asciiNumber == 55)
  {
    convertedValue = 7;
  }
  else if (asciiNumber == 56)
  {
    convertedValue = 8;
  }
  else if (asciiNumber == 57)
  {
    convertedValue = 9;
  }
  
  return convertedValue;
}






