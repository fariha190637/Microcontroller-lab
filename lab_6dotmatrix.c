void main() 
{
        TRISC=0x00;
        TRISD=0x00;
        while(1)
        {
        
         portd=0b00000011;
         portc=0b11111111;
         delay_ms(10);
        

         portd=0b00111100;
         portc=0b00011000;
         delay_ms(10);
        
        

         portd=0b11000000;
         portc=0b11111111;
         delay_ms(10);
        
        
        }
}