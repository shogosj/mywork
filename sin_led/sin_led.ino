void setup() {
  pinMode( 9,OUTPUT) ;     // 赤LED接続のピン(9番)をデジタル出力に設定
     pinMode(10,OUTPUT) ;     // 青LED接続のピン(10番)をデジタル出力に設定
     pinMode(11,OUTPUT) ;     // 緑LED接続のピン(11番)をデジタル出力に設定
}
void loop() {
     int cycle = 6;
     int H =0 ;
     int R , G , B ;
               /* H値(240-360) 青-紫-赤   */
     float t  = millis()/1000.0;
     int b = (int)(sin(2*3.14/cycle*t)*64)+160;
     B = map(H,240,360,b,0) ;   // 青LED B←→R
     R = map(H,240,360,0,b) ;   // 青LED R←→B 
     G= 0 ;
          /* ＲＧＢＬＥＤに出力する処理   */
          analogWrite(9,R) ;                // 　９番ピンから赤LEDの出力
          analogWrite(11,G) ;               // １１番ピンから緑LEDの出力
          analogWrite(10,B) ;               // １０番ピンから青LEDの出力
        //  delay(100) ;
     }

