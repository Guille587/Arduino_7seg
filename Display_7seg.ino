int num1=4;
int num2=5;

void setup() {
  
//Salidas a Displays
DDRB=B11111111;
pinMode(7,OUTPUT); 
/*Uso este pin porque el PORTB del ATMEGA solo es de 6 pines y
con esto se tienen para los 7 segmentos del display*/

//Transistores
pinMode(5,OUTPUT); 
pinMode(6,OUTPUT); 
}

void loop() {
     
display_1(num1);
delay(20);
display_2(num2);
delay(20);

}


void display_1 (int num){
   digitalWrite(5,0);
   digitalWrite(6,1);
   switch (num) {
    case 1:
      PORTB=B011000;
      digitalWrite(7,0);
      break;
    case 2:
      PORTB=B110110;
      digitalWrite(7,1);
      break;
    case 3:
      PORTB=B111100;
      digitalWrite(7,1);
      break;
    case 4:
      PORTB=B011001;
      digitalWrite(7,1);
      break;
    case 5:
      PORTB=B101101;
      digitalWrite(7,1);
      break;  
    case 6:
      PORTB=B101111;
      digitalWrite(7,1);
      break;
    case 7:
      PORTB=B111000;
      digitalWrite(7,0);
      break;
    case 8:
      PORTB=B111111;
      digitalWrite(7,1);
      break;
    case 9:
      PORTB=B111101;
      digitalWrite(7,1);
      break;                
    default:
      PORTB=B111111;
      digitalWrite(7,0);   
    break;
  }
  
}

void display_2 (int num){
   digitalWrite(5,1);
   digitalWrite(6,0);
   switch (num) {
    case 1:
      PORTB=B011000;
      digitalWrite(7,0);
      break;
    case 2:
      PORTB=B110110;
      digitalWrite(7,1);
      break;
    case 3:
      PORTB=B111100;
      digitalWrite(7,1);
      break;
    case 4:
      PORTB=B011001;
      digitalWrite(7,1);
      break;
    case 5:
      PORTB=B101101;
      digitalWrite(7,1);
      break;  
    case 6:
      PORTB=B101111;
      digitalWrite(7,1);
      break;
    case 7:
      PORTB=B111000;
      digitalWrite(7,0);
      break;
    case 8:
      PORTB=B111111;
      digitalWrite(7,1);
      break;
    case 9:
      PORTB=B111101;
      digitalWrite(7,1);
      break;                
    default:
      PORTB=B111111;
      digitalWrite(7,0);   
    break;
  }
  
}



