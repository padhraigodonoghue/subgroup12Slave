void ruler(int ruleNumber)
{
  if (ruleNumber != -1)
  {
    switch (ruleNumber)
    {
    case 0:
      rule0(ruleNumber);
      break;

    case 1:
      rule1(ruleNumber);
      break;

    case 2:
      rule2(ruleNumber);
      break;

    case 3:
      rule3(ruleNumber);
      break;

    case 4:
      rule4(ruleNumber);
      break;

    case 5:
      rule5(ruleNumber);
      break;

    case 6:
      rule6(ruleNumber);
      break;

    case 7:
      rule7(ruleNumber);
      break;

    case 8:
      rule8(ruleNumber);
      break;

    case 9:
      rule9(ruleNumber);
      break;

    case 10:
      rule10(ruleNumber);
      break;

    default:
      if (debugMode == true)
      {
        Serial.print("oops! ... received rule no.");
        Serial.println(ruleNumber);
      }
    }
  }
}

