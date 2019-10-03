//Calculate angle (inverse kinematic)
float calcB(float _resAcos, float _resAtan)
{
  float rad = _resAcos - _resAtan;
  float result = -rad * (180/M_PI)+ 30;
 return result;
}

float calcA(float _resAcos, float _resAtan)
{
  float rad = -_resAcos - _resAtan + M_PI/2;
  float result = rad * (180/M_PI) + 90;
  return result;
}


//Moving
bool moveTo(float _x, float _y)
{
  //Restrictions from construction
  if( fabs(_x) < 65 && fabs(_y) < 20)
  {
    Serial.println("wrong position (counstruction interrupt)");
    return 0;
  }
    
  float arcIn = 1 - (square(_x) + square(_y))/20000;
  float resAcos = 0.5* acos(arcIn);
  float resAtan = atan2(_y,_x);
  
  float alpha = calcA(resAcos,resAtan);
  float bheta = calcB(resAcos,resAtan);

  //Restrictions from motors
  if( (alpha>30 && alpha < 155) && (bheta > 22 && bheta <155) && (alpha + bheta) <200)
  {
    alphaServo.write(alpha);
    bhetaServo.write(bheta);
    previous.x = _x;
    previous.y = _y;
  }
  else
  {
    Serial.println("wrong position (angle) ");
  }
  
}

void moveChange(float _x, float _y)
{
  up();
  _x += previous.x;
  _y += previous.y;
  moveTo(_x,_y);
  delay(100);
}




//Go back to base position
void base()
{
  up();
  moveTo(100,100);
}



//Go in a stright line 

//to the point
void line(int _x, int _y)
{
  int difx = _x - previous.x;
  int dify = _y - previous.y;

  int steps = 3*max(fabs(difx), fabs(dify));
  float stepx = (float)difx/(float)steps;
  float stepy = (float)dify/(float)steps;

  int i = 0;
  for(i=0; i<steps; i++)
  {
    moveTo(previous.x + stepx, previous.y + stepy);
    delay(5);
  }
  moveTo(_x, _y);
  delay(1000);
}

//a distance
void lineChange(float _x, float _y)
{
  down();
  _x += previous.x;
  _y += previous.y;
  line(_x,_y);
}


//Stepper

void vert(int steps)
{
    myStepper.step(-steps);
    delay(steps*3);
}

void up()
{
  if(digitalRead(7))
    vert(800);
  level = 1;
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}

void down()
{
  Serial.println("DOWN");
  while(!digitalRead(7))
    vert(-20);
  level = 0;
  Serial.println("DOWN");
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10, LOW);
}
