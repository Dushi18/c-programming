int x=100;
int y=3;
int a=3;
int z=100;
void setup()
{
size(1000,700);
}

void draw(){
  background(100);
  ellipse(x,z,50,50);
  x= x + y;
  z=z+a;
  if(x>width-25|| x<25)
  {
    y=y*-1;
  }
  if( z>height-25||z<25)
  {
  a=a*-1;
  }
 
}