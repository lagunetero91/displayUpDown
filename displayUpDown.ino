int ports [] = {2,3,4,5,6,7,8,9};
  int my_display [10] [7] ={
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,0,0,1,1},
  };
  
  
void setup(){
  for (int i = 0; i < 8; i++){
    pinMode(ports[i], OUTPUT);
  }  
}

void loop(){
 digitalWrite(9,LOW);
 for(int i = 0; i<10; i++ ){
   for(int j = 0; j<7; j++ ){
    digitalWrite(ports[j],my_display[i][j]);
    }
 delay(1000);
 }
 digitalWrite(9,HIGH);
 
 for(int i = 9; i>=0; i-- ){
   for(int j = 6; j>=0; j-- ){
    digitalWrite(ports[j],my_display[i][j]);
    }
 delay(1000);
 }
}



