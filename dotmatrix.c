 int i;
void main()

{
      TRISC=0x00;
      TRISD=0x00;
      while(1)
      {
         portc=0x00;
         portd=0x00;
         for(i=1;i<=125;i++){
           PORTD=0x80;
           PORTC=0xff;
           delay_ms(1);

           PORTD=0x40;
           PORTC=0xff;
           delay_ms(1);

           PORTD=0x20;
           PORTC=0x60;
           delay_ms(1);

           PORTD=0x10;
           PORTC=0x30;
           delay_ms(1);

           PORTD = 0x08;
           PORTC = 0x30;
           delay_ms(1);

           PORTD =0x04;
           PORTC =0x60;
           delay_ms(1);

           PORTD = 0x02;
           PORTC = 0xff;
           delay_ms(1);

           PORTD = 0x01;
           PORTC = 0xff;
           delay_ms(1);
         }

     }


}