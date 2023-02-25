int valADC;
char x[4];

void main() {
     UART1_Init(9600);
     ADC_Init();
     
     while(1)
     {
      valADC=ADC_Read(0);
      IntToStr( valADC,x);
      UART1_Write_text("Analog Value = ");
      UART1_Write_text(x);
      strcpy(x,"");
      UART1_Write(13);
      delay_ms(1000);
     }
     
}