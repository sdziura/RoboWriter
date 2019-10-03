void writeWord(String _word)
{
  int len = _word.length();
  
  if(len > countCharacters())
  {
    Serial.println("Too long word");
    return;
  }
  else
  {
    int i;
    for(i = 0; i < len; i++)
    {
      goWorkspace(i);
      writeLetter(_word[i]);
    }
  }
}

void writeSentence(char _word[])
{
  
}


String readWord()
{
  while(Serial.available() == 0);
  return Serial.readString();
}
