void writeLetter(char letter)
{
  int s = fontSize.x;
  int l = fontSize.y;
  
  if(letter > 96 && letter < 123)
    letter -= 32;
  else if(letter >90 || letter < 65)
    Serial.println("Wrong lettter");
    
  switch(letter)
  {
    case 'A':
    {
      moveChange(0, -l);
      lineChange(s/2, l);
      lineChange(s/2, -l);
      moveChange(-s/4, l/2);
      lineChange(-s/2, 0);
      break;
    }

    case 'B':
    {
      lineChange(s/2, 0);
      lineChange(s/2, -l/4);
      lineChange(-s/2, -l/4);
      lineChange(-s/2, 0);
      lineChange(s/2, 0);
      lineChange(s/2, -l/4);
      lineChange(-s/2, -l/4);
      lineChange(-s/2, 0);
      lineChange(0, l);
      break;
    }

    case 'C':
    {
      moveChange(s, -l/4);
      lineChange(-s/4, l/4);
      lineChange(-s/2, 0);
      lineChange(-s/4, -l/2);
      lineChange(s/4, -l/2);
      lineChange(s/2, 0);
      lineChange(s/4, l/4);
      break;
    }

    case 'D':
    {
      lineChange(s/2, 0);
      lineChange(s/2, -l/4);
      lineChange(0, -l/2);
      lineChange(-s/2, -l/4);
      lineChange(-s/2, 0);
      lineChange(0, l);
      break;
    }

    case 'E':
    {
      moveChange(s, 0);
      lineChange(-s, 0);
      lineChange(0, -l);
      lineChange(s, 0);
      moveChange(-s, l/2);
      lineChange(s*3/4, 0);
      break;
    }

    case 'F':
    {
      moveChange(s, 0);
      lineChange(-s, 0);
      lineChange(0, -l);
      moveChange(0, l/2);
      lineChange(s*3/4, 0);
      break;
    }

    case 'G':
    {
      moveChange(s, -l/4);
      lineChange(-s/4, l/4);
      lineChange(-s/2, 0);
      lineChange(-s/4, -l/2);
      lineChange(s/4, -l/2);
      lineChange(s/2, 0);
      lineChange(s/4, l/4);
      lineChange(-s/4, 0);
      break;
    }

    case 'H':
    {
      lineChange(0, -l);
      moveChange(0, l/2);
      lineChange(s, 0);
      moveChange(0, l/2);
      lineChange(0, -l);
      break;
    }

    case 'I':
    {
      moveChange(s/2, 0);
      lineChange(0, -l);
      break;
    }

    case 'J':
    {
      lineChange(0, -l*3/4);
      lineChange(s/4, -l/4);
      lineChange(s/2, 0);
      lineChange(s/4, l/4);
      lineChange(0, l/4);
      break;
    }

    case 'K':
    {
      lineChange(0, -l);
      moveChange(s, 0);
      lineChange(-s, l/2);
      lineChange(s, l/2);
      break;
    }

    case 'L':
    {
      lineChange(0, -l);
      lineChange(s, 0);
      break;
    }

    case 'M':
    {
      moveChange(0, -l);
      lineChange(0, l);
      lineChange(s/2, -l/2);
      lineChange(s/2, l/2);
      lineChange(0, -l);
      break;
    }

    case 'N':
    {
      moveChange(0, -l);
      lineChange(0, l);
      lineChange(s, -l);
      lineChange(0, l);
      break;
    }

    case 'O':
    {
      moveChange(0, -l/4);
      lineChange(s/4, l/4);
      lineChange(s/2, 0);
      lineChange(s/4, -l/4);
      lineChange(0, -l/2);
      lineChange(-s/4, -l/4);
      lineChange(-s/2, 0);
      lineChange(-s/4, l/4);
      lineChange(0, l/2);
      break;
    }

    case 'P':
    {
      moveChange(0, -l);
      lineChange(0, l);
      lineChange(s*3/4, 0);
      lineChange(s/4, -l/8);
      lineChange(0, -l/4);
      lineChange(-s/4, -l/8);
      lineChange(-s*3/4, 0);
      break;
    }

    case 'R':
    {
      moveChange(0, -l);
      lineChange(0, l);
      lineChange(s*3/4, 0);
      lineChange(s/4, -l/8);
      lineChange(0, -l/4);
      lineChange(-s/4, -l/8);
      lineChange(-s*3/4, 0);
      lineChange(s, -l/2);
      break;
    }
    
    case 'S':
    {
      moveChange(s, 0);
      lineChange(-s, 0);
      lineChange(0, -l/2);
      lineChange(s, 0);
      lineChange(0, -l/2);
      lineChange(-s, 0);
      break;
    }

    case 'T':
    {
      lineChange(s, 0);
      moveChange(-s/2, 0);
      lineChange(0, -l);
      break;
    }

    case 'U':
    {
      lineChange(0, -l);
      lineChange(s, 0);
      lineChange(0, l);
      break;
    }

    case 'W':
    {
      lineChange(0, -l);
      lineChange(s/2, l/2);
      lineChange(s/2, -l/2);
      lineChange(0, l);
      break;
    }

    case 'Y':
    {
      lineChange(s/2, -l/2);
      lineChange(s/2, l/2);
      moveChange(-s/2, -l/2);
      lineChange(0, -l/2);
      break;
    }

    case 'Z':
    {
      lineChange(s, -0);
      lineChange(-s, -l);
      lineChange(s, 0);
      break;
    }

  }
    
}
