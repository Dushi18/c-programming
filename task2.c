
int x=100;
int y=3;
int a=3;
int z=100;
int move=0;
int strike;

PFont font;


void setup()
{
size(1000,700);
  font = loadFont("Arial-Black-48.vlw");
}

void draw(){
  background(155);
  
  textFont (font);
  
  fill(256,0,0);
  ellipse(x,z,50,50);
  
  fill(0);
  text("Task 2: Game ",10,300);

   

    x= x + y;
  z=z+a;
  if(x>width-25|| x<25)
  {
    y=y*-1;
  }
  if( z<25)
  {
  a=a*-1;
  }
  if(z>height-25)
  {
    a=a*-1;
  }
 //if( z>height )
  fill(0,255,0);
  rect(move,630,250,50);
       
  
  if( keyPressed == true && key == 'd'  )
  
{
     move=move+4;
}
 if( keyPressed == true && key == 'a'  )
 {
   move=move-4;
 }
}