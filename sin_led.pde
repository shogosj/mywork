int b;
float pt;
float s;
int cycle=3;

void setup(){
  b=0;
  pt = millis()/1000.0;
}
void draw(){
  // 6秒で1周期
  float t  = millis()/1000.0-pt;
  b = (int)(sin(2*3.14/cycle*t)*50)+206;
  //println(b);
  //  b = (int)(sin(6.28*t)*128)+128;
  background(b);
}
