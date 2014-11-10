void sendRule(int ruleNumberOut)
{
  Serial.write(ruleNumberOut);
}

void turnOn(int thisPin, int duration)
{
  digitalWrite(thisPin, HIGH);
  delay(duration);
  digitalWrite(thisPin, LOW);
}

void rhythmFlash(int thisPin, int load, int time)
{
  int interval = time / load;
  for (int i = 0; i < load; i++)
  {
    digitalWrite(thisPin, HIGH);
    delay(interval / 2);
    digitalWrite(thisPin, LOW);
    delay(interval / 2);
  }
}

