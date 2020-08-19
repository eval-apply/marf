#ifndef ADC_POTS_SELECTOR_H_
#define ADC_POTS_SELECTOR_H_

#define DELAY_CLOCK() ({ for (uint32_t d = 10; d != 0; d--) {asm("nop");} })
#define DELAY_NOPS() ({asm("nop"); asm("nop");asm("nop"); asm("nop"); asm("nop"); asm("nop"); asm("nop"); asm("nop"); asm("nop"); asm("nop"); asm("nop"); asm("nop"); asm("nop"); asm("nop"); asm("nop"); asm("nop");})

void ADC_POTS_selector_init(void);
void ADC_POTS_selector_SendByte(unsigned char data);
void ADC_POTS_selector_SendHalfByte(unsigned char data);
void ADC_POTS_selector_SendDWord(unsigned long long int data);
void ADC_POTS_selector_Ch(unsigned char Ch);
unsigned char ADC_inc(unsigned char pot);
unsigned char ADC_inc_expanded(unsigned char pot); 
extern void delay_us(unsigned int us);
extern void delay_ns(unsigned int ns);
#endif /* ADC_POTS_SELECTOR_H_ */