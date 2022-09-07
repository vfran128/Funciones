int D = 20;
int x = 0;
int y = 0;
int pxr =380;
int pyr = 170;
int pyl = 170;
int pxl = 10;
int vx = 3;
int vy = 0;

void setup(){
  size(400,400);
  fill(255);
}

void drawPaddle(int px, int py){
  rect(px,py,10,60);
}

boolean isCollidingRight (int bx, int by, int px, int py){
  boolean result = false;
  if (bx+D/2 >= px && by+D/2 >= py) result = true;
  return result;
}

boolean isCollidingLeft (int bx, int by, int px, int py){
  boolean result = false;
  if (bx-D/2 >= px + 10 && by-D/2 >= py -60) result = true;
  return result;
}

void wallColliding(){
  if (x >= width || x < 0 ) vx *= -1;
  if (y >= height || y < 0) vy *= -1;
}

void drawBall(int x, int y){
  ellipse(x,y,D,D);
}

void draw(){
  wallColliding();
  background(0);
  drawPaddle(pxr, pyr);
  drawPaddle(pxl, pyl);
  drawBall(200,200);
  x += vx;
  y += vy;
  if (isCollidingRight(x, y, pxr, pyr)) vx *= -1;
  if (isCollidingLeft(x, y, pxl, pyl)) vx *= -1;
}
