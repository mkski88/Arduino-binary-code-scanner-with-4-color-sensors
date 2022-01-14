void setup() 
{
Serial.begin(9600); 
}
void loop() 
{   
delayMicroseconds(500); 
int array[4];
int array2[4];
array2[0]=analogRead(A0);//a
array2[1]=analogRead(A2);//b
array2[2]=analogRead(A3);//c
array2[3]=analogRead(A5);//d
for(int i=0;i<4;i++)
{
  if(array2[i]>=900)
  {
      array[i]=0;
  }
  else
  {
      array[i]=1;
  }
}
  String v =String(array[0])+String(array[1])+String(array[2])+String(array[3]);
  //Serial.println(v);
if(array[0]==1)
  {
  array[0]=8;
  }
else
  {
  array[0]=0;
  }
////////////
if(array[1]==1)
  {
  array[1]=4;
  }
else
  {
  array[1]=0;
  }
  ////////////
if(array[2]==1)
  {
  array[2]=2;
  }
else
  {
  array[2]=0;
  }
  ////////////
if(array[3]==1)
  {
  array[3]=1;
  }
else
  {
  array[3]=0;
  }
     v =String(array[0]+array[1]+array[2]+array[3]);
  Serial.println(v);
}
