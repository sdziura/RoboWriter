
struct Point workspace()
{
  float yp = 50* sqrt(3) + (float)fontSize.y /2  + verse*fontSize.y*1.5;
  float bhetap = acos(yp/100 - sqrt(3)/2);
  float xp = 100*(0.5 - sin(bhetap))+fontSize.x/2;
  struct Point result;
  result.x = xp;
  result.y = yp;
  return result;
}

struct Point workspaceEnd()
{  
  float yp = 50* sqrt(3) + (float)fontSize.y /2;
  float alphap = asin(1 - yp/100);
  float xp = 100*(cos(alphap))+ fontSize.x;
  struct Point result;
  result.x = xp;
  result.y = yp;
  return result;
}

void goWorkspace(int charNr)
{
  up();

  //Correction of vertical level
  float correction = 0;
  if(charNr*fontSize.x > 15 && verse == 0)
    correction += 5;
  if(charNr*fontSize.x > 40 && verse == 0)
    correction += 3; 
  ////////////////////////
  
  struct Point pos = workspace();
  float xp = pos.x + charNr*fontSize.x*1.5;
  float yp = pos.y + correction;
  moveTo(xp, yp);
 delay(600);
}

int countCharacters()
{
  struct Point _begin = workspace();
  struct Point _end = workspaceEnd();
  float lineLength = _end.x - _begin.x;
  int amount = lineLength/ (1.5*fontSize.x);
  return amount;
}

void changeVerse(int lnNr)
{
  verse = lnNr;
}
